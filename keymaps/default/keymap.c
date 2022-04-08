// Copyright 2022 %YOUR_FULL_NAME% (@%YOUR_GITHUB_USERNAME%)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH, 
        KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_LSFT, 
        KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    
        KC_PLUS, KC_ENT,  KC_SPC   
    ),

};
