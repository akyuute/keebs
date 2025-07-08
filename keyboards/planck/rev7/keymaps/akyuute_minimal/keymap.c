#include QMK_KEYBOARD_H

enum planck_layers {
    _QWERTY,
    _PINKY_REACH_CMK,
    _SYMB,
    _MVMT,
    _NUMB,
    _MOUS,
    _MEDI,
    _AJST,
};


#define BAK KC_BSPC
#define DEL KC_DEL
#define ENT KC_ENT
#define ESC KC_ESC
#define SPC KC_SPC
#define TAB KC_TAB
#define QUOT KC_QUOT

#define LS LSFT_T
#define RS RSFT_T
#define LG LGUI_T
#define RG RGUI_T
#define LC LCTL_T
#define RC RCTL_T
#define LA LALT_T
#define RA RALT_T
#define CS(kc) LCTL(LSFT_T(kc))
#define GC(kc) LGUI_T(LCTL_T(kc))
#define SG SGUI_T

#define SYMB(kc) LT(_SYMB, kc)
#define MVMT(kc) LT(_MVMT, kc)
#define NUMB(kc) LT(_NUMB, kc)
#define MOUS(kc) LT(_MOUS, kc)
#define MEDI(kc) LT(_MEDI, kc)
#define AJST(kc) LT(_AJST, kc)


