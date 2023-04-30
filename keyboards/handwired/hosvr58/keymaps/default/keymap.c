// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_7x5(
        KC_ESC,   KC_1,   KC_2,   KC_3,   KC_4,   KC_5, 
        KC_TAB,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T, 
        KC_LSFT,  KC_A,   KC_S,   KC_D,   KC_F,   KC_G,
        KC_LCTL,  KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_ENT,
                            TT(1),  KC_LCTL, KC_LSFT, KC_SPC
    ),
    [1] = LAYOUT_ortho_7x5(
        KC_TILD,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5, 
        KC_TAB,   _______,  _______,  _______,  _______,  _______, 
        KC_LSFT,  _______,  _______,  _______,  _______,  _______,
        KC_LCTL,  _______,  _______,  _______,  _______,  _______,  QK_BOOT,
                             _______,  KC_LCTL, KC_LSFT, KC_SPC
    )
};
