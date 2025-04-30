#include QMK_KEYBOARD_H

enum planck_layers {
    _QWERTY,
    _COLEMAK,
    _PLOVER,
    _MVMT,
    _SYMB,
    _NUM,
    _MOUSE,
    _MEDIA,
    _ADJUST,
};

#define LS LSFT_T
#define RS RSFT_T
#define SG SGUI_T
#define LG LGUI_T
#define RG RGUI_T
#define LC LCTL_T
#define RC RCTL_T
#define LA LALT_T
#define RA RALT_T
#define CS(kc) LCTL(LSFT_T(kc))
#define GC(kc) LGUI_T(LCTL_T(kc))

#define SYMB(kc) LT(_SYMB, kc)
#define MVMT(kc) LT(_MVMT, kc)
#define NUM(kc) LT(_NUM, kc)
#define MOUSE(kc) LT(_MOUSE, kc)
#define MEDIA(kc) LT(_MEDIA, kc)
#define ADJUST(kc) LT(_ADJUST, kc)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT(

        KC_Q, KC_W, KC_E, KC_R, KC_T, KC_NO,KC_NO, KC_Y, KC_U, KC_I, KC_O, KC_P,
        KC_A, LG(KC_S), LA(KC_D), LC(KC_F), LS(KC_G), KC_NO,KC_NO, LS(KC_H), RC(KC_J), RA(KC_K), RG(KC_L), KC_MINS,
        KC_Z, KC_X, KC_C, KC_V, SYMB(KC_B), KC_NO,KC_NO, SYMB(KC_N), KC_M, KC_COMM, KC_DOT, KC_QUOT,
        QK_REP, DM_REC1, DM_PLY1, NUM(KC_DEL), LS(KC_BSPC), SYMB(KC_ESC),KC_ENT, MVMT(KC_SPC), MOUSE(KC_TAB), DM_REC2, DM_PLY2, TO(_MOUSE)

    ),

    [_COLEMAK] = LAYOUT(

        KC_Q, KC_W, KC_F, KC_P, KC_G, KC_NO,KC_NO, KC_J, KC_L, KC_U, KC_Y, KC_MINS,
        KC_A, LG(KC_R), LA(KC_S), LC(KC_T), LS(KC_D), KC_NO,KC_NO, LS(KC_H), RC(KC_N), RA(KC_E), RG(KC_I), KC_O,
        KC_Z, KC_X, KC_C, KC_V, SYMB(KC_B), KC_NO,KC_NO, SYMB(KC_K), KC_M, KC_COMM, KC_DOT, KC_QUOT,
        QK_REP, DM_REC1, DM_PLY1, NUM(KC_DEL), LS(KC_BSPC), SYMB(KC_ESC),KC_ENT, MVMT(KC_SPC), MOUSE(KC_TAB), DM_REC2, DM_PLY2, TO(_MOUSE)

    ),

    [_PLOVER] = LAYOUT(

        KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,    KC_1,
        KC_NO,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
        KC_NO,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_NO,   KC_NO,   KC_NO,   KC_C,    KC_V,    KC_NO,   KC_NO,   KC_N,    KC_M,    KC_NO,   KC_NO,   TO(0)

    ),

    [_SYMB] = LAYOUT(

        KC_AT, KC_PERC, KC_HASH, KC_DLR, KC_EQL, KC_NO,KC_NO, KC_AMPR, KC_CIRC, KC_ASTR, KC_PLUS, KC_GRV,
        SG(KC_4), LG(KC_5), LA(KC_3), LC(KC_2), KC_1, KC_NO,KC_NO, KC_0, RC(KC_6), RA(KC_8), RG(KC_9), SG(KC_7),
        KC_PIPE, KC_EXLM, KC_SCLN, KC_ENT, KC_TRNS, KC_NO,KC_NO, KC_TRNS, KC_TILD, KC_SLSH, KC_COLN, KC_QUES,
        KC_NO, KC_NO, KC_NO, KC_DEL, KC_LSFT, KC_TRNS,KC_BSPC, KC_SPC, KC_TAB, KC_NO, KC_NO, TO(0)

    ),

    [_MVMT] = LAYOUT(

        KC_F2, KC_F5, KC_LCBR, KC_TAB, KC_RCBR, KC_NO,KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_SPC,
        KC_DEL, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_ENT,
        C(KC_Z), C(KC_A), C(KC_C), C(KC_V), KC_BSPC, KC_NO,KC_NO, KC_LPRN, KC_LBRC, KC_RBRC, KC_RPRN, KC_BSLS,
        KC_NO, KC_NO, KC_NO, KC_LSFT, KC_SPC, KC_ESC,KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, TO(0)

    ),

    [_NUM] = LAYOUT(

        KC_DEL,  KC_ESC,    KC_LCBR, KC_UP,   KC_RCBR,  KC_NO,KC_NO,   KC_7, KC_8, KC_9,     KC_SLSH, KC_MINS,
        KC_ENT,  KC_SPC,    KC_LEFT, KC_DOWN, KC_RGHT,  KC_NO,KC_NO,   KC_4, KC_5, KC_6,     KC_ASTR, KC_PLUS,
        KC_LSFT, KC_LGUI,   KC_LALT, KC_LCTL, KC_BSPC,  KC_NO,KC_NO,   KC_1, KC_2, KC_3,     KC_DOT,  KC_EQL,
        KC_NO,   KC_NO,     KC_NO,   KC_TRNS, KC_NO,    KC_NO,KC_ENT,  KC_0, MEDIA(KC_TAB),  KC_NO, KC_NO, TO(0)

    ),

    [_MOUSE] = LAYOUT(

        KC_PGUP, KC_PGDN, MS_WHLD, MS_UP, MS_WHLU, KC_NO,KC_NO, KC_NO, C(KC_TAB), C(S(KC_TAB)), KC_NO, KC_NO,
        KC_BSPC, KC_TAB, MS_LEFT, MS_DOWN, MS_RGHT, KC_NO,KC_NO, MS_BTN1, MS_BTN2, MS_BTN3, MS_ACL0, MS_ACL2,
        KC_LCTL, KC_LGUI, KC_APP, MS_WHLL, MS_WHLR, KC_NO,KC_NO, KC_SPC, MS_BTN4, MS_BTN5, KC_APP, KC_NO,
        KC_DEL, KC_NO, KC_NO, MEDIA(KC_ESC), KC_LSFT, KC_SPC,KC_ENT, KC_NO, KC_TRNS, KC_NO, KC_NO, TO(0)

    ),

    [_MEDIA] = LAYOUT(

        KC_SLEP, KC_BRID, KC_BRIU, KC_MSTP, KC_MPRV, KC_NO,KC_NO, KC_MNXT, KC_MPLY, KC_MUTE, KC_VOLD, KC_VOLU,
        KC_F4, KC_F5, KC_F3, KC_F2, KC_F1, KC_NO,KC_NO, KC_F10, KC_F6, KC_F8, KC_F9, KC_F7,
        UG_NEXT, UG_HUED, UG_SATD, UG_VALD, KC_F11, KC_NO,KC_NO, KC_F12, UG_VALU, UG_SATU, UG_HUEU, UG_TOGG,
        KC_NO, KC_NO, KC_NO, KC_TRNS, MO(_ADJUST), KC_NO,KC_NO, MO(_ADJUST), KC_TRNS, KC_NO, KC_NO, TO(0)

    ),

    [_ADJUST] = LAYOUT(

        QK_BOOT, DB_TOGG, UG_TOGG, UG_NEXT, UG_HUEU, KC_NO,KC_NO, UG_HUED, UG_SATU, UG_SATD, UG_SPDU, UG_SPDD,
        MU_NEXT, AU_ON, AU_OFF, AG_NORM, AG_SWAP, KC_NO,KC_NO, PDF(_QWERTY), PDF(_COLEMAK), PDF(_PLOVER), TO(0), KC_NO,
        AU_PREV, AU_NEXT, MU_ON, MU_OFF, KC_NO, KC_NO,KC_NO, MI_ON, MI_OFF, KC_NO, KC_NO, EE_CLR,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO,KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, TO(0)

    ),

};


uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // The shortest time for rolling into a new layer determines
        // the longest time for rolling off the outer layer's tap key.
        case MVMT(KC_SPC):
            return 150;

        // Alpha keys get more time to help avoid errors.
        // The downside is that they need to be held longer to trigger.
        case SYMB(KC_B):
        case SYMB(KC_N):
        case LS(KC_G):
        case LS(KC_H):
            return 160;

        default:
            return 120;
    }
}

bool get_retro_tapping(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LS(KC_BSPC):
            // Never emit Backspace when this Shift is held for longer than the Tap Time.
            return false;
        default:
            // Emit the long-tapped key in every other case.
            return true;
    }
}

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LS(KC_BSPC):
        case SYMB(KC_ESC):
            // Immediately activate this Shift upon another keypress.
            return true;
        default:
            // Use the default tap-or-hold decision mode for any other mod-tap key.
            return false;
    }
}
