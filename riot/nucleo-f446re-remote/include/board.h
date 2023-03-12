/*
 * Copyright (C) 2016-2017 Freie Universität Berlin
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @defgroup    boards_nucleo_f446re_remote STM32 Nucleo-F446RE with a Nokla 5110 shield
 * @ingroup     boards
 * @brief       Support for the Nucleo-F446RE with an Nokla 5110 Joystick shield
 * @{
 *
 * @file
 * @brief       Common pin definitions and board configuration options
 *
 * @author      Hauke Petersen <hauke.petersen@fu-berlin.de>
 * @author      Sebastian Meiling <s@mlng.net>
 */

#ifndef BOARD_H
#define BOARD_H

#include "board_nucleo.h"
#include "arduino_pinmap.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @name    LED pin definitions and handlers
 * @{
 */
#define LED0_PIN_NUM        5
#define LED0_PORT_NUM       PORT_A
/** @} */

/**
 * @name    User button
 * @{
 */
#define BTN0_PIN            GPIO_PIN(PORT_C, 13)
#define BTN0_MODE           GPIO_IN_PU
/** @} */

/**
 * @name    nRF24L01+ config
 * @{
 */
#define NRF24L01P_NG_PARAM_SPI              SPI_DEV(0)
#define NRF24L01P_NG_PARAM_CS               ARDUINO_PIN_10
#define NRF24L01P_NG_PARAM_CE               ARDUINO_PIN_9
/* IRQ line is not connected via Nokla 5110 shield, has to manually be wired */
#define NRF24L01P_NG_PARAM_IRQ              GPIO_PIN(PORT_C, 0)
/** @} */

/**
 * @name    nRF24L01+ config
 * @{
 */
#define JOYSTICK_AXIS_X                     ARDUINO_A0
#define JOYSTICK_AXIS_Y                     ARDUINO_A1

#define JOYSTICK_BTN_A_PIN                  ARDUINO_PIN_2
#define JOYSTICK_BTN_A_MODE                 GPIO_IN_PU
#define JOYSTICK_BTN_B_PIN                  ARDUINO_PIN_3
#define JOYSTICK_BTN_B_MODE                 GPIO_IN_PU
#define JOYSTICK_BTN_C_PIN                  ARDUINO_PIN_4
#define JOYSTICK_BTN_C_MODE                 GPIO_IN_PU
#define JOYSTICK_BTN_D_PIN                  ARDUINO_PIN_5
#define JOYSTICK_BTN_D_MODE                 GPIO_IN_PU
#define JOYSTICK_BTN_E_PIN                  ARDUINO_PIN_6
#define JOYSTICK_BTN_E_MODE                 GPIO_IN_PU
#define JOYSTICK_BTN_F_PIN                  ARDUINO_PIN_7
#define JOYSTICK_BTN_F_MODE                 GPIO_IN_PU
#define JOYSTICK_BTN_K_PIN                  ARDUINO_PIN_8
#define JOYSTICK_BTN_K_MODE                 GPIO_IN_PU
/** @} */

#ifdef __cplusplus
}
#endif

#include "stm32_leds.h"

#endif /* BOARD_H */
/** @} */
