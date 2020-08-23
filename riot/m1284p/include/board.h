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
 * @name    xtimer configuration values
 * @{
 */
#define XTIMER_WIDTH                (16)
#define XTIMER_HZ                   (CLOCK_CORECLOCK / 64)
#define XTIMER_BACKOFF              (80)
#define XTIMER_ISR_BACKOFF          (120)
/** @} */

/**
 * @name    ztimer configuration values
 * @{
 */
#define CONFIG_ZTIMER_USEC_TYPE     ZTIMER_TYPE_PERIPH_TIMER
#define CONFIG_ZTIMER_USEC_DEV      (TIMER_DEV(0))
#define CONFIG_ZTIMER_USEC_FREQ     XTIMER_HZ
#define CONFIG_ZTIMER_USEC_WIDTH    (16)
/** @} */

/**
 * @name    STDIO configuration
 * @{
 */
#define CC110X_PARAM_CS             GPIO_PIN(PORT_B, 0)
#define CC110X_PARAM_GDO0           GPIO_PIN(PORT_B, 2)
#define CC110X_PARAM_GDO2           GPIO_PIN(PORT_D, 3)
/** @} */

/**
 * @brief   Initialize board specific hardware, including clock, LEDs and std-IO
 */
void board_init(void);

#ifdef __cplusplus
}
#endif

#endif /* BOARD_H */
/** @} */
