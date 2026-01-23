#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ORYX_SL_TOGG,
  ORYX_SL_TRIGG,
  HSV_129_255_255,
  HSV_99_169_190,
  HSV_169_255_255,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
  ST_MACRO_14,
  ST_MACRO_15,
  ST_MACRO_16,
  MAC_MISSION_CONTROL,
  MAC_SIRI,
  MAC_DND,
  MAC_LOCK,
  DRAG_SCROLL,
  TOGGLE_SCROLL,
  NAVIGATOR_INC_CPI,
  NAVIGATOR_DEC_CPI,
  NAVIGATOR_TURBO,
  NAVIGATOR_AIM
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
  DANCE_11,
  DANCE_12,
  DANCE_13,
  DANCE_14,
  DANCE_15,
  DANCE_16,
  DANCE_17,
  DANCE_18,
  DANCE_19,
  DANCE_20,
  DANCE_21,
  DANCE_22,
  DANCE_23,
  DANCE_24,
  DANCE_25,
  DANCE_26,
  DANCE_27,
};

#define DUAL_FUNC_0 LT(15, KC_F15)
#define DUAL_FUNC_1 LT(14, KC_F8)
#define DUAL_FUNC_2 LT(6, KC_5)
#define DUAL_FUNC_3 LT(12, KC_F19)
#define DUAL_FUNC_4 LT(10, KC_Y)
#define DUAL_FUNC_5 LT(14, KC_9)
#define DUAL_FUNC_6 LT(7, KC_F22)
#define DUAL_FUNC_7 LT(12, KC_N)
#define DUAL_FUNC_8 LT(15, KC_3)
#define DUAL_FUNC_9 LT(10, KC_T)
#define DUAL_FUNC_10 LT(9, KC_0)
#define DUAL_FUNC_11 LT(8, KC_V)
#define DUAL_FUNC_12 LT(9, KC_F17)
#define DUAL_FUNC_13 LT(3, KC_0)
#define DUAL_FUNC_14 LT(6, KC_F9)
#define DUAL_FUNC_15 LT(3, KC_F3)
#define DUAL_FUNC_16 LT(10, KC_J)
#define DUAL_FUNC_17 LT(9, KC_O)
#define DUAL_FUNC_18 LT(10, KC_F21)
#define DUAL_FUNC_19 LT(9, KC_F20)
#define DUAL_FUNC_20 LT(14, KC_S)
#define DUAL_FUNC_21 LT(15, KC_F14)
#define DUAL_FUNC_22 LT(15, KC_D)
#define DUAL_FUNC_23 LT(14, KC_F5)
#define DUAL_FUNC_24 LT(13, KC_F14)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    TD(DANCE_0),    KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TD(DANCE_3),    
    TD(DANCE_1),    KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCLN,        TD(DANCE_4),    
    OSM(MOD_LSFT),  MT(MOD_LCTL, KC_A),MT(MOD_LALT, KC_R),MT(MOD_LSFT, KC_S),MT(MOD_LGUI, KC_T),MEH_T(KC_G),                                    ALL_T(KC_M),    MT(MOD_RGUI, KC_N),MT(MOD_RSFT, KC_E),MT(MOD_RALT, KC_I),MT(MOD_RCTL, KC_O),TD(DANCE_5),    
    TD(DANCE_2),    KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       ORYX_SL_TRIGG,  
                                                    KC_TAB,         OSL(2),                                         TT(3),          KC_SPACE
  ),
  [1] = LAYOUT_voyager(
    TD(DANCE_6),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_9),    
    TD(DANCE_7),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_10),   
    KC_TRANSPARENT, MT(MOD_LGUI, KC_A),KC_TRANSPARENT, KC_TRANSPARENT, MT(MOD_LCTL, KC_T),KC_TRANSPARENT,                                 KC_TRANSPARENT, MT(MOD_RCTL, KC_N),KC_TRANSPARENT, KC_TRANSPARENT, MT(MOD_RGUI, KC_O),TD(DANCE_11),   
    TD(DANCE_8),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    DUAL_FUNC_0,    LALT(LSFT(KC_EQUAL)),LALT(KC_COMMA), LALT(KC_DOT),   RALT(KC_EQUAL), LALT(KC_SCLN),                                  RALT(KC_X),     LALT(KC_8),     DUAL_FUNC_4,    DUAL_FUNC_5,    LALT(KC_0),     ST_MACRO_3,     
    ST_MACRO_0,     KC_DQUO,        KC_LABK,        KC_RABK,        KC_QUOTE,       KC_GRAVE,                                       KC_AMPR,        ST_MACRO_4,     KC_LBRC,        KC_RBRC,        DUAL_FUNC_6,    ST_MACRO_5,     
    CW_TOGG,        DUAL_FUNC_1,    DUAL_FUNC_2,    KC_PLUS,        KC_EQUAL,       KC_HASH,                                        KC_PIPE,        KC_COLN,        KC_LPRN,        KC_RPRN,        DUAL_FUNC_7,    RSFT(KC_ENTER), 
    DUAL_FUNC_3,    KC_CIRC,        KC_SLASH,       KC_ASTR,        KC_BSLS,        ST_MACRO_1,                                     KC_TILD,        DUAL_FUNC_8,    KC_LCBR,        KC_RCBR,        KC_AT,          DUAL_FUNC_9,    
                                                    ST_MACRO_2,     LALT(LGUI(LCTL(LSFT(KC_TAB)))),                                QK_LLCK,        KC_UNDS
  ),
  [3] = LAYOUT_voyager(
    ST_MACRO_6,     RCTL(KC_LEFT),  RCTL(KC_DOWN),  MAC_MISSION_CONTROL,RCTL(KC_RIGHT), LALT(LCTL(LSFT(KC_N))),                                TD(DANCE_14),   DUAL_FUNC_12,   KC_COLN,        KC_LPRN,        KC_RPRN,        KC_TRANSPARENT, 
    LCTL(LSFT(KC_UP)),KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         LALT(LGUI(LCTL(LSFT(KC_SPACE)))),                                KC_KP_7,        KC_KP_8,        KC_KP_9,        DUAL_FUNC_13,   DUAL_FUNC_14,   KC_TRANSPARENT, 
    MEH_T(KC_CAPS), KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       LGUI(LCTL(KC_SPACE)),                                ALL_T(KC_KP_4), MT(MOD_RGUI, KC_KP_5),MT(MOD_RSFT, KC_KP_6),MT(MOD_RALT, KC_KP_PLUS),MT(MOD_RCTL, KC_KP_ASTERISK),KC_TRANSPARENT, 
    ST_MACRO_7,     DUAL_FUNC_10,   RGUI(RSFT(KC_DOWN)),RGUI(RSFT(KC_UP)),DUAL_FUNC_11,   TD(DANCE_12),                                   KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_DOT,      KC_COMMA,       TD(DANCE_15),   
                                                    KC_TRANSPARENT, TD(DANCE_13),                                   KC_TRANSPARENT, KC_KP_0
  ),
  [4] = LAYOUT_voyager(
    RGB_TOG,        TOGGLE_LAYER_COLOR,RGB_MODE_FORWARD,RGB_SLD,        RGB_VAD,        RGB_VAI,                                        KC_F20,         KC_F13,         KC_F14,         KC_F15,         KC_F16,         TO(7),          
    ORYX_SL_TOGG,   MAC_SIRI,       KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,RGB_SAI,                                        KC_F19,         KC_F9,          KC_F10,         KC_F11,         KC_F12,         TO(6),          
    MAC_LOCK,       MT(MOD_LCTL, KC_MEDIA_PREV_TRACK),MT(MOD_LALT, KC_MEDIA_NEXT_TRACK),MT(MOD_LSFT, KC_MEDIA_STOP),MT(MOD_LGUI, KC_MEDIA_PLAY_PAUSE),RGB_SAD,                                        KC_F17,         KC_F1,          KC_F2,          KC_F3,          KC_F4,          TO(9),          
    HSV_129_255_255,HSV_99_169_190, HSV_169_255_255,LED_LEVEL,      RGB_HUD,        RGB_HUI,                                        KC_F18,         KC_F5,          KC_F6,          KC_F7,          KC_F8,          TO(8),          
                                                    OSM(MOD_MEH),   MAC_DND,                                        TO(0),          OSM(MOD_HYPR)
  ),
  [5] = LAYOUT_voyager(
    KC_NO,          NAVIGATOR_DEC_CPI,NAVIGATOR_INC_CPI,KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_MS_BTN8,     KC_MS_BTN7,     KC_MS_BTN3,     KC_MS_DBL_CLICK,KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_MS_BTN6,     KC_MS_BTN5,     KC_MS_BTN4,     KC_MS_BTN2,     KC_MS_BTN1,     DRAG_SCROLL,                                    KC_MS_BTN3,     KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          LCTL(KC_MS_BTN1),LALT(KC_MS_BTN1),LSFT(KC_MS_BTN1),LGUI(KC_MS_BTN1),                                KC_MS_BTN1,     KC_MS_BTN2,     KC_MS_JIGGLER_TOGGLE,KC_NO,          KC_NO,          KC_NO,          
                                                    NAVIGATOR_AIM,  NAVIGATOR_TURBO,                                TOGGLE_SCROLL,  QK_LLCK
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_NO,          KC_NO,          KC_NO,          LGUI(LSFT(KC_M)),LGUI(LSFT(KC_R)),KC_NO,                                          KC_NO,          DUAL_FUNC_16,   LGUI(KC_6),     KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_NO,          DUAL_FUNC_15,   TD(DANCE_16),   TD(DANCE_17),   LGUI(LSFT(KC_D)),TD(DANCE_18),                                   LGUI(LSFT(KC_O)),DUAL_FUNC_17,   DUAL_FUNC_18,   DUAL_FUNC_19,   DUAL_FUNC_20,   KC_TRANSPARENT, 
    TD(DANCE_19),   KC_NO,          KC_NO,          TD(DANCE_20),   TD(DANCE_21),   KC_NO,                                          KC_NO,          TD(DANCE_24),   TD(DANCE_25),   KC_NO,          KC_NO,          KC_TRANSPARENT, 
                                                    TD(DANCE_22),   TD(DANCE_23),                                   TO(0),          QK_LLCK
  ),
  [7] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_UP,          LCTL(LSFT(KC_TAB)),LCTL(KC_PAGE_UP),LCTL(KC_PGDN),  LCTL(KC_TAB),   KC_NO,                                          KC_NO,          RGUI(RSFT(KC_Y)),RGUI(KC_U),     RALT(RGUI(KC_DOT)),RCTL(KC_0),     LGUI(KC_LBRC),  
    KC_DOWN,        LCTL(KC_4),     LGUI(LSFT(KC_M)),LGUI(LSFT(KC_K)),LCTL(KC_KP_1),  LGUI(KC_G),                                     LGUI(KC_F),     LGUI(LSFT(KC_A)),LGUI(LSFT(KC_T)),RGUI(RSFT(KC_L)),RGUI(KC_K),     LGUI(KC_RBRC),  
    KC_NO,          LALT(LSFT(KC_UP)),RGUI(RCTL(KC_LEFT)),RGUI(RCTL(KC_RIGHT)),LALT(LSFT(KC_DOWN)),KC_NO,                                          KC_NO,          RGUI(RSFT(KC_D)),RGUI(KC_COMMA), RGUI(RSFT(KC_I)),RGUI(RSFT(KC_E)),KC_NO,          
                                                    TD(DANCE_26),   RGUI(RSFT(KC_SPACE)),                                TO(0),          QK_LLCK
  ),
  [8] = LAYOUT_voyager(
    TD(DANCE_27),   KC_1,           DUAL_FUNC_21,   DUAL_FUNC_22,   KC_4,           KC_5,                                           KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_DELETE,      
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           DUAL_FUNC_23,                                   KC_Y,           KC_L,           KC_UP,          KC_O,           KC_P,           KC_BSPC,        
    OSM(MOD_LSFT),  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_M,           KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_SCLN,        KC_ENTER,       
    OSM(MOD_LALT),  KC_Z,           KC_X,           KC_C,           DUAL_FUNC_24,   KC_B,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT, 
                                                    KC_SPACE,       OSM(MOD_LCTL),                                  TO(0),          KC_SPACE
  ),
  [9] = LAYOUT_voyager(
    KC_NO,          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_NO,          KC_1,           KC_2,           KC_3,           KC_4,           KC_PLUS,                                        KC_HASH,        KC_5,           KC_6,           KC_7,           KC_8,           KC_TRANSPARENT, 
    KC_NO,          KC_A,           KC_B,           KC_C,           KC_D,           ST_MACRO_8,                                     ST_MACRO_9,     KC_E,           KC_F,           KC_G,           KC_H,           KC_TRANSPARENT, 
    KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_SHIFT,  LSFT(KC_N),     LSFT(KC_B),     LSFT(KC_Q),                                     LSFT(KC_K),     LSFT(KC_R),     KC_X,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_X,           KC_Z,                                           TO(0),          KC_TRANSPARENT
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { OSL(2), TT(3), COMBO_END};
const uint16_t PROGMEM combo1[] = { OSL(2), MT(MOD_RGUI, KC_N), COMBO_END};
const uint16_t PROGMEM combo2[] = { OSL(2), MT(MOD_RSFT, KC_E), COMBO_END};
const uint16_t PROGMEM combo3[] = { OSL(2), MT(MOD_RALT, KC_I), COMBO_END};
const uint16_t PROGMEM combo4[] = { OSL(2), MT(MOD_RCTL, KC_O), COMBO_END};
const uint16_t PROGMEM combo5[] = { OSL(2), KC_U, COMBO_END};
const uint16_t PROGMEM combo6[] = { OSL(2), MT(MOD_LCTL, KC_A), COMBO_END};
const uint16_t PROGMEM combo7[] = { TT(3), MT(MOD_LSFT, KC_S), COMBO_END};
const uint16_t PROGMEM combo8[] = { TT(3), MT(MOD_LGUI, KC_T), COMBO_END};
const uint16_t PROGMEM combo9[] = { TT(3), MEH_T(KC_G), COMBO_END};
const uint16_t PROGMEM combo10[] = { OSL(2), KC_Y, COMBO_END};
const uint16_t PROGMEM combo11[] = { KC_W, OSL(2), TT(3), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TO(4)),
    COMBO(combo1, ST_MACRO_10),
    COMBO(combo2, ST_MACRO_11),
    COMBO(combo3, ST_MACRO_12),
    COMBO(combo4, ST_MACRO_13),
    COMBO(combo5, ST_MACRO_14),
    COMBO(combo6, ST_MACRO_15),
    COMBO(combo7, OSL(7)),
    COMBO(combo8, OSL(6)),
    COMBO(combo9, TO(8)),
    COMBO(combo10, ST_MACRO_16),
    COMBO(combo11, TG(1)),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case TD(DANCE_2):
            return TAPPING_TERM -50;
        case TD(DANCE_3):
            return TAPPING_TERM -150;
        case TD(DANCE_4):
            return TAPPING_TERM -150;
        case TD(DANCE_5):
            return TAPPING_TERM -150;
        case TD(DANCE_8):
            return TAPPING_TERM -50;
        case TD(DANCE_9):
            return TAPPING_TERM -150;
        case TD(DANCE_10):
            return TAPPING_TERM -150;
        case TD(DANCE_11):
            return TAPPING_TERM -150;
        case DUAL_FUNC_1:
            return TAPPING_TERM -200;
        case DUAL_FUNC_2:
            return TAPPING_TERM -200;
        case DUAL_FUNC_7:
            return TAPPING_TERM -200;
        case DUAL_FUNC_8:
            return TAPPING_TERM -200;
        case TD(DANCE_14):
            return TAPPING_TERM -150;
        case DUAL_FUNC_12:
            return TAPPING_TERM -200;
        case DUAL_FUNC_13:
            return TAPPING_TERM -200;
        case DUAL_FUNC_14:
            return TAPPING_TERM -200;
        case TD(DANCE_15):
            return TAPPING_TERM -200;
        case KC_KP_0:
            return TAPPING_TERM -200;
        case LCTL(KC_MS_BTN1):
            return TAPPING_TERM -150;
        case LALT(KC_MS_BTN1):
            return TAPPING_TERM -150;
        case LSFT(KC_MS_BTN1):
            return TAPPING_TERM -150;
        case LGUI(KC_MS_BTN1):
            return TAPPING_TERM -150;
        default:
            return TAPPING_TERM;
    }
}

