/* ========================================
FileName: keymap.c
Date: 15:40 05.September.2022
Author: Marcos Ivan Chow Castro @mctechnology17
Email: mctechnology170318@gmail.com
GitHub: https://github.com/mctechnology17
Brief: keymap for the wired corne keyboard
Build:
  cd $HOME
  git clone https://github.com/mctechnology17/qmk-config.git
  OR with SSH
  git clone git@github.com:mctechnology17/qmk-config.git
  cp -r mctechnology17 ~/qmk_firmware/keyboards/crkbd/keymaps
  qmk compile -kb crkbd -km mctechnology17
  ENJOY!
Find compiled software:
  Darwin:
    open ~/qmk_firmware/.build && open -a QMK\ Toolbox
  Linux:
    xdg-open ~/qmk_firmware/.build
  Windows:
    cd .\qmk_firmware\.build
    start .
Edit software:
  cd ~/qmk_firmware/keyboards/crkbd/keymaps/mctechnology17
  nvim .

                           ╔═╦═╦═╗
                    ╔════╗ ║║║║║╔╝
                    ║╔╗╔╗║ ║║║║║╚╗
                    ╚╝║║╚╝ ║╠═╩╩═╝
                      ║╠═╦═╣╚╦═╦╦═╦╗╔═╦═╦╦╗
                      ║║╩╣═╣║║║║║╬║╚╣╬║╬║║║
                      ╚╩═╩═╩╩╩╩═╩═╩═╩═╬╗╠╗║
                                      ╚═╩═╝

Copyright 2022 Marcos Ivan Chow Castro @mctechnology17
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
// ### include {{{
#include QMK_KEYBOARD_H
#include "mctechnology17.h"
#include <stdio.h>
//}}}
// ### START LAYOUTS {{{
#include QMK_KEYBOARD_H


#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
};

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_LAYER0] = LAYOUT(KC_TAB, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_BSPC, KC_LCTL, KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T, KC_N, KC_S, KC_MINS, KC_LSFT, KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z, LALT_T(KC_ESC), KC_LGUI, MO(1), KC_SPC, KC_ENT, MO(2), KC_RALT),

[_LAYER1] = LAYOUT(KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_LCTL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_CAPS, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DEL, KC_LGUI, KC_TRNS, KC_SPC, KC_ENT, MO(3), KC_RALT),

[_LAYER2] = LAYOUT(KC_TAB, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC, KC_LCTL, KC_VOLU, KC_MPLY, KC_NO, KC_NO, KC_NO, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV, KC_LSFT, KC_VOLD, KC_MPRV, KC_MNXT, KC_NO, KC_NO, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD, KC_LGUI, MO(3), KC_SPC, KC_ENT, KC_TRNS, KC_RALT),

[_LAYER3] = LAYOUT(QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F1, KC_F1, KC_F3, KC_F4, KC_F5, KC_F6, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, KC_NO, KC_NO, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LGUI, KC_TRNS, KC_SPC, KC_ENT, KC_TRNS, KC_RALT) 

};
// }}}
// END LAYOUTS }}}

// END COMBO_ENABLE }}}

// vim: set sw=2 ts=2 sts=2 et ft=c fdm=marker:
