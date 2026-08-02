// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define _MAIN 0
#define _EXT 1
#define _FN 2
#define _TODO 3

#define my_CTRL OSM(MOD_LCTL | MOD_RCTL)
#define my_SHFT OSM(MOD_LSFT | MOD_RSFT)
#define my_ALT OSM(MOD_LALT | MOD_RALT)
#define my_GUI OSM(MOD_LGUI | MOD_RGUI)
#define my_CA OSM(MOD_LCTL | MOD_LALT)
#define my_SPC LT(_EXT,KC_SPC)
#define my_ENT LT(_EXT,KC_ENT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_MAIN] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    OSL(_FN),
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        my_GUI,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, my_GUI,
        my_SHFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, my_SHFT,
                                            my_ALT, my_CTRL, my_SPC,           my_ENT,  my_CTRL,  my_ALT
    ),
    [_EXT] = LAYOUT(
        KC_F12,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
        KC_LCBR,  KC_RCBR, KC_LCBR, KC_RBRC, KC_LPRN, KC_RPRN,                            KC_PGUP, KC_PGDN, KC_HOME, KC_END,  KC_DEL,  KC_TRNS,
        KC_TRNS,  KC_EQUAL,KC_TILDE,KC_MINUS,KC_DQUO, KC_TRNS,                            KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_LBRC, KC_RBRC,
         QK_REP,  KC_TRNS, KC_PLUS, KC_UNDS, KC_GRAVE,KC_QUOT,                            KC_BSLS, KC_PIPE, KC_LT, KC_GT, KC_TRNS, QK_REP,
                                            KC_TRNS, KC_TAB, KC_ESC,           KC_TRNS,  KC_BSPC,  KC_TRNS
   ),
    [_FN] = LAYOUT(
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_PGUP, KC_PGDN, KC_HOME, KC_END,  KC_DEL,  KC_F12,
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_LBRC, KC_RBRC,
        QK_BOOT,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT,
                                            KC_MUTE, KC_VOLD, KC_VOLU,           KC_TRNS,  KC_TRNS,  KC_TRNS
    )

};
