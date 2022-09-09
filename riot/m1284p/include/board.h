/*
 * Copyright (C) 2014 Freie Universität Berlin, Hinnerk van Bruinehsen
 *               2016 Laurent Navet <laurent.navet@gmail.com>
 *               2019 Otto-von-Guericke-Universität Magdeburg
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     boards_atmega1284p
 * @{
 *
 * @file
 * @brief       Board specific definitions for the standalone ATmega1284P "board"
 *
 * @author      Marian Buschsieweke <marian.buschsieweke@ovgu.de>
 * @author      Hinnerk van Bruinehsen <h.v.bruinehsen@fu-berlin.de>
 * @author      Laurent Navet <laurent.navet@gmail.com>
 */

#ifndef BOARD_H
#define BOARD_H

#include "cpu.h"
#include "periph_conf.h"
#include "mtd.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @name    STDIO configuration
 * @{
 */
#define STDIO_UART_BAUDRATE (9600U)
/** @} */

/**
 * @name    ztimer configuration values
 * @{
 */
#define CONFIG_ZTIMER_USEC_TYPE         ZTIMER_TYPE_PERIPH_TIMER
#define CONFIG_ZTIMER_USEC_DEV          (TIMER_DEV(0))
#define CONFIG_ZTIMER_USEC_BASE_FREQ    (CLOCK_CORECLOCK / 64)
#define CONFIG_ZTIMER_USEC_WIDTH        (16)
/** @} */

/**
 * @name    CC110x configuration
 * @{
 */
#define CC110X_PARAM_CS                 GPIO_PIN(PORT_B, 0)
#define CC110X_PARAM_GDO0               GPIO_PIN(PORT_B, 2)
#define CC110X_PARAM_GDO2               GPIO_PIN(PORT_D, 3)
/** @} */

/**
 * @name micro-sd slot pin definitions
 * @{
 */
#define SDCARD_SPI_PARAM_SPI            SPI_DEV(0)          /**< SPI device */
#ifndef SDCARD_SPI_PARAM_CS
#define SDCARD_SPI_PARAM_CS             GPIO_PIN(PORT_B, 0) /**< Chip Select */
#endif
#define SDCARD_SPI_PARAM_CLK            GPIO_PIN(PORT_B, 7) /**< Serial Clock */
#define SDCARD_SPI_PARAM_MOSI           GPIO_PIN(PORT_B, 5) /**< Master Output, Slave Input */
#define SDCARD_SPI_PARAM_MISO           GPIO_PIN(PORT_B, 6) /**< Master Input, Slave Output */
#define SDCARD_SPI_PARAM_POWER          GPIO_UNDEF          /**< Powen on/off */
#define CARD_DETECT_PIN                 GPIO_UNDEF          /**< Pin for card detect */
/** @} */

/** Default MTD device */
#define MTD_0 mtd0

/** mtd flash emulation device */
extern mtd_dev_t *mtd0;

/**
 * @brief   Initialize board specific hardware, including clock, LEDs and std-IO
 */
void board_init(void);

#ifdef __cplusplus
}
#endif

#endif /* BOARD_H */
/** @} */
