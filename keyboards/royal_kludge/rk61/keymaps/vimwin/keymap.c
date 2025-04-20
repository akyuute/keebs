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
        KC_LGUI, KC_LCTL, MO(_MVMT), LT(_SYMB,KC_SPC), KC_BSPC, KC_RCTL, KC_LALT, MO(_MOUSE)
    ),

    [_SYMB] = LAYOUT_all(
        KC_GRV, LGUI(KC_LEFT), LGUI(KC_UP), LGUI(KC_DOWN), LGUI(KC_RGHT), KC_NO, KC_NO, KC_NO, UC(0x2014), DM_REC1, DM_PLY1, DM_REC2, DM_PLY2, KC_DEL,KC_NO,
        KC_TAB, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_MINS, KC_EQL, KC_PLUS, KC_PIPE, KC_TAB,
        LCTL(KC_A), KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_UNDS, KC_RGUI,
        KC_LSFT, KC_LALT, KC_TAB, KC_LCTL, KC_LSFT, KC_LGUI, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_TILD, KC_RSFT,KC_TRNS,KC_TRNS,
        KC_LGUI, KC_SPC, KC_ENT, KC_TRNS, KC_BSPC, KC_RCTL, KC_LALT, KC_DEL
    ),

    [_MVMT] = LAYOUT_all(
        KC_APP, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL,KC_TRNS,
        KC_SPC, KC_DOWN, KC_UP, KC_F2, KC_F5, LCTL(KC_Z), LCTL(KC_Y), KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_LCBR, KC_RCBR, KC_RCTL,
        KC_LCTL, LCTL(KC_A), LCTL(KC_C), LCTL(KC_V), LCTL(KC_X), KC_SPC, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_SPC, KC_BSPC, KC_ENT,
        KC_LSFT, KC_TAB, LSFT(KC_TAB), KC_LCTL, KC_LSFT, LGUI(KC_V), KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC, KC_BSLS, KC_RSFT,KC_NO,KC_NO,
        LGUI_T(LCTL_T(KC_SPC)), KC_LALT, KC_TRNS, KC_ENT, KC_DEL, KC_RGUI, KC_LALT, MO(_SPEC)
    ),

    [_MOUSE] = LAYOUT_all(
        KC_ESC,  KC_BRID,  KC_BRIU,  KC_NO,  KC_NO,  KC_NO,  KC_MSTP,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_SLEP,KC_NO,
        KC_CAPS, KC_PGUP, MS_UP, KC_PGDN, KC_NO, MS_WHLU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_ENT, MS_LEFT, MS_DOWN, MS_RGHT, MS_WHLL, MS_WHLD, MS_WHLR, KC_NO, KC_NO, KC_NO, MS_ACL0, MS_ACL1, MS_BTN6,
        KC_LSFT, LSFT(KC_TAB), KC_TAB, DT_DOWN, DT_UP, KC_NO, KC_NO, KC_NO, KC_NO, MS_BTN4, MS_BTN5, MS_BTN3,KC_NO,KC_NO,
        KC_LCTL, KC_LGUI, MO(_SPEC), KC_SPC, MS_BTN1, MS_BTN2, MS_ACL2, KC_TRNS
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

