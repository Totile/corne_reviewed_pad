/* Copyright 2022 splitkb.com <support@splitkb.com>
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

#include QMK_KEYBOARD_H
#include "keymap_us_international.h"
#include "sendstring_us_international.h"

enum layers {
    _DEFAULT,
    _NAVPAD,
    _ALTSPEC,
    _SYMBOL,
    _FUNPAD,
};

enum custom_keycodes {
  CS_EACG = SAFE_RANGE,
  CS_EACC,
  CS_QUOT,
  CS_DCIR,
  CS_DTIL,
  CS_DQUO,
  CS_GRV,
};

#define L_NAVPA MO(_NAVPAD)
#define L_ALTSP MO(_ALTSPEC)
#define L_SYMBO MO(_SYMBOL)
#define L_FUNPA MO(_FUNPAD)
#define HR_CT_O LCTL_T(KC_O)
#define HR_AL_P LALT_T(KC_P)
#define HR_GU_B LGUI_T(KC_B)
#define HR_CT_V LCTL_T(KC_V)
#define HR_AL_D LALT_T(KC_D)
#define HR_GU_J LGUI_T(KC_J)
#define HR_C_SL LCTL_T(KC_SLSH)
#define HR_AL_9 LALT_T(KC_9)
#define HR_GU_7 LGUI_T(KC_7)
#define HR_C_PD LCTL_T(KC_PGDN)
#define HR_A_HM LALT_T(KC_HOME)
#define HR_G_WU LGUI_T(KC_WH_U)



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DEFAULT] = LAYOUT_split_3x6_3(
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_TAB, HR_GU_B, US_EACU, HR_AL_P, HR_CT_O, CS_EACG,                      US_DCIR, HR_CT_V, HR_AL_D,    KC_L, HR_GU_J,    KC_Z,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      US_CCED,    KC_A,    KC_U,    KC_I,    KC_E, KC_COMM,                         KC_C,    KC_T,    KC_S,    KC_R,    KC_N,    KC_M,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      CS_EACC, US_AACU,    KC_Y,    KC_X,  KC_DOT,    KC_K,                      CS_QUOT,   KC_Q,     KC_G,    KC_H,    KC_F,    KC_W,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          L_ALTSP, KC_LSFT, L_FUNPA,    L_SYMBO,  KC_SPC, L_NAVPA
    ),

    [_NAVPAD] = LAYOUT_split_3x6_3(
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_PLUS, HR_GU_7,    KC_8, HR_AL_9, HR_C_SL, KC_ASTR,                      KC_PGUP, HR_C_PD, HR_A_HM,  KC_END, HR_G_WU,   KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_MINS,    KC_4,    KC_5,    KC_6,   KC_0,  KC_COMM,                        KC_UP, KC_DOWN, KC_LEFT, KC_RGHT, KC_WH_D,   KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_PERC,    KC_1,    KC_2,    KC_3,  KC_DOT,  KC_EQL,                        KC_NO,   KC_NO, KC_WH_L, KC_WH_R,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,   _______,  _______, _______
    ),

    [_ALTSPEC] = LAYOUT_split_3x6_3(
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_TAB, _______,  KC_GRV, _______, _______, _______,                      KC_INS,  _______, _______, _______, _______, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_ESC, _______, US_UACU, US_DIAE, US_EURO, _______,                      _______, US_COPY,   US_SS, US_REGD, US_DTIL,  KC_ENT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_DEL,   US_AE, US_MICR, _______, _______, _______,                      KC_QUOT, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______,  _______, _______
    ),

    [_SYMBOL] = LAYOUT_split_3x6_3(
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_PLUS, KC_PIPE,  CS_GRV, KC_HASH, HR_C_SL, KC_ASTR,                      CS_DCIR, KC_LBRC, KC_RBRC, US_LDAQ, US_RDAQ, _______, 
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_MINS, KC_EXLM,   KC_AT, KC_UNDS, KC_BSLS, KC_SCLN,                      CS_DQUO, KC_LPRN, KC_RPRN, KC_LABK, KC_RABK,  KC_DLR,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_PERC, _______, CS_DTIL, US_DEG,  KC_COLN,  KC_EQL,                      KC_QUES, KC_LCBR, KC_RCBR, KC_AMPR, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______,  _______, _______
    ),


    [_FUNPAD] = LAYOUT_split_3x6_3(
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,   KC_F7,   KC_F8,   KC_F9, _______, _______,                      _______, _______, _______, _______, KC_WH_U, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,   KC_F4,   KC_F5,   KC_F6, KC_BTN1, KC_BTN2,                      KC_MS_U, KC_MS_D, KC_MS_L, KC_MS_R, KC_WH_D, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,   KC_F1,   KC_F2,   KC_F3, KC_BTN3,    KC_Z,                      _______, _______, KC_WH_L, KC_WH_R, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______,  _______, _______
    ),



};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {             
        case CS_EACG:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_GRAVE) "e");
            }
            return false;

        case CS_EACC:
            if (record->event.pressed) {
                SEND_STRING(SS_LSFT("6") "e");
            }
            return false;

        case CS_QUOT:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_QUOT) SS_TAP(X_SPC));
            }
            return false;

        case CS_DCIR:
            if (record->event.pressed) {
                SEND_STRING(SS_LSFT("6") SS_TAP(X_SPC));
            }
            return false;
        
        case CS_DTIL:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LSFT) SS_TAP(X_GRAVE) SS_UP(X_LSFT) SS_TAP(X_SPC));
            }
            return false;

        case CS_DQUO:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LSFT) SS_TAP(X_QUOT) SS_UP(X_LSFT) SS_TAP(X_SPC));
            }
            return false;

        case CS_GRV:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_GRAVE) SS_TAP(X_SPC));
            }
            return false;
    }

    return true;
}

#ifdef RGBLIGHT_ENABLE
void keyboard_post_init_user(void) {
  rgblight_enable_noeeprom(); // enables RGB, without saving settings
  rgblight_sethsv_noeeprom(HSV_RED); // sets the color to red without saving
  rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING + 3); // sets mode to Fast breathing without saving
}
#endif

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    // 0 is left-half encoder,
    // 1 is right-half encoder
    if (index == 0) {
        tap_code(KC_0);
    } else if (index == 1) {
        tap_code(KC_1);
    }

    if (clockwise) {
        tap_code16(KC_PLUS);
    } else {
        tap_code(KC_MINUS);
    }

    return false;
}
#endif

#ifdef OLED_ENABLE
bool oled_task_user(void) {
    // A 128x32 OLED rotated 90 degrees is 5 characters wide and 16 characters tall
    // This example string should fill that neatly
    const char *text = PSTR("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ123456789!@#$%^&*()[]{}-=_+?");

    if (is_keyboard_master()) {
        oled_write_P(text, false);
    } else {
        oled_write_P(text, false);
    }
    return false;
}
#endif