bool capslock_active = false;
bool numlock_active = false;

bool led_update_user(led_t led_state) {
  capslock_active = led_state.caps_lock;
  numlock_active = led_state.num_lock;
  return true;
}

extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [2] = { {31,218,204}, {86,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {215,255,255}, {215,255,255}, {41,255,255}, {41,255,255}, {131,255,255}, {215,255,255}, {86,255,255}, {86,255,255}, {215,255,255}, {41,255,255}, {14,255,255}, {41,255,255}, {86,255,255}, {86,255,255}, {41,255,255}, {41,255,255}, {118,227,195}, {118,227,195}, {151,255,255}, {41,255,255}, {21,255,255}, {21,255,255}, {41,255,255}, {131,255,255}, {151,255,255}, {41,255,255}, {21,255,255}, {21,255,255}, {41,255,255}, {131,255,255}, {151,255,255}, {41,255,255}, {21,255,255}, {21,255,255}, {41,255,255}, {131,255,255}, {151,255,255}, {41,255,255}, {21,255,255}, {21,255,255}, {41,255,255}, {14,255,255}, {135,253,128}, {131,255,255} },

    [3] = { {173,255,242}, {31,218,204}, {31,218,204}, {31,218,204}, {31,218,204}, {31,218,204}, {31,218,204}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {131,255,255}, {131,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {0,0,238}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {21,255,255}, {0,255,255}, {173,255,242}, {215,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {0,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {86,255,255}, {86,255,255}, {0,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {86,255,255}, {86,255,255}, {0,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {21,255,255}, {21,255,255}, {215,255,255}, {135,253,128}, {131,255,255} },

    [4] = { {31,218,204}, {31,218,204}, {31,218,204}, {31,218,204}, {31,218,204}, {31,218,204}, {158,169,190}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {31,218,204}, {195,218,204}, {0,0,238}, {0,0,238}, {0,0,238}, {0,0,238}, {31,218,204}, {129,255,255}, {99,169,190}, {169,255,255}, {31,218,204}, {31,218,204}, {31,218,204}, {0,0,255}, {195,218,204}, {0,0,0}, {195,134,255}, {31,218,204}, {31,218,204}, {86,255,255}, {215,255,255}, {0,0,238}, {131,255,255}, {15,255,255}, {0,255,255}, {0,0,0}, {172,255,255}, {169,255,255}, {131,255,255}, {169,255,255}, {215,255,255}, {0,255,255}, {188,255,255}, {135,253,128}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {135,253,128}, {0,0,255} },

    [5] = { {0,0,0}, {215,255,255}, {126,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {21,255,255}, {21,255,255}, {0,255,255}, {0,255,255}, {182,160,252}, {21,255,255}, {21,255,255}, {21,255,255}, {0,255,255}, {0,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {99,169,190}, {99,169,190}, {99,169,190}, {99,169,190}, {172,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {182,160,252}, {0,0,0}, {0,0,0}, {0,0,0}, {21,255,255}, {126,255,255} },

    [6] = { {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {195,218,204}, {99,169,190}, {0,0,0}, {0,0,0}, {25,255,255}, {0,0,255}, {0,0,255}, {0,255,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {43,255,255}, {151,255,255}, {0,0,0}, {151,255,255}, {151,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {33,96,200}, {99,169,190}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,255}, {169,255,255}, {34,217,255}, {0,255,255}, {126,210,165}, {0,255,255}, {0,0,0}, {151,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {135,253,128}, {126,255,255} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {43,255,255}, {43,255,255}, {169,255,255}, {169,255,255}, {0,0,0}, {0,0,255}, {25,255,255}, {25,255,255}, {25,255,255}, {25,255,255}, {0,0,255}, {0,0,0}, {43,255,255}, {43,255,255}, {169,255,255}, {169,255,255}, {0,0,0}, {215,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {195,218,204}, {195,218,204}, {195,218,204}, {195,218,204}, {0,0,255}, {0,0,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {0,0,255}, {0,0,0}, {195,218,204}, {195,218,204}, {195,218,204}, {195,218,204}, {0,0,0}, {135,253,128}, {126,255,255} },

    [8] = { {0,0,255}, {40,255,255}, {40,255,255}, {40,255,255}, {21,255,255}, {40,255,255}, {0,0,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {131,255,255}, {0,0,255}, {21,255,255}, {86,255,255}, {21,255,255}, {21,255,255}, {131,255,255}, {0,0,255}, {195,218,204}, {21,255,255}, {0,0,238}, {131,255,255}, {86,255,255}, {169,255,255}, {0,0,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {0,0,0}, {169,255,255}, {0,0,255}, {169,255,255}, {0,0,255}, {0,0,255}, {131,255,255}, {0,0,255}, {169,255,255}, {169,255,255}, {169,255,255}, {131,255,255}, {195,218,204}, {0,0,255}, {86,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {135,253,128}, {0,0,0} },

    [9] = { {0,0,0}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {21,255,255}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {215,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {21,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,255,255}, {215,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,255,255}, {21,255,255}, {21,255,255}, {0,255,255}, {0,0,255}, {0,0,255}, {21,255,255}, {135,253,128}, {0,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
      case 6:
        set_layer_color(6);
        break;
      case 7:
        set_layer_color(7);
        break;
      case 8:
        set_layer_color(8);
        break;
      case 9:
        set_layer_color(9);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  if (capslock_active && biton32(layer_state) == 3) {
    RGB rgb = hsv_to_rgb_with_value((HSV) { 86, 255, 255 });
    rgb_matrix_set_color( 12, rgb.r, rgb.g, rgb.b );
  } 
  if (numlock_active && biton32(layer_state) == 3) {
    RGB rgb = hsv_to_rgb_with_value((HSV) { 86, 255, 255 });
    rgb_matrix_set_color( 49, rgb.r, rgb.g, rgb.b );
  } 
  return true;
}

extern bool set_scrolling;
extern bool navigator_turbo;
extern bool navigator_aim;
void pointing_device_init_user(void) {
  set_auto_mouse_enable(true);
}

bool is_mouse_record_user(uint16_t keycode, keyrecord_t* record) {
  // All keys are not mouse keys when one shot auto mouse is enabled.
  return false;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,      
    SINGLE_HOLD,         
    DOUBLE_TAP,          
    DOUBLE_HOLD,         
    DOUBLE_SINGLE_TAP,   
    MORE_TAPS            
};

static tap dance_state[28];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
    }
    if(state->count > 3) {
        tap_code16(KC_ESCAPE);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_ESCAPE); break;
        case SINGLE_HOLD: register_code16(KC_SYSTEM_POWER); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_Q)); break;
        case DOUBLE_HOLD: register_code16(LALT(LGUI(KC_ESCAPE))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ESCAPE); register_code16(KC_ESCAPE);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
        case SINGLE_HOLD: unregister_code16(KC_SYSTEM_POWER); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_Q)); break;
        case DOUBLE_HOLD: unregister_code16(LALT(LGUI(KC_ESCAPE))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(LSFT(KC_5)));
        tap_code16(LGUI(LSFT(KC_5)));
        tap_code16(LGUI(LSFT(KC_5)));
    }
    if(state->count > 3) {
        tap_code16(LGUI(LSFT(KC_5)));
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LGUI(LSFT(KC_5))); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_3))); break;
        case DOUBLE_TAP: register_code16(LCTL(LGUI(LSFT(KC_3)))); break;
        case DOUBLE_HOLD: register_code16(LCTL(LGUI(LSFT(KC_4)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(LSFT(KC_5))); register_code16(LGUI(LSFT(KC_5)));
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LGUI(LSFT(KC_5))); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_3))); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LGUI(LSFT(KC_3)))); break;
        case DOUBLE_HOLD: unregister_code16(LCTL(LGUI(LSFT(KC_4)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(LSFT(KC_5))); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_C));
        tap_code16(LGUI(KC_C));
        tap_code16(LGUI(KC_C));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_C));
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_C)); break;
        case SINGLE_HOLD: register_code16(LGUI(KC_X)); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_V)); break;
        case DOUBLE_HOLD: register_code16(LALT(LGUI(LSFT(KC_V)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_C)); register_code16(LGUI(KC_C));
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_C)); break;
        case SINGLE_HOLD: unregister_code16(LGUI(KC_X)); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_V)); break;
        case DOUBLE_HOLD: unregister_code16(LALT(LGUI(LSFT(KC_V)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_C)); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DELETE);
        tap_code16(KC_DELETE);
        tap_code16(KC_DELETE);
    }
    if(state->count > 3) {
        tap_code16(KC_DELETE);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_DELETE); break;
        case DOUBLE_TAP: register_code16(LALT(KC_DELETE)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DELETE); register_code16(KC_DELETE);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_DELETE); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_DELETE)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DELETE); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
    }
    if(state->count > 3) {
        tap_code16(KC_BSPC);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_BSPC); break;
        case DOUBLE_TAP: register_code16(LALT(KC_BSPC)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_BSPC); register_code16(KC_BSPC);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_BSPC); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_BSPC)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_BSPC); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ENTER);
        tap_code16(KC_ENTER);
        tap_code16(KC_ENTER);
    }
    if(state->count > 3) {
        tap_code16(KC_ENTER);
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_ENTER); break;
        case SINGLE_HOLD: register_code16(RGUI(KC_ENTER)); break;
        case DOUBLE_TAP: register_code16(KC_ENTER); register_code16(KC_ENTER); break;
        case DOUBLE_HOLD: register_code16(LALT(KC_ENTER)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ENTER); register_code16(KC_ENTER);
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_ENTER); break;
        case SINGLE_HOLD: unregister_code16(RGUI(KC_ENTER)); break;
        case DOUBLE_TAP: unregister_code16(KC_ENTER); break;
        case DOUBLE_HOLD: unregister_code16(LALT(KC_ENTER)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ENTER); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
    }
    if(state->count > 3) {
        tap_code16(KC_ESCAPE);
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(KC_ESCAPE); break;
        case SINGLE_HOLD: register_code16(KC_SYSTEM_POWER); break;
        case DOUBLE_TAP: register_code16(LALT(KC_F4)); break;
        case DOUBLE_HOLD: register_code16(LCTL(LSFT(KC_ESCAPE))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ESCAPE); register_code16(KC_ESCAPE);
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
        case SINGLE_HOLD: unregister_code16(KC_SYSTEM_POWER); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_F4)); break;
        case DOUBLE_HOLD: unregister_code16(LCTL(LSFT(KC_ESCAPE))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PSCR);
        tap_code16(KC_PSCR);
        tap_code16(KC_PSCR);
    }
    if(state->count > 3) {
        tap_code16(KC_PSCR);
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(KC_PSCR); break;
        case SINGLE_HOLD: register_code16(LGUI(KC_PSCR)); break;
        case DOUBLE_TAP: register_code16(LALT(KC_PSCR)); break;
        case DOUBLE_HOLD: register_code16(LGUI(LSFT(KC_S))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PSCR); register_code16(KC_PSCR);
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(KC_PSCR); break;
        case SINGLE_HOLD: unregister_code16(LGUI(KC_PSCR)); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_PSCR)); break;
        case DOUBLE_HOLD: unregister_code16(LGUI(LSFT(KC_S))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PSCR); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(tap_dance_state_t *state, void *user_data);
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void on_dance_8(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_C));
    }
}

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_C)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_X)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_V)); break;
        case DOUBLE_HOLD: register_code16(LCTL(LSFT(KC_V))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_C)); register_code16(LCTL(KC_C));
    }
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_C)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_X)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_V)); break;
        case DOUBLE_HOLD: unregister_code16(LCTL(LSFT(KC_V))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_C)); break;
    }
    dance_state[8].step = 0;
}
void on_dance_9(tap_dance_state_t *state, void *user_data);
void dance_9_finished(tap_dance_state_t *state, void *user_data);
void dance_9_reset(tap_dance_state_t *state, void *user_data);

