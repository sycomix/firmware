#include "manager.h"
#include "global.h"
#include "sys/util.h"


bool NRFBEACON_OPTIMIZE NRFBeacon::Manager::processPacket(void* ptr, int len)
{
    Message* data = (Message*)ptr;
    if (len < 4 || data->protocol != 0xffff) return false;
    switch (data->msgType)
    {
    case MessageTypeCommand:
        switch (data->msg.cmd.command)
        {
        case CommandSetParameters:
        {
            int baseLen = sizeof(*data) - sizeof(data->msg.cmd.args.setParameters.radioSettings);
            if (len < baseLen) break;
            if (data->msg.cmd.args.setParameters.target.vendor
             && memcmp(&data->msg.cmd.args.setParameters.target, &id->hw, sizeof(id->hw))) break;
            sendIdCount = data->msg.cmd.args.setParameters.idBeaconCount;
            interval = MIN(idleInterval * 100, data->msg.cmd.args.setParameters.beaconInterval);
            timeout = MAX(1, MIN(maxTimeout, data->msg.cmd.args.setParameters.timeout));
            localId = data->msg.cmd.args.setParameters.localId;
            if (len > baseLen) applyRadioSettings(&data->msg.cmd.args.setParameters.radioSettings, len - baseLen);
            if (!sendIdCount) return true;
        }
        // fallthrough
        case CommandSendId:
            data->msgType = MessageTypeBeacon;
            data->msg.beacon.localId = localId;
            memcpy(&data->msg.beacon.payload, id, sizeof(*id));
            radio->transmit(-1, data, sizeof(Message) - sizeof(data->msg.beacon.payload) + sizeof(*id));
            return true;
        }
    default: break;
    }
    return false;
}

NRF::SPI::Status NRFBEACON_OPTIMIZE NRFBeacon::Manager::sendBeacon()
{
    Message beacon;
    beacon.protocol = 0xffff;
    beacon.msgType = MessageTypeBeacon;
    beacon.msg.beacon.localId = localId;
    if (sendIdCount)
    {
        sendIdCount--;
        memcpy(&beacon.msg.beacon.payload, id, sizeof(*id));
        return radio->transmit(-1, &beacon, sizeof(Message) - sizeof(beacon.msg.beacon.payload) + sizeof(*id));
    }
    else if (localId)
    {
        beacon.msgType = MessageTypePayloadBeacon;
        if (!payload) payloadLen = 0;
        else memcpy(&beacon.msg.beacon.payload, payload, payloadLen);
        return radio->transmit(-1, &beacon, sizeof(Message) - sizeof(beacon.msg.beacon.payload) + payloadLen);
    }
    else return radio->transmit(-1, &beacon, 2);
}

void NRFBEACON_OPTIMIZE NRFBeacon::Manager::timeoutExpired()
{
    timeout = 0;
    interval = idleInterval * 100;
    sendIdCount = 7;
    resetRadioSettings();
}
