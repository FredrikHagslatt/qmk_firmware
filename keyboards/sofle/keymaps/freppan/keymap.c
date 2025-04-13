
#include QMK_KEYBOARD_H
#include "keymap.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_SPLIT_WRAPPER(

        // Left half
            KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,
            KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,
            KC_LCTL,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,
            KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_MPLY,
                                    KC_LGUI,    KC_LALT,    KC_RALT,    KC_SPC,     MO(1),

        // Right half
            KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_GRV,
            KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_LBRC,
            KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,
KC_MFFD,    KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_NUHS,
KC_BSPC,    KC_ENT,     KC_DEL,     KC_RALT,    KC_RBRC
    ),

    [1] = LAYOUT_SPLIT_WRAPPER(

        // Left half
            KC_ESC,     KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,
            KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,
            KC_LCTL,    KC_NO,      KC_NO,      KC_MPLY,    KC_VOLD,    KC_VOLU,
            KC_LSFT,    SE_LABK,    SE_RABK,    SE_PIPE,    KC_V,       KC_B,       KC_MPLY,
                                    KC_LGUI,    KC_LALT,    KC_LCTL,    KC_NO,      KC_SPC,

        // Right half
            KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,
            KC_Y,       KC_U,       KC_LPRN,    KC_RPRN,    KC_P,       KC_LBRC,
            KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT,    KC_SCLN,    KC_PGUP,
KC_NO,      SE_UNDS,    SE_MINS,    SE_TILD,    KC_RCBR,    KC_COMM,    KC_DOT,
KC_BSPC,    KC_ENT,     KC_DEL,     KC_RALT,    KC_NO
    )
};


#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

