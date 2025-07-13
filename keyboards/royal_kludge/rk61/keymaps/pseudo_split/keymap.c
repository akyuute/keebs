#include QMK_KEYBOARD_H


enum layers {
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
#define QUE KC_QUES
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
    }
    return true;
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT_all(

//     ,----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+---------------.
        KC_PSCR,    KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,      KC_NO,     KC_NO,     KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,      KC_BSPC,KC_NO,
//     |----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+---------------|
        KC_TAB,    KC_A,      LG(KC_S),  LA(KC_D),  LC(KC_F),  KC_G,      KC_NO,     KC_H,      RC(KC_J),  RA(KC_K),  RG(KC_L),  KC_QUOT,   KC_SCLN,   KC_TAB,
//     |----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+---------------|
        KC_ESC,    KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,      KC_NO,     KC_N,      KC_M,      KC_COMM,   KC_DOT,    KC_MINS,   KC_ENT,
//     |----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+-------------------------------------|
        KC_LSFT,              DM_PLY1,   DM_PLY2,   NUMB(TAB), LC(ESC),     LS(BAK), MVMT(SPC), SYMB(TAB), MOUS(TAB), QK_REP, QK_AREP, TO(_MOUS),KC_NO,KC_NO,
//     |----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+--------------------------|
        KC_LGUI,   KC_LCTL,   MO(_MVMT),                                  KC_SPC,                          KC_DEL,    KC_RALT,   KC_RCTL,   TO(0)
//     `--------------------------------------------------------------------------------------------------------------------------------------------------------------'

    ),

    [_PINKY_REACH_CMK] = LAYOUT_all(

//     ,----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+---------------.
        KC_PSCR,    KC_Q,      KC_V,      KC_W,      KC_F,      KC_P,      KC_NO,     KC_NO,     KC_COMM, KC_DOT, KC_K,      KC_J,      KC_QUOT,   KC_BSPC,KC_NO,
//     |----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+---------------|
        KC_TAB,    KC_X,      LG(KC_A),  LA(KC_R),  LC(KC_S),  KC_T,  KC_NO,     KC_N,  RC(KC_E),  RA(KC_I),  RG(KC_O),  KC_L,   KC_SCLN,      KC_TAB,
//     |----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+---------------|
        KC_ESC, KC_Z, KC_B, KC_C, KC_D, KC_G, KC_NO, KC_H, KC_U,      KC_Y,      KC_M, KC_MINS, KC_ENT,
//     |----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+-------------------------------------|
        KC_LSFT,              DM_PLY1,   DM_PLY2,   NUMB(TAB), LC(ESC),     LS(BAK), MVMT(SPC), SYMB(TAB), MOUS(TAB), QK_REP, QK_AREP, TO(_MOUS),KC_NO,KC_NO,
//     |----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+--------------------------|
        KC_LGUI,   KC_LCTL,   MO(_MVMT),                                  KC_SPC,                          KC_DEL,    KC_RALT,   KC_RCTL,   TO(0)
//     `--------------------------------------------------------------------------------------------------------------------------------------------------------------'

    ),

    [_SYMB] = LAYOUT_all(

//     ,----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+---------------.
        KC_PSCR,     KC_AT,     KC_AMPR,   KC_EXLM,   KC_TAB,    KC_PERC,       KC_NO, KC_NO,     KC_CIRC,   KC_HASH,   KC_ASTR,   KC_DLR,    KC_GRV, KC_DEL,KC_NO,
//     |----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+---------------|
        KC_TAB, KC_1,  LG(KC_2),  LA(KC_3),  LC(KC_4),  KC_5,          KC_NO,      KC_6,      RC(KC_7),  RA(KC_8),  RG(KC_9),  KC_0, KC_BSPC,    KC_TAB,
//     |----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+---------------|
        KC_ESC, KC_BSPC,    KC_PIPE,   KC_TILD,   KC_SLSH,   KC_EQL,        KC_NO,      KC_COLN,   KC_SCLN,   KC_MINS,   KC_PLUS,   KC_QUES, KC_ENT,
//     |----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+--------------------------|
        KC_LSFT,              MAC1,   MAC2,   MAC3,   MEDI(SPC),   LS(ENT), KC_NO,     KC_TRNS,   MAC4,   MAC5,   MAC6,   KC_RSFT,KC_NO,KC_NO,
//     |----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+--------------------------|
        KC_LGUI,   KC_LCTL,   KC_LSFT,   KC_SPC,    KC_NO,     KC_NO,     KC_NO,     TO(0)
//     `--------------------------------------------------------------------------------------------------------------------------------------------------------------'

    ),

    [_MVMT] = LAYOUT_all(

//     ,----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+---------------.
        KC_APP, KC_F5,     KC_F2,     KC_PGUP,   KC_TAB,    KC_PGDN,       KC_NO, KC_NO,     KC_HOME,   KC_LCBR,   KC_RCBR,   KC_END,    KC_BSPC, KC_DEL, KC_NO,
//     |----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+---------------|
        KC_TAB, SG(DEL),   KC_LGUI,   KC_LALT,   KC_LCTL,   KC_LSFT,       KC_NO,      KC_LEFT,   KC_DOWN,   KC_UP,     KC_RGHT,   KC_ENT, KC_BSPC, KC_TAB,
//     |----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+---------------|
        KC_ESC, C(KC_Z),   C(KC_A),   C(KC_C),   C(KC_V),   LC(SPC),       KC_NO,      KC_LPRN,   KC_LBRC,   KC_RBRC,   KC_RPRN,   KC_BSLS,   KC_ENT,
//     |----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+--------------------------|
        KC_LSFT, KC_LALT, KC_TAB, KC_ENT, NUMB(ESC),   LS(ENT), KC_TRNS,   TO(_MOUS), KC_NO,     QK_REP,    QK_AREP,   KC_RSFT,KC_NO,KC_NO,
//     |----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+--------------------------|
        KC_LGUI, KC_LCTL, KC_TRNS, KC_SPC, MO(_MEDI), KC_NO, KC_NO, TO(0)
//     `--------------------------------------------------------------------------------------------------------------------------------------------------------------'
    ),

    [_NUMB] = LAYOUT_all(

//     ,----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+---------------.
        KC_NO, KC_F4, KC_F2, KC_ESC, KC_LALT, KC_DEL, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_SLSH,   KC_MINS, KC_DEL, KC_NO,
//     |----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+---------------|
        KC_TAB, KC_PGDN, KC_PGUP, KC_SPC, KC_UP, KC_BSPC, KC_NO, KC_4, KC_5, KC_6, KC_PLUS, KC_ASTR,   KC_BSPC, KC_ESC,
//     |----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+---------------|
        KC_ESC, KC_LSFT, KC_LCTL, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_1, KC_2, KC_3, KC_DOT,    KC_EQL, KC_ENT,
//     |----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+--------------------------|
        KC_LSFT, KC_HOME, KC_END, KC_F6, KC_TRNS, TO(_NUMB), KC_ENT, KC_0, KC_TAB, KC_SPC, KC_COMM, KC_RSFT,KC_NO,KC_NO,
//     |----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+--------------------------|
        KC_ENT,    KC_LGUI,   KC_LSFT,   KC_SPC,    KC_TAB,    KC_NO,     KC_NO,     TO(0)
//     `--------------------------------------------------------------------------------------------------------------------------------------------------------------'

    ),

    [_MOUS] = LAYOUT_all(

//     ,----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+---------------.
        KC_PSCR, KC_BSPC, MS_WHLL, KC_PGUP,   KC_PGDN,   MS_WHLR, KC_NO, KC_NO, KC_HOME,   S(TAB), KC_TAB,    KC_END,    KC_BSPC, KC_DEL,KC_NO,
//     |----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+---------------|
        KC_TAB, QK_AREP,   QK_REP,    MS_WHLU,   MS_UP, MS_WHLD, KC_NO, MS_BTN1, MS_BTN2, MS_BTN3, MS_ACL0, MS_ACL2, KC_TAB, KC_TAB,
//     |----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+---------------|
        KC_ESC, KC_LGUI,   LA(SPC),   MS_LEFT, MS_DOWN, MS_RGHT, KC_NO, KC_SPC, MS_BTN4, MS_BTN5, MS_BTN6, KC_APP, KC_ENT,
//     |----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+--------------------------|
        KC_LSFT,              DM_PLY1,   DM_PLY2,   KC_NO,     LC(ESC),     LS(ENT), TO(0),     KC_TRNS,   KC_ENT,    QK_REP,    QK_AREP,   KC_RSFT,KC_NO,KC_NO,
//     |----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+--------------------------|
        KC_NO, KC_NO, KC_LALT, QK_REP, KC_NO, KC_NO, KC_NO, TO(0)
//     `--------------------------------------------------------------------------------------------------------------------------------------------------------------'

    ),

    [_MEDI] = LAYOUT_all(

//     ,----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+---------------.
        KC_SLEP,   KC_BRID,   KC_BRIU,   KC_MRWD, KC_MSTP,   KC_MPRV,       KC_NO, KC_NO,     KC_MNXT,   KC_MPLY,   KC_MFFD, KC_VOLD,   KC_VOLU, KC_MUTE,KC_NO,
//     |----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+---------------|
        KC_NO,     SG(KC_F1), LG(KC_F2), LA(KC_F3), LC(KC_F4), LS(KC_F5), KC_NO,     RS(KC_F6), RC(KC_F7), RA(KC_F8), RG(KC_F9), SG(KC_F10), KC_NO,    KC_NO,
//     |----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+---------------|
        KC_NO,     RGB_MOD,   RGB_HUD,   RGB_SAD,   RGB_VAD,   KC_F11,    KC_NO,     KC_F12,    RGB_VAI,   RGB_SAI,   RGB_HUI,   RGB_TOG,   KC_NO,
//     |----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+--------------------------|
        KC_LSFT,                DM_REC1, DM_REC2,   KC_NO,     KC_TRNS, MO(_AJST), MO(_AJST), MO(_MOUS), KC_NO,     KC_NO,     KC_NO,     KC_RSFT,KC_NO,KC_NO,
//     |----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+--------------------------|
        KC_NO,     KC_NO,     KC_TRNS,   KC_MPLY,   KC_TRNS,   KC_NO,     KC_NO,     TO(0)
//     `--------------------------------------------------------------------------------------------------------------------------------------------------------------'

    ),

    [_AJST] = LAYOUT_all(

//     ,----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+---------------.
        EE_CLR,    KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,KC_NO,
//     |----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+---------------|
        KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     PDF(_QWERTY), PDF(_PINKY_REACH_CMK), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
//     |----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+---------------|
        QK_BOOT,   KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,
//     |----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+--------------------------|
        KC_NO,                KC_NO,     KC_NO,     KC_NO,     KC_TRNS,   KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_RSFT,KC_NO,KC_NO,
//     |----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+----------+--------------------------|
        KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     TO(0)
//     `--------------------------------------------------------------------------------------------------------------------------------------------------------------'

    )
};


uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // The shortest time for rolling into a new layer determines
        // the longest time for rolling off the outer layer's tap key.
        case MVMT(SPC):
            return 150;
        case SYMB(TAB):
        case LS(BAK):
            return 160;

        // Alpha keys get more time to help avoid errors.
        // The downside is that they need to be held longer to trigger.
        case LA(KC_S):
        case LC(KC_D):
        case RC(KC_J):
        case RA(KC_K):

        // case LA(KC_S):
        case LC(KC_R):
        case RC(KC_E):
        case RA(KC_I):
            return 160;

        // Reduce risk of triggering Windows key when held slightly too long.
        case LG(KC_S):
        case RG(KC_L):
        case LG(KC_A):
        case RG(KC_O):
            return 200;

        default:
            return 150;
    }
}

bool get_retro_tapping(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // Never emit these tapped keys when they are held for longer than the Tap Time.
        case LS(BAK):
        case SYMB(TAB):
            return false;

        // Allow slower typing for these keys.
        case LA(KC_D):
        case LC(KC_F):
        case RC(KC_J):
        case RA(KC_K):

        case LA(KC_R):
        case LC(KC_S):
        case RC(KC_E):
        case RA(KC_I):
            return true;

        // Reduce risk of triggering Windows key when held slightly too long.
        case LG(KC_S):
        case RG(KC_L):
        case LG(KC_A):
        case RG(KC_O):
            return true;

        // Use the default tap-or-hold decision mode for any other mod-tap key.
        default:
            return false;
    }
}

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // Immediately activate these mods upon another keypress.
        case LS(BAK):
        case SYMB(TAB):
            return true;

        // Use the default tap-or-hold decision mode for any other mod-tap key.
        default:
            return false;
    }
}

