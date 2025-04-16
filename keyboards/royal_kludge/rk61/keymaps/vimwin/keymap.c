#include QMK_KEYBOARD_H

enum {
    _BASE,
    _VIM,
    _MEDIA,
    _SPEC,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT_all(
    KC_LGUI,     KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0, KC_MINUS, KC_EQUAL,  KC_BSPC,KC_NO,
     KC_TAB,     KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,  KC_LBRC,  KC_RBRC,  KC_TAB,
     KC_ESC,     KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,  KC_SCLN,  KC_QUOT,  KC_ENTER,
    KC_LSFT,     KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,  KC_COMM,   KC_DOT, KC_SLASH,  KC_RSFT,KC_NO,KC_NO,
    KC_LGUI,     KC_LCTL,     MO(_VIM),     KC_SPC,                                                KC_BSPC,     KC_RALT,     MO(_VIM),     MO(_MEDIA)
),

[_VIM] = LAYOUT_all(
     KC_GRV,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,   KC_F10,   KC_F11,   KC_F12,  KC_DEL,_______,
    _______,  KC_PSCR,    KC_UP,  KC_PERC,  KC_CIRC,  KC_AMPR,  KC_UNDS,  KC_HOME,  KC_PGDN,  KC_PGUP,   KC_END,  DM_REC1,  DM_REC2,  _______,
    KC_BSPC,  KC_LEFT,  KC_DOWN,  KC_RGHT,   KC_GRV,  KC_ASTR,  KC_LEFT,  KC_DOWN,    KC_UP,  KC_RGHT,   QK_REP,  QK_AREP,  KC_RGUI,
    _______,  KC_LALT,   KC_TAB,    KC_F2,    KC_F5,S(KC_TAB),  KC_LPRN,  KC_RPRN, KC_MINUS, KC_EQUAL,  KC_BSLS,  _______,_______,_______,
    _______,      _______,      _______,      KC_ENTER, 	                                         KC_DEL,     KC_APP,     _______,     MO(_SPEC)
),

[_MEDIA] = LAYOUT_all(
    _______,  KC_BRID,  KC_BRIU,  _______,  _______,  _______,  KC_MSTP,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,_______,
    _______,  _______,    MS_UP,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  DM_PLY1,  DM_PLY2,  _______,
    KC_CAPS,  MS_LEFT,  MS_DOWN,  MS_RGHT,  _______,  _______,  _______,  _______,  _______,  _______,  MS_ACL0,  MS_ACL1,  MS_ACL2,
    _______,  MS_WHLL,  MS_WHLU,  MS_WHLD,  MS_WHLR,  _______,  _______,  _______,  _______,  MS_BTN4,  MS_BTN3,  MS_BTN5,_______,_______,
    _______,      _______,      MO(_SPEC),     KC_MPLY,                                             MS_BTN1,     MS_BTN2,      MO(_SPEC),     _______
),

[_SPEC] = LAYOUT_all(
 /* _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,_______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  RGB_VAD,  RGB_VAI,  RGB_MOD,          // RGB not yet supported
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  RGB_SPD,  RGB_SPI,  RGB_TOG,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  RGB_SAD,  RGB_SAI,  RGB_HUI,  _______,  _______,_______,_______,
    _______,      _______,      _______,      _______, 	                                           _______,      _______,      _______,     _______
*/

    QK_BOOT,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_PWR,_______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  KC_SLEP,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_SLEP,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  BL_DOWN,  BL_UP,    _______,  _______,_______,_______,
    _______,      _______,      _______,      _______, 	                                           _______,      _______,      _______,     _______
)

};

