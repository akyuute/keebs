#include QMK_KEYBOARD_H

enum {
    _BASE,
    _SYMB,
    _MVMT,
    _MOUSE,
    _NUMPAD,
    _SPEC,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT_all(
        KC_LGUI, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,KC_NO,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_RGUI, KC_RCTL, KC_TAB,
        KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,KC_NO,KC_NO,
        KC_LCTL, MO(_MVMT), KC_LSFT, LT(_SYMB,KC_SPC), KC_BSPC, KC_RCTL, KC_RGUI, MO(_MOUSE)
    ),

    [_SYMB] = LAYOUT_all(
        KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS,KC_TRNS,
        KC_TRNS, KC_GRV, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_MINS, KC_EQL, KC_PLUS, KC_PIPE, KC_TRNS,
        KC_LALT, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_UNDS, KC_TRNS,KC_TRNS,
        KC_EXLM, KC_UNDS, KC_LCTL, KC_LSFT, KC_LGUI, KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC, KC_BSLS, KC_TRNS,KC_TRNS,KC_TRNS,
        KC_LGUI, KC_TAB, KC_ENT, KC_TRNS, KC_DEL, KC_RCTL, KC_RALT, KC_RGUI
    ),

    [_MVMT] = LAYOUT_all(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,KC_NO,
        // KC_SLEP,  KC_BRID,  KC_BRIU,  KC_NO,  KC_NO,  KC_NO,  KC_MSTP,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_NO,KC_NO,
        KC_APP, LCTL(KC_Z), LCTL(KC_Y), KC_F2, KC_F5, KC_NO, KC_SPC, MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR, KC_BSPC, KC_DEL, KC_NO,
        KC_LALT, LCTL(KC_A), LCTL(KC_C), LCTL(KC_V), LCTL(KC_X), KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_ENT, KC_ENT,
        KC_LSFT, KC_LGUI, KC_LSFT, KC_LCTL, KC_TAB, LSFT(KC_TAB), KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO, KC_RSFT,KC_NO,KC_NO,
        KC_LCTL, KC_TRNS, KC_SPC, KC_ENT, KC_BSPC, KC_RGUI, MO(_SPEC), KC_APP
    ),

    [_MOUSE] = LAYOUT_all(
        KC_SLEP,  KC_BRID,  KC_BRIU,  KC_NO,  KC_NO,  KC_NO,  KC_MSTP,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_NO,KC_NO,
        KC_NO, KC_DEL, MS_UP, KC_BSPC, LSFT(KC_TAB), KC_NO, MS_WHLU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_ENT, MS_LEFT, MS_DOWN, MS_RGHT, KC_TAB, MS_WHLL, MS_WHLD, MS_WHLR, KC_NO, KC_NO, MS_ACL0, MS_ACL1, MS_BTN6,
        KC_LSFT, DT_DOWN, DT_UP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, MS_BTN4, MS_BTN5, MS_BTN3,KC_NO,KC_NO,
        KC_LCTL, KC_LGUI, KC_APP, KC_SPC, MS_BTN1, MS_BTN2, MS_ACL2, KC_TRNS
    ),

    [_NUMPAD] = LAYOUT_all(
        TO(0), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_ASTR, KC_BSPC,KC_NO,
        KC_TAB, KC_PGUP, KC_UP, KC_PGDN, KC_NO, KC_NO, KC_NO, KC_NO, KC_4, KC_5, KC_6, KC_MINS, KC_PLUS, KC_TAB,
        KC_ESC, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_EQL, KC_ENT,
        KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_0, KC_DOT, KC_COMM, KC_SLSH, KC_RSFT,KC_NO,KC_NO,
        KC_LCTL, KC_NO, KC_LSFT, KC_ENT, KC_SPC, KC_NO, KC_NO, KC_NO
    ),

    [_SPEC] = LAYOUT_all(
    /*
 _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,_______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  RGB_VAD,  RGB_VAI,  RGB_MOD,          // RGB not yet supported
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  RGB_SPD,  RGB_SPI,  RGB_TOG,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  RGB_SAD,  RGB_SAI,  RGB_HUI,  _______,  _______,_______,_______,
    _______,      _______,      _______,      _______, 	                                           _______,      _______,      _______,     _______
    */

        TO(_NUMPAD), _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,_______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  TO(_NUMPAD),  _______,  _______,  _______,  _______,
        QK_BOOT,  _______,  KC_SLEP,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_SLEP,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  BL_DOWN,  BL_UP,    _______,  _______,_______,_______,
        _______,      _______,      _______,      _______, 	                                           _______,      _______,      _______,     _______

    )

};