void on_dance_9(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DELETE);
        tap_code16(KC_DELETE);
        tap_code16(KC_DELETE);
    }
    if(state->count > 3) {
        tap_code16(KC_DELETE);
    }
}

void dance_9_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(KC_DELETE); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_DELETE)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DELETE); register_code16(KC_DELETE);
    }
}

void dance_9_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(KC_DELETE); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_DELETE)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DELETE); break;
    }
    dance_state[9].step = 0;
}
void on_dance_10(tap_dance_state_t *state, void *user_data);
void dance_10_finished(tap_dance_state_t *state, void *user_data);
void dance_10_reset(tap_dance_state_t *state, void *user_data);

void on_dance_10(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
    }
    if(state->count > 3) {
        tap_code16(KC_BSPC);
    }
}

void dance_10_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP: register_code16(KC_BSPC); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_BSPC)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_BSPC); register_code16(KC_BSPC);
    }
}

void dance_10_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP: unregister_code16(KC_BSPC); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_BSPC)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_BSPC); break;
    }
    dance_state[10].step = 0;
}
void on_dance_11(tap_dance_state_t *state, void *user_data);
void dance_11_finished(tap_dance_state_t *state, void *user_data);
void dance_11_reset(tap_dance_state_t *state, void *user_data);

void on_dance_11(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ENTER);
        tap_code16(KC_ENTER);
        tap_code16(KC_ENTER);
    }
    if(state->count > 3) {
        tap_code16(KC_ENTER);
    }
}

