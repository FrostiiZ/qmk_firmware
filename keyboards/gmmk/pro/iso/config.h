/* Copyright 2021 Jasper Chan
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

#define DRIVER_1_LED_TOTAL 66
#define DRIVER_2_LED_TOTAL 33
#define DRIVER_LED_TOTAL (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL)

#define RGBLIGHT_SLEEP

#ifdef RGB_MATRIX_ENABLE
    #define RGB_MATRIX_KEYPRESSES
    #define RGB_MATRIX_FRAMEBUFFER_EFFECTS

    #define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CYCLE_UP_DOWN
    #define RGB_MATRIX_STARTUP_SAT 255
    #define RGB_MATRIX_STARTUP_VAL 192
    #define RGB_MATRIX_STARTUP_SPD 30

    #define RGB_DISABLE_WHEN_USB_SUSPENDED true
    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 225
    #define RGB_DISABLE_TIMEOUT 0

#endif //RGB_MATRIX_ENABLE
