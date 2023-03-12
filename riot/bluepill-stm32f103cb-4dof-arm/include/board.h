/*
 * Copyright (C) 2015 TriaGnoSys GmbH
 *               2017 Alexander Kurth, Sören Tempel, Tristan Bruns
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     boards_bluepill_stm32f103cb
 *
 * This board can be bought very cheaply on sides like eBay or
 * AliExpress. Although the MCU nominally has 64 KiB ROM, most of them
 * have 128 KiB ROM. For more information see:
 * https://web.archive.org/web/20190527040051/http://wiki.stm32duino.com/index.php?title=Blue_Pill
 *
 * @{
 *
 * @file
 * @brief       Peripheral MCU configuration for the bluepill board
 *
 * @author      Víctor Ariño <victor.arino@triagnosys.com>
 * @author      Sören Tempel <tempel@uni-bremen.de>
 * @author      Tristan Bruns <tbruns@uni-bremen.de>
 * @author      Alexander Kurth <kurth1@uni-bremen.de>
 */

#ifndef BOARD_H
#define BOARD_H

#include "board_common.h"

#ifdef __cplusplus
extern "C" {
#endif

#define SERVO_PARAMS    {\
        .pwm        = SERVO_PARAM_PWM_PARAMS, \
        .min_us     = SERVO_PARAM_MIN_US, \
        .max_us     = SERVO_PARAM_MAX_US, \
        .pwm_chan   = 0, \
    },\
    {\
        .pwm        = SERVO_PARAM_PWM_PARAMS, \
        .min_us     = SERVO_PARAM_MIN_US, \
        .max_us     = SERVO_PARAM_MAX_US, \
        .pwm_chan   = 1, \
    },\
    {\
        .pwm        = SERVO_PARAM_PWM_PARAMS, \
        .min_us     = SERVO_PARAM_MIN_US, \
        .max_us     = SERVO_PARAM_MAX_US, \
        .pwm_chan   = 2, \
    },\
    {\
        .pwm        = SERVO_PARAM_PWM_PARAMS, \
        .min_us     = SERVO_PARAM_MIN_US, \
        .max_us     = SERVO_PARAM_MAX_US, \
        .pwm_chan   = 3, \
    }

#define SERVO_SAULINFO  {\
        .name = "rotate" \
    },\
    {\
        .name = "extend" \
    },\
    {\
        .name = "lift" \
    },\
    {\
        .name = "grab" \
    }

#define NRF24L01P_NG_PARAM_CS               GPIO_PIN(PORT_B, 12)
#define NRF24L01P_NG_PARAM_CE               GPIO_PIN(PORT_A, 2)
#define NRF24L01P_NG_PARAM_IRQ              GPIO_PIN(PORT_A, 3)

#define WS281X_PARAM_PIN                    GPIO_PIN(PORT_A, 15)
#define WS281X_PARAM_NUMOF                  4U

#ifdef __cplusplus
}
#endif

#endif /* BOARD_H */
/** @} */