void dance_11_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    switch (dance_state[11].step) {
        case SINGLE_TAP: register_code16(KC_ENTER); break;
        case SINGLE_HOLD: register_code16(LCTL(LSFT(KC_ENTER))); break;
        case DOUBLE_TAP: register_code16(KC_ENTER); register_code16(KC_ENTER); break;
        case DOUBLE_HOLD: register_code16(LALT(KC_ENTER)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ENTER); register_code16(KC_ENTER);
    }
}

void dance_11_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case SINGLE_TAP: unregister_code16(KC_ENTER); break;
        case SINGLE_HOLD: unregister_code16(LCTL(LSFT(KC_ENTER))); break;
        case DOUBLE_TAP: unregister_code16(KC_ENTER); break;
        case DOUBLE_HOLD: unregister_code16(LALT(KC_ENTER)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ENTER); break;
    }
    dance_state[11].step = 0;
}
void on_dance_12(tap_dance_state_t *state, void *user_data);
void dance_12_finished(tap_dance_state_t *state, void *user_data);
void dance_12_reset(tap_dance_state_t *state, void *user_data);

void on_dance_12(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_T));
        tap_code16(LGUI(KC_T));
        tap_code16(LGUI(KC_T));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_T));
    }
}

void dance_12_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[12].step = dance_step(state);
    switch (dance_state[12].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_T)); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_N))); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_W)); break;
        case DOUBLE_HOLD: register_code16(LGUI(LSFT(KC_W))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_T)); register_code16(LGUI(KC_T));
    }
}

