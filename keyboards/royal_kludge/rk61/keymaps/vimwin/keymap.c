#include QMK_KEYBOARD_H

enum {
    _BASE,
    _SYMB,
    _MVMT,
    // _MEDIA,
    _MOUSE,
    _NUMPAD,
    _SPEC,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_all(
        KC_LGUI, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,KC_NO,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_RGUI, KC_RCTL, KC_TAB,
        KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_UNDS, KC_PLUS, KC_ENT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,KC_NO,KC_NO,
        KC_LCTL, MO(2), KC_LSFT, LT(1,KC_SPC), KC_BSPC, MO(2), KC_RCTL, MO(6)
    ),
    [1] = LAYOUT_all(
        KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS,KC_TRNS,
        KC_TRNS, KC_GRV, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_MINS, KC_EQL, KC_QUOT, KC_DQUO, KC_TRNS,
        KC_LALT, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_PIPE, KC_TRNS, KC_TRNS,
        KC_EXLM, KC_COLN, KC_LCTL, KC_LSFT, KC_LGUI, KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC, KC_BSLS, KC_TRNS,KC_TRNS,KC_TRNS,
        KC_TRNS, MO(3), KC_ENT, KC_TRNS, KC_DEL, KC_RALT, KC_RCTL, KC_TRNS
    ),
    [2] = LAYOUT_all(
        KC_NO,  KC_BRID,  KC_BRIU,  KC_NO,  KC_NO,  KC_NO,  KC_MSTP,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_SLEP,KC_NO,
        KC_APP, LCTL(KC_Z), LCTL(KC_Y), KC_F2, KC_F5, KC_NO, KC_SPC, MS_LEFT, MS_DOWN, MS_UP, MS_RGHT, KC_BSPC, KC_DEL, KC_NO,
        KC_LALT, LCTL(KC_A), LCTL(KC_C), LCTL(KC_V), KC_V, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_BSPC, KC_ENT,
        KC_LSFT, KC_LGUI, KC_LSFT, KC_LCTL, KC_TAB, LSFT(KC_TAB), KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO, KC_RSFT,KC_NO,KC_NO,
        KC_LCTL, KC_TRNS, KC_LALT, MO(3), KC_DEL, KC_TRNS, KC_APP, KC_NO
    ),

// [_MEDIA] = LAYOUT_all(
//     _______,  KC_BRID,  KC_BRIU,  _______,  _______,  _______,  KC_MSTP,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_SLEP,_______,
//     _______,  _______,    MS_UP,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  DM_PLY1,  DM_PLY2,  _______,
//     KC_CAPS,  MS_LEFT,  MS_DOWN,  MS_RGHT,  _______,  _______,  _______,  _______,  _______,  _______,  MS_ACL0,  MS_ACL1,  MS_ACL2,
//     _______,  MS_WHLL,  MS_WHLU,  MS_WHLD,  MS_WHLR,  _______,  _______,  _______,  _______,  MS_BTN4,  MS_BTN3,  MS_BTN5,_______,_______,
//     _______,      _______,      MO(_SPEC),     KC_MPLY,                                             MS_BTN1,     MS_BTN2,      MO(_SPEC),     _______
// ),

    [3] = LAYOUT_all(
        KC_NO, MS_UP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,KC_NO,
        MS_LEFT, MS_DOWN, MS_RGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, MS_WHLU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, MS_ACL0, MS_ACL1, MS_ACL2,
        MS_WHLL, MS_WHLD, MS_WHLR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, MS_BTN4, MS_BTN6, MS_BTN5,KC_NO,KC_NO,
        TO(0), KC_NO, KC_TRNS, KC_ENT, MS_BTN1, MS_BTN2, MS_BTN3, KC_TRNS
    ),
    [4] = LAYOUT_all(
        KC_PGUP, KC_UP, KC_PGDN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_ASTR, KC_SLSH, KC_BSPC,KC_NO,
        KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_4, KC_5, KC_6, KC_PLUS, KC_COMM, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_MINS, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RSFT, KC_ENT, KC_0, KC_DOT, KC_EQL, KC_ENT, KC_NO,KC_NO,KC_NO,
        TO(0), KC_NO, KC_NO, KC_SPC, KC_NO, KC_NO, KC_NO, KC_NO
    ),

    [_SPEC] = LAYOUT_all(
 /* _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,_______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  RGB_VAD,  RGB_VAI,  RGB_MOD,          // RGB not yet supported
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  RGB_SPD,  RGB_SPI,  RGB_TOG,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  RGB_SAD,  RGB_SAI,  RGB_HUI,  _______,  _______,_______,_______,
    _______,      _______,      _______,      _______, 	                                           _______,      _______,      _______,     _______
*/

        QK_BOOT,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,_______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  KC_SLEP,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_SLEP,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  BL_DOWN,  BL_UP,    _______,  _______,_______,_______,
        _______,      _______,      _______,      _______, 	                                           _______,      _______,      _______,     _______

    )

};