// Define macros
enum custom_keycodes {
    MAC1 = SAFE_RANGE,
    MAC2,
    MAC3,
    MAC4,
    MAC5,
    MAC6,
    MAC7,
    MAC8,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case MAC1:
        if (record->event.pressed) {
            // when keycode MAC1 is pressed
            SEND_STRING("MAC1 pressed");
        } else {
            // when keycode MAC1 is released
        }
        break;
    case MAC2:
        if (record->event.pressed) {
            SEND_STRING("MAC2 pressed");
        } else {
        }
        break;
    case MAC3:
        if (record->event.pressed) {
            SEND_STRING("MAC3 pressed");
        } else {
        }
        break;
    case MAC4:
        if (record->event.pressed) {
            SEND_STRING("MAC4 pressed");
        } else {
        }
        break;
    case MAC5:
        if (record->event.pressed) {
            SEND_STRING("MAC5 pressed");
        } else {
        }
        break;
    case MAC6:
        if (record->event.pressed) {
            SEND_STRING("MAC6 pressed");
        } else {
        }
        break;
    case MAC7:
        if (record->event.pressed) {
            SEND_STRING("MAC7 pressed");
        } else {
        }
        break;
    case MAC8:
        if (record->event.pressed) {
            SEND_STRING("MAC8 pressed");
        } else {
        }
        break;
    }
    return true;
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT(

//     ,----------+----------+----------+----------+----------+                     +----------+----------+----------+----------+----------.
        KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,          KC_NO, KC_NO,     KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,
//     |----------+----------+----------+----------+----------+                     +----------+----------+----------+----------+----------|
        KC_A,      LG(KC_S),  LA(KC_D),  LC(KC_F),  KC_G,          KC_NO, KC_NO,     KC_H,      RC(KC_J),  RA(KC_K),  RG(KC_L),  KC_QUOT,
//     |----------+----------+----------+----------+----------+                     +----------+----------+----------+----------+----------|
        KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,          KC_NO, KC_NO,     KC_N,      KC_M,      KC_COMM,   KC_DOT,    KC_MINS,
//     |----------+----------+----------+----------+----------+                     +----------+----------+----------+----------+----------|
        KC_NO,     QK_AREP,   QK_REP,    KC_NO,     LC(ESC),     LS(BAK), MVMT(SPC), SYMB(TAB), KC_NO,     DM_PLY1,   DM_PLY2,   TO(0)
//     `----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------'

    ),

    [_PINKY_REACH_CMK] = LAYOUT(

//     ,----------+----------+----------+----------+----------+                     +----------+----------+----------+----------+----------.
        KC_Q,      KC_G,      KC_W,      KC_F,      KC_P,          KC_NO, KC_NO,     KC_K,      KC_U,      KC_Y,      KC_J,      KC_QUOT,
//     |----------+----------+----------+----------+----------+                     +----------+----------+----------+----------+----------|
        KC_X,      LG(KC_A),  LA(KC_S),  LC(KC_R),  KC_T,          KC_NO, KC_NO,     KC_N,      RC(KC_E),  RA(KC_I),  RG(KC_O),  KC_L,
//     |----------+----------+----------+----------+----------+                     +----------+----------+----------+----------+----------|
        KC_Z,      KC_D,      KC_C,      KC_V,      KC_B,          KC_NO, KC_NO,     KC_H,      KC_M,      KC_COMM,   KC_DOT,    KC_MINS,
//     |----------+----------+----------+----------+----------+                     +----------+----------+----------+----------+----------|
        KC_NO,     QK_AREP,   QK_REP,    KC_NO,     LC(ESC),     LS(BAK), MVMT(SPC), SYMB(TAB), KC_NO,     DM_PLY1,   DM_PLY2,   TO(0)
//     `----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------'

    ),

    [_SYMB] = LAYOUT(

//     ,----------+----------+----------+----------+----------+                     +----------+----------+----------+----------+----------.
        KC_AT,     KC_AMPR,   KC_EXLM,   KC_TAB,    KC_PERC,       KC_NO, KC_NO,     KC_CIRC,   KC_HASH,   KC_ASTR,   KC_DLR,    KC_GRV,
//     |----------+----------+----------+----------+----------+                     +----------+----------+----------+----------+----------|
        SG(KC_1),  LG(KC_2),  LA(KC_3),  LC(KC_4),  KC_5,          KC_NO, KC_NO,     KC_6,      RC(KC_7),  RA(KC_8),  RG(KC_9),  SG(KC_0),
//     |----------+----------+----------+----------+----------+                     +----------+----------+----------+----------+----------|
        KC_BSPC,   KC_PIPE,   KC_TILD,   KC_SLSH,   KC_EQL,        KC_NO, KC_NO,     KC_COLN,   KC_SCLN,   KC_MINS,   KC_PLUS,   KC_QUES,
//     |----------+----------+----------+----------+----------+                     +----------+----------+----------+----------+----------|
        MAC1,      MAC2,      MAC3,      MAC4,      MEDI(ENT),   LC(SPC), KC_NO,     KC_TRNS,   MAC5,      MAC6,      MAC7,      MAC8
//     `----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------'

    ),

    [_MVMT] = LAYOUT(

//     ,----------+----------+----------+----------+----------+                     +----------+----------+----------+----------+----------.
        KC_F5,     KC_F2,     KC_PGUP,   KC_TAB,    KC_PGDN,       KC_NO, KC_NO,     KC_HOME,   KC_LCBR,   KC_RCBR,   KC_END,    KC_BSPC,
//     |----------+----------+----------+----------+----------+                     +----------+----------+----------+----------+----------|
        SG(DEL),   KC_LGUI,   KC_LALT,   KC_LCTL,   KC_LSFT,       KC_NO, KC_NO,     KC_LEFT,   KC_DOWN,   KC_UP,     KC_RGHT,   KC_ENT,
//     |----------+----------+----------+----------+----------+                     +----------+----------+----------+----------+----------|
        C(KC_Z),   C(KC_A),   C(KC_C),   C(KC_V),   LC(SPC),       KC_NO, KC_NO,     KC_LPRN,   KC_LBRC,   KC_RBRC,   KC_RPRN,   KC_BSLS,
//     |----------+----------+----------+----------+----------+                     +----------+----------+----------+----------+----------|
        KC_NO,     QK_AREP,   QK_REP,    KC_NO,     NUMB(ESC),   LS(ENT), KC_TRNS,   TO(_MOUS), KC_NO,     DM_PLY1,   DM_PLY2,   TO(0)
//     `----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------'

    ),

    [_NUMB] = LAYOUT(

//     ,----------+----------+----------+----------+----------+                     +----------+----------+----------+----------+----------.
        KC_BSPC,   KC_TAB,    KC_PGUP,   KC_UP,     KC_PGDN,       KC_NO, KC_NO,     KC_7,      KC_8,      KC_9,      KC_SLSH,   KC_MINS,
//     |----------+----------+----------+----------+----------+                     +----------+----------+----------+----------+----------|
        KC_ESC,    TO(_NUMB), KC_LEFT,   KC_DOWN,   KC_RGHT,       KC_NO, KC_NO,     KC_4,      KC_5,      KC_6,      KC_ASTR,   KC_PLUS,
//     |----------+----------+----------+----------+----------+                     +----------+----------+----------+----------+----------|
        KC_DEL,    KC_LGUI,   KC_LALT,   KC_LCTL,   LS(SPC),       KC_NO, KC_NO,     KC_1,      KC_2,      KC_3,      KC_DOT,    KC_EQL,
//     |----------+----------+----------+----------+----------+                     +----------+----------+----------+----------+----------|
        KC_NO,     QK_AREP,   QK_REP,    KC_NO,     KC_TRNS,      KC_SPC, KC_ENT,    KC_0,      KC_NO,     DM_PLY1,   DM_PLY2,   TO(0)
//     `----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------'

    ),

    [_MOUS] = LAYOUT(

//     ,----------+----------+----------+----------+----------+                     +----------+----------+----------+----------+----------.
        KC_PGUP,   KC_PGDN,   MS_WHLU,   MS_UP,     MS_WHLD,       KC_NO, KC_NO,     KC_HOME,   S(TAB),    KC_TAB,    KC_END,    KC_DEL,
//     |----------+----------+----------+----------+----------+                     +----------+----------+----------+----------+----------|
        KC_LGUI,   KC_BSPC,   MS_LEFT,   MS_DOWN,   MS_RGHT,       KC_NO, KC_NO,     MS_BTN1,   MS_BTN2,   MS_BTN3,   MS_ACL0,   MS_ACL2,
//     |----------+----------+----------+----------+----------+                     +----------+----------+----------+----------+----------|
        LA(SPC),   QK_AREP,   QK_REP,    MS_WHLL,   MS_WHLR,       KC_NO, KC_NO,     KC_SPC,    MS_BTN4,   MS_BTN5,   MS_BTN6,   KC_APP,
//     |----------+----------+----------+----------+----------+                     +----------+----------+----------+----------+----------|
        KC_NO,     QK_AREP,   QK_REP,    KC_NO,     LC(ESC),     LS(ENT), TO(0),     KC_TRNS,   KC_NO,     DM_PLY1,   DM_PLY2,   TO(0)
//     `----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------'

    ),

    [_MEDI] = LAYOUT(

//     ,----------+----------+----------+----------+----------+                     +----------+----------+----------+----------+----------.
        KC_SLEP,   KC_BRID,   KC_BRIU,   KC_MSTP,   KC_MPRV,       KC_NO, KC_NO,     KC_MNXT,   KC_MPLY,   KC_MUTE,   KC_VOLD,   KC_VOLU,
//     |----------+----------+----------+----------+----------+                     +----------+----------+----------+----------+----------|
        KC_F4,     KC_F5,     KC_F3,     KC_F2,     KC_F1,         KC_NO, KC_NO,     KC_F10,    KC_F6,     KC_F8,     KC_F9,     KC_F7,
//     |----------+----------+----------+----------+----------+                     +----------+----------+----------+----------+----------|
        UG_NEXT,   UG_HUED,   UG_SATD,   UG_VALD,   KC_F11,        KC_NO, KC_NO,     KC_F12,    UG_VALU,   UG_SATU,   UG_HUEU,   UG_TOGG,
//     |----------+----------+----------+----------+----------+                     +----------+----------+----------+----------+----------|
        KC_NO,     QK_AREP,   QK_REP,    KC_NO,     KC_TRNS,   MO(_AJST), MO(_AJST), MO(_MOUS), KC_NO,     DM_REC1,   DM_REC2,   TO(0)
//     `----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------'

    ),

    [_AJST] = LAYOUT(

//     ,----------+----------+----------+----------+----------+                     +----------+----------+----------+----------+----------.
        QK_BOOT,   DB_TOGG,   UG_TOGG,   UG_NEXT,   UG_HUEU,       KC_NO, KC_NO,     UG_HUED,   UG_SATU,   UG_SATD,   UG_SPDU,   UG_SPDD,
//     |----------+----------+----------+----------+----------+                     +----------+----------+----------+----------+----------|
        MU_NEXT,   AU_ON,     AU_OFF,    AG_NORM,   AG_SWAP,       KC_NO, KC_NO,     PDF(_QWERTY), PDF(_PINKY_REACH_CMK), TO(0), TO(0), TO(0),
//     |----------+----------+----------+----------+----------+                     +----------+----------+----------+----------+----------|
        AU_PREV,   AU_NEXT,   MU_ON,     MU_OFF,    KC_NO,         KC_NO, KC_NO,     MI_ON,     MI_OFF,    KC_NO,     KC_NO,     EE_CLR,
//     |----------+----------+----------+----------+----------+                     +----------+----------+----------+----------+----------|
        KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,       KC_TRNS, KC_TRNS,   KC_NO,     KC_NO,     KC_NO,     KC_NO,     TO(0)
//     `----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------'

    ),

};


uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // The shortest time for rolling into a new layer determines
        // the longest time for rolling off the outer layer's tap key.
        case MVMT(SPC):
            return 150;

        // Alpha keys get more time to help avoid errors.
        // The downside is that they need to be held longer to trigger.
        case LS(KC_G):
        case LS(KC_H):
            return 160;

        case LG(KC_S):
        case RG(KC_L):
        case LG(KC_A):
        case RG(KC_O):
            // Reduce risk of triggering Windows key when held slightly too long.
            return 200;

        default:
            return 120;
    }
}

bool get_retro_tapping(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // Never emit Backspace when this Shift is held for longer than the Tap Time.
        case LS(KC_BSPC):
            return false;

        // Prefer GUI... Maybe unnecessary?
        case LG(KC_S):
        case RG(KC_L):
        case LG(KC_A):
        case RG(KC_O):
            return false;

        default:
            // Emit the tapped key in every other case.
            return true;
    }
}

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LS(KC_BSPC):
        case LG(KC_S):
        case RG(KC_L):
        case LG(KC_A):
        case RG(KC_O):
            // Immediately activate these mods upon another keypress.
            return true;
        default:
            // Use the default tap-or-hold decision mode for any other mod-tap key.
            return false;
    }
}