void dance_12_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[12].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_T)); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_N))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_W)); break;
        case DOUBLE_HOLD: unregister_code16(LGUI(LSFT(KC_W))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_T)); break;
    }
    dance_state[12].step = 0;
}
void on_dance_13(tap_dance_state_t *state, void *user_data);
void dance_13_finished(tap_dance_state_t *state, void *user_data);
void dance_13_reset(tap_dance_state_t *state, void *user_data);

void on_dance_13(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(LSFT(KC_SPACE))));
        tap_code16(LALT(LCTL(LSFT(KC_SPACE))));
        tap_code16(LALT(LCTL(LSFT(KC_SPACE))));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(LSFT(KC_SPACE))));
    }
}

void dance_13_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[13].step = dance_step(state);
    switch (dance_state[13].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(LSFT(KC_SPACE)))); break;
        case DOUBLE_TAP: register_code16(RALT(RCTL(RSFT(KC_TAB)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(LSFT(KC_SPACE)))); register_code16(LALT(LCTL(LSFT(KC_SPACE))));
    }
}

void dance_13_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[13].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_SPACE)))); break;
        case DOUBLE_TAP: unregister_code16(RALT(RCTL(RSFT(KC_TAB)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_SPACE)))); break;
    }
    dance_state[13].step = 0;
}
void on_dance_14(tap_dance_state_t *state, void *user_data);
void dance_14_finished(tap_dance_state_t *state, void *user_data);
void dance_14_reset(tap_dance_state_t *state, void *user_data);

void on_dance_14(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_K));
        tap_code16(LSFT(KC_K));
        tap_code16(LSFT(KC_K));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_K));
    }
}

void dance_14_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[14].step = dance_step(state);
    switch (dance_state[14].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_K)); break;
        case SINGLE_HOLD: register_code16(KC_DLR); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_M)); break;
        case DOUBLE_HOLD: register_code16(LALT(LSFT(KC_2))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_K)); register_code16(LSFT(KC_K));
    }
}

void dance_14_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[14].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_K)); break;
        case SINGLE_HOLD: unregister_code16(KC_DLR); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_M)); break;
        case DOUBLE_HOLD: unregister_code16(LALT(LSFT(KC_2))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_K)); break;
    }
    dance_state[14].step = 0;
}
void on_dance_15(tap_dance_state_t *state, void *user_data);
void dance_15_finished(tap_dance_state_t *state, void *user_data);
void dance_15_reset(tap_dance_state_t *state, void *user_data);

void on_dance_15(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_KP_EQUAL);
        tap_code16(KC_KP_EQUAL);
        tap_code16(KC_KP_EQUAL);
    }
    if(state->count > 3) {
        tap_code16(KC_KP_EQUAL);
    }
}

void dance_15_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[15].step = dance_step(state);
    switch (dance_state[15].step) {
        case SINGLE_TAP: register_code16(KC_KP_EQUAL); break;
        case SINGLE_HOLD: register_code16(LALT(LSFT(KC_EQUAL))); break;
        case DOUBLE_TAP: register_code16(KC_KP_EQUAL); register_code16(KC_KP_EQUAL); break;
        case DOUBLE_HOLD: register_code16(KC_NUM); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_KP_EQUAL); register_code16(KC_KP_EQUAL);
    }
}

void dance_15_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[15].step) {
        case SINGLE_TAP: unregister_code16(KC_KP_EQUAL); break;
        case SINGLE_HOLD: unregister_code16(LALT(LSFT(KC_EQUAL))); break;
        case DOUBLE_TAP: unregister_code16(KC_KP_EQUAL); break;
        case DOUBLE_HOLD: unregister_code16(KC_NUM); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_KP_EQUAL); break;
    }
    dance_state[15].step = 0;
}
void on_dance_16(tap_dance_state_t *state, void *user_data);
void dance_16_finished(tap_dance_state_t *state, void *user_data);
void dance_16_reset(tap_dance_state_t *state, void *user_data);

void on_dance_16(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DOWN);
        tap_code16(KC_DOWN);
        tap_code16(KC_DOWN);
    }
    if(state->count > 3) {
        tap_code16(KC_DOWN);
    }
}

void dance_16_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[16].step = dance_step(state);
    switch (dance_state[16].step) {
        case SINGLE_TAP: register_code16(KC_DOWN); break;
        case SINGLE_HOLD: register_code16(RGUI(KC_DOWN)); break;
        case DOUBLE_TAP: register_code16(RALT(RCTL(RGUI(KC_DOWN)))); break;
        case DOUBLE_HOLD: register_code16(RALT(RGUI(KC_DOWN))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DOWN); register_code16(KC_DOWN);
    }
}

void dance_16_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[16].step) {
        case SINGLE_TAP: unregister_code16(KC_DOWN); break;
        case SINGLE_HOLD: unregister_code16(RGUI(KC_DOWN)); break;
        case DOUBLE_TAP: unregister_code16(RALT(RCTL(RGUI(KC_DOWN)))); break;
        case DOUBLE_HOLD: unregister_code16(RALT(RGUI(KC_DOWN))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DOWN); break;
    }
    dance_state[16].step = 0;
}
void on_dance_17(tap_dance_state_t *state, void *user_data);
void dance_17_finished(tap_dance_state_t *state, void *user_data);
void dance_17_reset(tap_dance_state_t *state, void *user_data);

void on_dance_17(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_UP);
        tap_code16(KC_UP);
        tap_code16(KC_UP);
    }
    if(state->count > 3) {
        tap_code16(KC_UP);
    }
}

