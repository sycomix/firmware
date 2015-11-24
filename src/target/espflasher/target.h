#pragma once

#define STM32_GPIO_CONFIG \
{ \
    GPIO_CONFIG_PORT( /* PORTA */ \
        /* PA 0 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* unmapped */ \
        /* PA 1 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* unmapped */ \
        /* PA 2 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* unmapped */ \
        /* PA 3 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* unmapped */ \
        /* PA 4 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* unmapped */ \
        /* PA 5 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* unmapped */ \
        /* PA 6 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* unmapped */ \
        /* PA 7 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* unmapped */ \
        /* PA 8 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_UP, INITCTL_SET, INITVAL_HIGH, SPECIAL_SYS, /* microSD CS, MCO */ \
        /* PA 9 */ MODE_SPECIAL, TYPE_OPENDRAIN, SPEED_2MHZ, PULL_UP, INITCTL_SET, INITVAL_LOW, SPECIAL_USART1_PA9, /* ESP8266 TX */ \
        /* PA10 */ MODE_SPECIAL, TYPE_PUSHPULL, SPEED_2MHZ, PULL_UP, INITCTL_SET, INITVAL_LOW, SPECIAL_USART1_PA10, /* ESP8266 RX */ \
        /* PA11 */ MODE_SPECIAL, TYPE_PUSHPULL, SPEED_25MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_USB, /* USB D- */ \
        /* PA12 */ MODE_SPECIAL, TYPE_PUSHPULL, SPEED_25MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_USB, /* USB D+ */ \
        /* PA13 */ MODE_SPECIAL, TYPE_PUSHPULL, SPEED_100MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* SWDIO */ \
        /* PA14 */ MODE_SPECIAL, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* SWCLK */ \
        /* PA15 */ MODE_SPECIAL, TYPE_PUSHPULL, SPEED_2MHZ, PULL_UP, INITCTL_SET, INITVAL_LOW, SPECIAL_USART2_PA15, /* ESP8266 GPIO2 */ \
    ), \
    GPIO_CONFIG_PORT( /* PORTB */ \
        /* PB 0 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* unmapped */ \
        /* PB 1 */ MODE_OUTPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_HIGH, SPECIAL_SYS, /* unmapped (ESP8266 CH_PD/RST) */ \
        /* PB 2 */ MODE_OUTPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_HIGH, SPECIAL_SYS, /* LCD DC (ESP8266 GPIO0) */ \
        /* PB 3 */ MODE_SPECIAL, TYPE_PUSHPULL, SPEED_25MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SPI1, /* SPI1_SCK */ \
        /* PB 4 */ MODE_SPECIAL, TYPE_PUSHPULL, SPEED_25MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SPI1, /* SPI1_MISO */ \
        /* PB 5 */ MODE_SPECIAL, TYPE_PUSHPULL, SPEED_25MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SPI1, /* SPI1_MOSI */ \
        /* PB 6 */ MODE_SPECIAL, TYPE_OPENDRAIN, SPEED_2MHZ, PULL_UP, INITCTL_SET, INITVAL_LOW, SPECIAL_I2C1_PB6, /* I2C1_SCL */ \
        /* PB 7 */ MODE_SPECIAL, TYPE_OPENDRAIN, SPEED_2MHZ, PULL_UP, INITCTL_SET, INITVAL_LOW, SPECIAL_I2C1_PB7, /* I2C1_SDA */ \
        /* PB 8 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* LCD Backlight */ \
        /* PB 9 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* OneWire Bus */ \
        /* PB10 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_I2C2, /* I2C2_SCL */ \
        /* PB11 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_I2C2, /* I2C2_SDA */ \
        /* PB12 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_25MHZ, PULL_UP, INITCTL_SET, INITVAL_HIGH, SPECIAL_SYS, /* LCD CS */ \
        /* PB13 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_25MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SPI2_PB13, /* SPI2_SCK */ \
        /* PB14 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_25MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SPI2_PB14, /* SPI2_MISO */ \
        /* PB15 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_25MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SPI2_PB15, /* SPI2_MOSI */ \
    ), \
    GPIO_CONFIG_PORT( /* PORTC */ \
        /* PC 0 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* nonpresent */ \
        /* PC 1 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* nonpresent */ \
        /* PC 2 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* nonpresent */ \
        /* PC 3 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* nonpresent */ \
        /* PC 4 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* nonpresent */ \
        /* PC 5 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* nonpresent */ \
        /* PC 6 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* nonpresent */ \
        /* PC 7 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* nonpresent */ \
        /* PC 8 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* nonpresent */ \
        /* PC 9 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* nonpresent */ \
        /* PC10 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* nonpresent */ \
        /* PC11 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* nonpresent */ \
        /* PC12 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* nonpresent */ \
        /* PC13 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_UP, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* WKUP (NRF IRQ) */ \
        /* PC14 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* OSC32_IN */ \
        /* PC15 */ MODE_INPUT, TYPE_PUSHPULL, SPEED_2MHZ, PULL_NONE, INITCTL_SET, INITVAL_LOW, SPECIAL_SYS, /* OSC32_OUT */ \
    ), \
}

#define STM32_ENABLE_UART
#define STM32_ENABLE_USB
#include "board/flexperiment/micro/f072/target.h"
