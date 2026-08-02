// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_spanish.h" // Necesario para los alias ES_*

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
        KC_ESC,  ES_1,    ES_2,    ES_3,    ES_4,    ES_5,                                ES_6,    ES_7,    ES_8,    ES_9,    ES_0,    OSL(_FN),
        KC_TAB,  ES_Q,    ES_W,    ES_E,    ES_R,    ES_T,                                ES_Y,    ES_U,    ES_I,    ES_O,    ES_P,    KC_BSPC,
        my_GUI,  ES_A,    ES_S,    ES_D,    ES_F,    ES_G,                                ES_H,    ES_J,    ES_K,    ES_L,    ES_NTIL, ES_ACNT,
        my_SHFT, ES_Z,    ES_X,    ES_C,    ES_V,    ES_B,                                ES_N,    ES_M,    ES_COMM, ES_DOT,  ES_MINS, my_SHFT,
                                            my_ALT, my_CTRL, my_SPC,            my_ENT,  my_CTRL,  my_ALT
    ),

    [_EXT] = LAYOUT(
        KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                               KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
        ES_LBRC, ES_RBRC, ES_LCBR, ES_RCBR, ES_LPRN, ES_RPRN,                             KC_PGUP, KC_PGDN, KC_HOME, KC_END,  KC_DEL,  KC_TRNS,
        KC_TRNS, ES_EQL,  ES_TILD, ES_PLUS, ES_DQUO, KC_TRNS,                             KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, ES_ACNT, ES_CCED,
        QK_REP,  KC_TRNS, ES_ASTR, ES_SCLN, ES_GRAVE,ES_QUOT,                             ES_BSLS, ES_PIPE, ES_LABK, ES_RABK, KC_TRNS, QK_REP,
                                            KC_TRNS, KC_TAB, KC_ESC,            KC_TRNS, KC_BSPC, KC_TRNS
    ),

    [_FN] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                             KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                             KC_PGUP, KC_PGDN, KC_HOME, KC_END,  KC_DEL,  KC_F12,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                             KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_TRNS, KC_TRNS,
        QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT,
                                            KC_MUTE, KC_VOLD, KC_VOLU,          KC_TRNS, KC_TRNS, KC_TRNS
    )

};