void dance_17_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[17].step = dance_step(state);
    switch (dance_state[17].step) {
        case SINGLE_TAP: register_code16(KC_UP); break;
        case SINGLE_HOLD: register_code16(RGUI(KC_UP)); break;
        case DOUBLE_TAP: register_code16(RALT(RCTL(RGUI(KC_UP)))); break;
        case DOUBLE_HOLD: register_code16(RALT(RGUI(KC_UP))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_UP); register_code16(KC_UP);
    }
}

void dance_17_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[17].step) {
        case SINGLE_TAP: unregister_code16(KC_UP); break;
        case SINGLE_HOLD: unregister_code16(RGUI(KC_UP)); break;
        case DOUBLE_TAP: unregister_code16(RALT(RCTL(RGUI(KC_UP)))); break;
        case DOUBLE_HOLD: unregister_code16(RALT(RGUI(KC_UP))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_UP); break;
    }
    dance_state[17].step = 0;
}
void on_dance_18(tap_dance_state_t *state, void *user_data);
void dance_18_finished(tap_dance_state_t *state, void *user_data);
void dance_18_reset(tap_dance_state_t *state, void *user_data);

void on_dance_18(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RGUI(RSFT(KC_F)));
        tap_code16(RGUI(RSFT(KC_F)));
        tap_code16(RGUI(RSFT(KC_F)));
    }
    if(state->count > 3) {
        tap_code16(RGUI(RSFT(KC_F)));
    }
}

void dance_18_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[18].step = dance_step(state);
    switch (dance_state[18].step) {
        case SINGLE_TAP: register_code16(RGUI(RSFT(KC_F))); break;
        case DOUBLE_TAP: register_code16(RALT(RGUI(RSFT(KC_F)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RGUI(RSFT(KC_F))); register_code16(RGUI(RSFT(KC_F)));
    }
}

void dance_18_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[18].step) {
        case SINGLE_TAP: unregister_code16(RGUI(RSFT(KC_F))); break;
        case DOUBLE_TAP: unregister_code16(RALT(RGUI(RSFT(KC_F)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RGUI(RSFT(KC_F))); break;
    }
    dance_state[18].step = 0;
}
void on_dance_19(tap_dance_state_t *state, void *user_data);
void dance_19_finished(tap_dance_state_t *state, void *user_data);
void dance_19_reset(tap_dance_state_t *state, void *user_data);

void on_dance_19(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LGUI(KC_V)));
        tap_code16(LALT(LGUI(KC_V)));
        tap_code16(LALT(LGUI(KC_V)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LGUI(KC_V)));
    }
}

void dance_19_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[19].step = dance_step(state);
    switch (dance_state[19].step) {
        case SINGLE_TAP: register_code16(LALT(LGUI(KC_V))); break;
        case DOUBLE_TAP: register_code16(RGUI(KC_V)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LGUI(KC_V))); register_code16(LALT(LGUI(KC_V)));
    }
}

void dance_19_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[19].step) {
        case SINGLE_TAP: unregister_code16(LALT(LGUI(KC_V))); break;
        case DOUBLE_TAP: unregister_code16(RGUI(KC_V)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LGUI(KC_V))); break;
    }
    dance_state[19].step = 0;
}
void on_dance_20(tap_dance_state_t *state, void *user_data);
void dance_20_finished(tap_dance_state_t *state, void *user_data);
void dance_20_reset(tap_dance_state_t *state, void *user_data);

void on_dance_20(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RCTL(KC_COMMA));
        tap_code16(RCTL(KC_COMMA));
        tap_code16(RCTL(KC_COMMA));
    }
    if(state->count > 3) {
        tap_code16(RCTL(KC_COMMA));
    }
}

void dance_20_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[20].step = dance_step(state);
    switch (dance_state[20].step) {
        case SINGLE_TAP: register_code16(RCTL(KC_COMMA)); break;
        case DOUBLE_TAP: register_code16(RCTL(RSFT(KC_COMMA))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RCTL(KC_COMMA)); register_code16(RCTL(KC_COMMA));
    }
}

void dance_20_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[20].step) {
        case SINGLE_TAP: unregister_code16(RCTL(KC_COMMA)); break;
        case DOUBLE_TAP: unregister_code16(RCTL(RSFT(KC_COMMA))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RCTL(KC_COMMA)); break;
    }
    dance_state[20].step = 0;
}
void on_dance_21(tap_dance_state_t *state, void *user_data);
void dance_21_finished(tap_dance_state_t *state, void *user_data);
void dance_21_reset(tap_dance_state_t *state, void *user_data);

void on_dance_21(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RCTL(KC_DOT));
        tap_code16(RCTL(KC_DOT));
        tap_code16(RCTL(KC_DOT));
    }
    if(state->count > 3) {
        tap_code16(RCTL(KC_DOT));
    }
}

void dance_21_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[21].step = dance_step(state);
    switch (dance_state[21].step) {
        case SINGLE_TAP: register_code16(RCTL(KC_DOT)); break;
        case DOUBLE_TAP: register_code16(RCTL(RSFT(KC_DOT))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RCTL(KC_DOT)); register_code16(RCTL(KC_DOT));
    }
}

void dance_21_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[21].step) {
        case SINGLE_TAP: unregister_code16(RCTL(KC_DOT)); break;
        case DOUBLE_TAP: unregister_code16(RCTL(RSFT(KC_DOT))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RCTL(KC_DOT)); break;
    }
    dance_state[21].step = 0;
}
void on_dance_22(tap_dance_state_t *state, void *user_data);
void dance_22_finished(tap_dance_state_t *state, void *user_data);
void dance_22_reset(tap_dance_state_t *state, void *user_data);

void on_dance_22(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RGUI(KC_N));
        tap_code16(RGUI(KC_N));
        tap_code16(RGUI(KC_N));
    }
    if(state->count > 3) {
        tap_code16(RGUI(KC_N));
    }
}

void dance_22_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[22].step = dance_step(state);
    switch (dance_state[22].step) {
        case SINGLE_TAP: register_code16(RGUI(KC_N)); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_C))); break;
        case DOUBLE_TAP: register_code16(RALT(RGUI(KC_N))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RGUI(KC_N)); register_code16(RGUI(KC_N));
    }
}

void dance_22_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[22].step) {
        case SINGLE_TAP: unregister_code16(RGUI(KC_N)); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_C))); break;
        case DOUBLE_TAP: unregister_code16(RALT(RGUI(KC_N))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RGUI(KC_N)); break;
    }
    dance_state[22].step = 0;
}
void on_dance_23(tap_dance_state_t *state, void *user_data);
void dance_23_finished(tap_dance_state_t *state, void *user_data);
void dance_23_reset(tap_dance_state_t *state, void *user_data);

void on_dance_23(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RGUI(KC_K));
        tap_code16(RGUI(KC_K));
        tap_code16(RGUI(KC_K));
    }
    if(state->count > 3) {
        tap_code16(RGUI(KC_K));
    }
}

void dance_23_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[23].step = dance_step(state);
    switch (dance_state[23].step) {
        case SINGLE_TAP: register_code16(RGUI(KC_K)); break;
        case DOUBLE_TAP: register_code16(LALT(LGUI(KC_K))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RGUI(KC_K)); register_code16(RGUI(KC_K));
    }
}

