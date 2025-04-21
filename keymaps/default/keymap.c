// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 0 │ 1 │ 4 │ 7 │
     * ├───┼───┼───┼───┤
     * │ENT│ 2 │ 5 │ 8 │
     * ├───┼───┼───┼───┤
     * │NLK│ 3 │ 6 │ 9 │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_4x3(
        KC_P0,   KC_P1, KC_P4, KC_P7,
        KC_PENT, KC_P2, KC_P5, KC_P8,
        KC_NUM,  KC_P3, KC_P6, KC_P9
    )
};