void dance_23_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[23].step) {
        case SINGLE_TAP: unregister_code16(RGUI(KC_K)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LGUI(KC_K))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RGUI(KC_K)); break;
    }
    dance_state[23].step = 0;
}
void on_dance_24(tap_dance_state_t *state, void *user_data);
void dance_24_finished(tap_dance_state_t *state, void *user_data);
void dance_24_reset(tap_dance_state_t *state, void *user_data);

void on_dance_24(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RCTL(KC_RBRC));
        tap_code16(RCTL(KC_RBRC));
        tap_code16(RCTL(KC_RBRC));
    }
    if(state->count > 3) {
        tap_code16(RCTL(KC_RBRC));
    }
}

void dance_24_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[24].step = dance_step(state);
    switch (dance_state[24].step) {
        case SINGLE_TAP: register_code16(RCTL(KC_RBRC)); break;
        case DOUBLE_TAP: register_code16(RCTL(RSFT(KC_RBRC))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RCTL(KC_RBRC)); register_code16(RCTL(KC_RBRC));
    }
}

void dance_24_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[24].step) {
        case SINGLE_TAP: unregister_code16(RCTL(KC_RBRC)); break;
        case DOUBLE_TAP: unregister_code16(RCTL(RSFT(KC_RBRC))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RCTL(KC_RBRC)); break;
    }
    dance_state[24].step = 0;
}
void on_dance_25(tap_dance_state_t *state, void *user_data);
void dance_25_finished(tap_dance_state_t *state, void *user_data);
void dance_25_reset(tap_dance_state_t *state, void *user_data);

void on_dance_25(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RCTL(KC_LBRC));
        tap_code16(RCTL(KC_LBRC));
        tap_code16(RCTL(KC_LBRC));
    }
    if(state->count > 3) {
        tap_code16(RCTL(KC_LBRC));
    }
}

void dance_25_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[25].step = dance_step(state);
    switch (dance_state[25].step) {
        case SINGLE_TAP: register_code16(RCTL(KC_LBRC)); break;
        case DOUBLE_TAP: register_code16(RCTL(RSFT(KC_LBRC))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RCTL(KC_LBRC)); register_code16(RCTL(KC_LBRC));
    }
}

void dance_25_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[25].step) {
        case SINGLE_TAP: unregister_code16(RCTL(KC_LBRC)); break;
        case DOUBLE_TAP: unregister_code16(RCTL(RSFT(KC_LBRC))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RCTL(KC_LBRC)); break;
    }
    dance_state[25].step = 0;
}
void on_dance_26(tap_dance_state_t *state, void *user_data);
void dance_26_finished(tap_dance_state_t *state, void *user_data);
void dance_26_reset(tap_dance_state_t *state, void *user_data);

void on_dance_26(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RGUI(KC_N));
        tap_code16(RGUI(KC_N));
        tap_code16(RGUI(KC_N));
    }
    if(state->count > 3) {
        tap_code16(RGUI(KC_N));
    }
}

void dance_26_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[26].step = dance_step(state);
    switch (dance_state[26].step) {
        case SINGLE_TAP: register_code16(RGUI(KC_N)); break;
        case DOUBLE_TAP: register_code16(LGUI(LSFT(KC_H))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RGUI(KC_N)); register_code16(RGUI(KC_N));
    }
}

void dance_26_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[26].step) {
        case SINGLE_TAP: unregister_code16(RGUI(KC_N)); break;
        case DOUBLE_TAP: unregister_code16(LGUI(LSFT(KC_H))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RGUI(KC_N)); break;
    }
    dance_state[26].step = 0;
}
void on_dance_27(tap_dance_state_t *state, void *user_data);
void dance_27_finished(tap_dance_state_t *state, void *user_data);
void dance_27_reset(tap_dance_state_t *state, void *user_data);

void on_dance_27(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_GRAVE);
        tap_code16(KC_GRAVE);
        tap_code16(KC_GRAVE);
    }
    if(state->count > 3) {
        tap_code16(KC_GRAVE);
    }
}

void dance_27_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[27].step = dance_step(state);
    switch (dance_state[27].step) {
        case SINGLE_TAP: register_code16(KC_GRAVE); break;
        case DOUBLE_TAP: register_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_GRAVE); register_code16(KC_GRAVE);
    }
}

void dance_27_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[27].step) {
        case SINGLE_TAP: unregister_code16(KC_GRAVE); break;
        case DOUBLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_GRAVE); break;
    }
    dance_state[27].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_10, dance_10_finished, dance_10_reset),
        [DANCE_11] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_11, dance_11_finished, dance_11_reset),
        [DANCE_12] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_12, dance_12_finished, dance_12_reset),
        [DANCE_13] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_13, dance_13_finished, dance_13_reset),
        [DANCE_14] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_14, dance_14_finished, dance_14_reset),
        [DANCE_15] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_15, dance_15_finished, dance_15_reset),
        [DANCE_16] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_16, dance_16_finished, dance_16_reset),
        [DANCE_17] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_17, dance_17_finished, dance_17_reset),
        [DANCE_18] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_18, dance_18_finished, dance_18_reset),
        [DANCE_19] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_19, dance_19_finished, dance_19_reset),
        [DANCE_20] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_20, dance_20_finished, dance_20_reset),
        [DANCE_21] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_21, dance_21_finished, dance_21_reset),
        [DANCE_22] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_22, dance_22_finished, dance_22_reset),
        [DANCE_23] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_23, dance_23_finished, dance_23_reset),
        [DANCE_24] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_24, dance_24_finished, dance_24_reset),
        [DANCE_25] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_25, dance_25_finished, dance_25_reset),
        [DANCE_26] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_26, dance_26_finished, dance_26_reset),
        [DANCE_27] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_27, dance_27_finished, dance_27_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX: 
    // Mouse keys with modifiers work inconsistently across operating systems, this makes sure that modifiers are always
    // applied to the mouse key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
    if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_RSFT(SS_TAP(X_QUOTE))SS_DELAY(100)  SS_RSFT(SS_TAP(X_QUOTE))SS_DELAY(100)  SS_RSFT(SS_TAP(X_QUOTE))  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_GRAVE)SS_DELAY(100)  SS_TAP(X_GRAVE)SS_DELAY(100)  SS_TAP(X_GRAVE)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_DOT)SS_DELAY(100)  SS_TAP(X_DOT)SS_DELAY(100)  SS_TAP(X_SLASH));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_END))SS_DELAY(100)  SS_TAP(X_DELETE));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_0))SS_DELAY(100)  SS_LSFT(SS_TAP(X_SCLN))  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_HOME))SS_DELAY(100)  SS_TAP(X_BSPC));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_SPACE))SS_DELAY(100)  SS_LGUI(SS_TAP(X_2)));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_SPACE))SS_DELAY(100)  SS_LGUI(SS_TAP(X_4)));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_0)SS_DELAY(100)  SS_TAP(X_MINUS)SS_DELAY(100)  SS_TAP(X_0)SS_DELAY(100)  SS_TAP(X_MINUS)SS_DELAY(100)  SS_TAP(X_0));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_0)SS_DELAY(100)  SS_TAP(X_MINUS)SS_DELAY(100)  SS_TAP(X_0));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_N))SS_DELAY(100)  SS_TAP(X_N));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_E))SS_DELAY(100)  SS_TAP(X_E));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_E))SS_DELAY(100)  SS_TAP(X_I));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_E))SS_DELAY(100)  SS_TAP(X_O));
    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_E))SS_DELAY(100)  SS_TAP(X_U));
    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_E))SS_DELAY(100)  SS_TAP(X_A));
    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_U))SS_DELAY(100)  SS_TAP(X_U));
    }
    break;
    case ORYX_SL_TOGG:
      if (record->event.pressed) {
        wait_ms(10);
        toggle_smart_layer();
      }
      break;
    case ORYX_SL_TRIGG:
      if (record->event.pressed) {
        wait_ms(10);
        trigger_smart_layer();
      }
      break;
    case MAC_MISSION_CONTROL:
      HCS(0x29F);
    case MAC_SIRI:
      HCS(0xCF);
    case MAC_DND:
      HSS(0x9B);
    case MAC_LOCK:
      HCS(0x19E);

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_H));
        } else {
          unregister_code16(LGUI(KC_H));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_M));
        } else {
          unregister_code16(LGUI(KC_M));
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_EXLM);
        } else {
          unregister_code16(KC_EXLM);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_1));
        } else {
          unregister_code16(LALT(KC_1));
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_MINUS);
        } else {
          unregister_code16(KC_MINUS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_MINUS)));
        } else {
          unregister_code16(LALT(LSFT(KC_MINUS)));
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_Z));
        } else {
          unregister_code16(LGUI(KC_Z));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_Z));
        } else {
          unregister_code16(LCTL(KC_Z));
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(RALT(RSFT(KC_3)));
        } else {
          unregister_code16(RALT(RSFT(KC_3)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_BSLS));
        } else {
          unregister_code16(LALT(KC_BSLS));
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(RALT(RSFT(KC_4)));
        } else {
          unregister_code16(RALT(RSFT(KC_4)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_BSLS)));
        } else {
          unregister_code16(LALT(LSFT(KC_BSLS)));
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_PERC);
        } else {
          unregister_code16(KC_PERC);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_R)));
        } else {
          unregister_code16(LALT(LSFT(KC_R)));
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_QUES);
        } else {
          unregister_code16(KC_QUES);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_SLASH)));
        } else {
          unregister_code16(LALT(LSFT(KC_SLASH)));
        }  
      }  
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_DLR);
        } else {
          unregister_code16(KC_DLR);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(RSFT(KC_2)));
        } else {
          unregister_code16(RALT(RSFT(KC_2)));
        }  
      }  
      return false;
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_A));
        } else {
          unregister_code16(LGUI(KC_A));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_A));
        } else {
          unregister_code16(LCTL(KC_A));
        }  
      }  
      return false;
    case DUAL_FUNC_10:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_TAB)));
        } else {
          unregister_code16(LCTL(LSFT(KC_TAB)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_LBRC));
        } else {
          unregister_code16(LGUI(KC_LBRC));
        }  
      }  
      return false;
    case DUAL_FUNC_11:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_TAB));
        } else {
          unregister_code16(LCTL(KC_TAB));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_RBRC));
        } else {
          unregister_code16(LGUI(KC_RBRC));
        }  
      }  
      return false;
    case DUAL_FUNC_12:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_UNDS);
        } else {
          unregister_code16(KC_UNDS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_SPACE);
        } else {
          unregister_code16(KC_SPACE);
        }  
      }  
      return false;
    case DUAL_FUNC_13:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_KP_MINUS);
        } else {
          unregister_code16(KC_KP_MINUS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_MINUS));
        } else {
          unregister_code16(LALT(KC_MINUS));
        }  
      }  
      return false;
    case DUAL_FUNC_14:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_KP_SLASH);
        } else {
          unregister_code16(KC_KP_SLASH);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_1)));
        } else {
          unregister_code16(LALT(LSFT(KC_1)));
        }  
      }  
      return false;
    case DUAL_FUNC_15:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(RGUI(RCTL(KC_T)));
        } else {
          unregister_code16(RGUI(RCTL(KC_T)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(RGUI(RSFT(KC_T)));
        } else {
          unregister_code16(RGUI(RSFT(KC_T)));
        }  
      }  
      return false;
    case DUAL_FUNC_16:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_5));
        } else {
          unregister_code16(LGUI(KC_5));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_O));
        } else {
          unregister_code16(LGUI(KC_O));
        }  
      }  
      return false;
    case DUAL_FUNC_17:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_1));
        } else {
          unregister_code16(LGUI(KC_1));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_E));
        } else {
          unregister_code16(LGUI(KC_E));
        }  
      }  
      return false;
    case DUAL_FUNC_18:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_2));
        } else {
          unregister_code16(LGUI(KC_2));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_T));
        } else {
          unregister_code16(LGUI(KC_T));
        }  
      }  
      return false;
    case DUAL_FUNC_19:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_3));
        } else {
          unregister_code16(LGUI(KC_3));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_S));
        } else {
          unregister_code16(LGUI(KC_S));
        }  
      }  
      return false;
    case DUAL_FUNC_20:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_4));
        } else {
          unregister_code16(LGUI(KC_4));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_R));
        } else {
          unregister_code16(LGUI(KC_R));
        }  
      }  
      return false;
    case DUAL_FUNC_21:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_2);
        } else {
          unregister_code16(KC_2);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_6);
        } else {
          unregister_code16(KC_6);
        }  
      }  
      return false;
    case DUAL_FUNC_22:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_3);
        } else {
          unregister_code16(KC_3);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_7);
        } else {
          unregister_code16(KC_7);
        }  
      }  
      return false;
    case DUAL_FUNC_23:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_T);
        } else {
          unregister_code16(KC_T);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_U);
        } else {
          unregister_code16(KC_U);
        }  
      }  
      return false;
    case DUAL_FUNC_24:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_V);
        } else {
          unregister_code16(KC_V);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_J);
        } else {
          unregister_code16(KC_J);
        }  
      }  
      return false;
    case DRAG_SCROLL:
      if (record->event.pressed) {
        set_scrolling = true;
      } else {
        set_scrolling = false;
      }
      return false;
    case TOGGLE_SCROLL:
      if (record->event.pressed) {
        set_scrolling = !set_scrolling;
      }
      return false;
    break;
  case NAVIGATOR_TURBO:
    if (record->event.pressed) {
      navigator_turbo = true;
    } else {
      navigator_turbo = false;
    }
    return false;
  case NAVIGATOR_AIM:
    if (record->event.pressed) {
      navigator_aim = true;
    } else {
      navigator_aim = false;
    }
    return false;
  case NAVIGATOR_INC_CPI:
    if (record->event.pressed) {
        pointing_device_set_cpi(1);
    }
    return false;
  case NAVIGATOR_DEC_CPI:
    if (record->event.pressed) {
        pointing_device_set_cpi(0);
    }
    return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_129_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(129,255,255);
      }
      return false;
    case HSV_99_169_190:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(99,169,190);
      }
      return false;
    case HSV_169_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(169,255,255);
      }
      return false;
  }
  return true;
}



// Custom QMK configs

// OSM Armed Status Indicator
void oneshot_mods_changed_user(uint8_t mods) {
  STATUS_LED_4((mods & MOD_MASK_SHIFT) != 0);
}

// Caps WORD Status Indicator
void caps_word_set_user(bool active) {
    if (active) {
        STATUS_LED_4(true);
    } else {
        STATUS_LED_4(false);
    }
}

// Caps Word Customization
#ifdef CAPS_WORD_ENABLE
bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
        case KC_MINS:
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case TD(DANCE_3):
        case TD(DANCE_4):
        case KC_UNDS:
        case KC_AMPR:
        case KC_SLSH:
        case KC_COLN:
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
}
#endif // CAPS_WORD_ENABLE
