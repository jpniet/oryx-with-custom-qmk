#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ORYX_SL_TOGG,
  ORYX_SL_TRIGG,
  HSV_129_255_255,
  HSV_188_255_255,
  HSV_169_255_255,
  HSV_0_255_255,
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
};

#define DUAL_FUNC_0 LT(1, KC_F21)
#define DUAL_FUNC_1 LT(2, KC_G)
#define DUAL_FUNC_2 LT(3, KC_T)
#define DUAL_FUNC_3 LT(2, KC_V)
#define DUAL_FUNC_4 LT(8, KC_F8)
#define DUAL_FUNC_5 LT(11, KC_F11)
#define DUAL_FUNC_6 LT(3, KC_B)
#define DUAL_FUNC_7 LT(10, KC_F22)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    TD(DANCE_0),    KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_DELETE,      
    TD(DANCE_1),    KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCLN,        KC_BSPC,        
    OSM(MOD_LSFT),  MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_R),MT(MOD_LSFT, KC_S),MT(MOD_LCTL, KC_T),MEH_T(KC_G),                                    ALL_T(KC_M),    MT(MOD_RCTL, KC_N),MT(MOD_RSFT, KC_E),MT(MOD_RALT, KC_I),MT(MOD_RGUI, KC_O),TD(DANCE_3),    
    TD(DANCE_2),    KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       ORYX_SL_TRIGG,  
                                                    KC_TAB,         OSL(1),                                         TT(2),          KC_SPACE
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RALT(KC_DELETE),
    ST_MACRO_0,     KC_DQUO,        KC_LABK,        KC_RABK,        KC_QUOTE,       KC_GRAVE,                                       KC_AMPR,        ST_MACRO_3,     KC_LBRC,        KC_RBRC,        KC_PERC,        RALT(KC_BSPC),  
    CW_TOGG,        DUAL_FUNC_0,    KC_MINUS,       KC_PLUS,        KC_EQUAL,       KC_HASH,                                        KC_PIPE,        KC_COLN,        KC_LPRN,        KC_RPRN,        DUAL_FUNC_1,    RSFT(KC_ENTER), 
    KC_PC_UNDO,     KC_CIRC,        KC_SLASH,       KC_ASTR,        KC_BSLS,        ST_MACRO_1,                                     KC_TILD,        DUAL_FUNC_2,    KC_LCBR,        KC_RCBR,        KC_AT,          LCTL(KC_A),     
                                                    ST_MACRO_2,     LALT(LGUI(LCTL(LSFT(KC_TAB)))),                                QK_LLCK,        KC_UNDS
  ),
  [2] = LAYOUT_voyager(
    LGUI(KC_N),     KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         LALT(LGUI(LCTL(LSFT(KC_SPACE)))),                                TD(DANCE_5),    KC_UNDS,        KC_COLN,        KC_LPRN,        KC_RPRN,        TD(DANCE_6),    
    KC_MY_COMPUTER, RGUI(RCTL(KC_LEFT)),RGUI(KC_TAB),   RGUI(KC_D),     RGUI(RCTL(KC_RIGHT)),LALT(KC_SPACE),                                 KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_MINUS,    KC_KP_SLASH,    TD(DANCE_7),    
    MEH_T(KC_CAPS), KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       LGUI(LCTL(KC_SPACE)),                                ALL_T(KC_KP_4), MT(MOD_RCTL, KC_KP_5),MT(MOD_RSFT, KC_KP_6),MT(MOD_RALT, KC_KP_PLUS),MT(MOD_RGUI, KC_KP_ASTERISK),KC_TRANSPARENT, 
    TD(DANCE_4),    LCTL(LSFT(KC_TAB)),RGUI(RSFT(KC_DOWN)),RGUI(RSFT(KC_UP)),LCTL(KC_TAB),   LCTL(KC_W),                                     KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_DOT,      KC_COMMA,       KC_KP_EQUAL,    
                                                    KC_TRANSPARENT, TG(4),                                          KC_TRANSPARENT, DUAL_FUNC_3
  ),
  [3] = LAYOUT_voyager(
    RGB_TOG,        TOGGLE_LAYER_COLOR,RGB_MODE_FORWARD,RGB_SLD,        RGB_VAD,        RGB_VAI,                                        KC_F20,         KC_F13,         KC_F14,         KC_F15,         KC_F16,         TG(5),          
    QK_BOOT,        KC_WWW_REFRESH, KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,RGB_SAI,                                        KC_F19,         KC_F9,          KC_F10,         KC_F11,         KC_F12,         TG(7),          
    KC_SYSTEM_SLEEP,MT(MOD_LGUI, KC_MEDIA_PREV_TRACK),MT(MOD_LALT, KC_MEDIA_NEXT_TRACK),MT(MOD_LSFT, KC_MEDIA_STOP),MT(MOD_LCTL, KC_MEDIA_PLAY_PAUSE),RGB_SAD,                                        KC_F17,         KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_TRANSPARENT, 
    HSV_129_255_255,HSV_188_255_255,HSV_169_255_255,HSV_0_255_255,  RGB_HUD,        RGB_HUI,                                        KC_F18,         KC_F5,          KC_F6,          KC_F7,          KC_F8,          TG(6),          
                                                    OSM(MOD_MEH),   ORYX_SL_TOGG,                                   TO(0),          OSM(MOD_HYPR)
  ),
  [4] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_WH_RIGHT, KC_NO,                                          KC_NO,          KC_MS_BTN7,     KC_MS_BTN8,     KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_NO,                                          KC_NO,          KC_MS_BTN1,     KC_MS_BTN2,     KC_MS_BTN3,     KC_MS_BTN6,     KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_MS_ACCEL1,   KC_MS_ACCEL0,   KC_MS_ACCEL2,   KC_NO,          KC_NO,          
                                                    KC_MS_BTN4,     KC_TRANSPARENT,                                 TO(0),          KC_MS_BTN5
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_UP,          LCTL(LSFT(KC_TAB)),LCTL(KC_PAGE_UP),LCTL(KC_PGDN),  LCTL(KC_TAB),   KC_NO,                                          KC_NO,          RCTL(RSFT(KC_Y)),RCTL(KC_U),     RALT(RCTL(KC_DOT)),RCTL(RSFT(KC_0)),RALT(KC_LEFT),  
    KC_DOWN,        LCTL(KC_4),     LCTL(LSFT(KC_M)),LCTL(LSFT(KC_2)),LCTL(LSFT(KC_KP_1)),LCTL(KC_G),                                     LCTL(KC_F),     LCTL(LSFT(KC_A)),LCTL(LSFT(KC_T)),RCTL(RSFT(KC_L)),RCTL(KC_K),     RALT(KC_RIGHT), 
    KC_NO,          LALT(LSFT(KC_UP)),LSFT(KC_F6),    KC_F6,          LALT(LSFT(KC_DOWN)),KC_NO,                                          KC_NO,          RCTL(RSFT(KC_D)),RCTL(KC_COMMA), RCTL(RSFT(KC_I)),RCTL(RSFT(KC_E)),KC_TRANSPARENT, 
                                                    RCTL(RSFT(KC_SPACE)),RCTL(RSFT(KC_H)),                                TO(0),          RCTL(KC_N)
  ),
  [6] = LAYOUT_voyager(
    TD(DANCE_8),    KC_1,           DUAL_FUNC_4,    DUAL_FUNC_5,    KC_4,           KC_5,                                           KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT, 
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           DUAL_FUNC_6,                                    KC_Y,           KC_TRANSPARENT, KC_UP,          KC_O,           KC_P,           KC_TRANSPARENT, 
    KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_SCLN,        KC_TRANSPARENT, 
    KC_LEFT_ALT,    KC_Z,           KC_X,           KC_C,           DUAL_FUNC_7,    KC_B,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_SPACE,       KC_LEFT_CTRL,                                   KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_voyager(
    KC_NO,          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_NO,          KC_1,           KC_2,           KC_3,           KC_4,           KC_PLUS,                                        KC_HASH,        KC_5,           KC_6,           KC_7,           KC_8,           KC_TRANSPARENT, 
    KC_NO,          KC_A,           KC_B,           KC_C,           KC_D,           ST_MACRO_4,                                     ST_MACRO_5,     KC_E,           KC_F,           KC_G,           KC_H,           KC_TRANSPARENT, 
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

const uint16_t PROGMEM combo0[] = { OSL(1), TT(2), COMBO_END};
const uint16_t PROGMEM combo1[] = { OSL(1), MT(MOD_RCTL, KC_N), COMBO_END};
const uint16_t PROGMEM combo2[] = { OSL(1), MT(MOD_RSFT, KC_E), COMBO_END};
const uint16_t PROGMEM combo3[] = { OSL(1), MT(MOD_RALT, KC_I), COMBO_END};
const uint16_t PROGMEM combo4[] = { OSL(1), MT(MOD_RGUI, KC_O), COMBO_END};
const uint16_t PROGMEM combo5[] = { OSL(1), KC_U, COMBO_END};
const uint16_t PROGMEM combo6[] = { OSL(1), MT(MOD_LGUI, KC_A), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TO(3)),
    COMBO(combo1, ST_MACRO_6),
    COMBO(combo2, ST_MACRO_7),
    COMBO(combo3, ST_MACRO_8),
    COMBO(combo4, ST_MACRO_9),
    COMBO(combo5, ST_MACRO_10),
    COMBO(combo6, ST_MACRO_11),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case TD(DANCE_2):
            return TAPPING_TERM -50;
        case KC_BSPC:
            return TAPPING_TERM -50;
        case TD(DANCE_3):
            return TAPPING_TERM -150;
        case DUAL_FUNC_3:
            return TAPPING_TERM -200;
        default:
            return TAPPING_TERM;
    }
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
    [1] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {41,255,255}, {41,255,255}, {215,255,255}, {215,255,255}, {41,255,255}, {41,255,255}, {131,255,255}, {215,255,255}, {86,255,255}, {86,255,255}, {215,255,255}, {41,255,255}, {31,218,204}, {41,255,255}, {86,255,255}, {86,255,255}, {41,255,255}, {41,255,255}, {118,227,195}, {118,227,195}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {131,255,255}, {151,255,255}, {41,255,255}, {21,255,255}, {21,255,255}, {41,255,255}, {131,255,255}, {151,255,255}, {41,255,255}, {21,255,255}, {21,255,255}, {41,255,255}, {131,255,255}, {151,255,255}, {41,255,255}, {21,255,255}, {21,255,255}, {41,255,255}, {14,255,255}, {135,253,128}, {131,255,255} },

    [2] = { {31,218,204}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {131,255,255}, {31,218,204}, {31,218,204}, {31,218,204}, {31,218,204}, {31,218,204}, {0,0,255}, {131,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {0,0,0}, {31,218,204}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {21,255,255}, {0,255,255}, {43,255,255}, {215,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {0,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {86,255,255}, {86,255,255}, {0,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {86,255,255}, {86,255,255}, {0,0,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,255}, {0,0,255}, {215,255,255}, {135,253,128}, {131,255,255} },

    [3] = { {31,218,204}, {31,218,204}, {31,218,204}, {31,218,204}, {31,218,204}, {31,218,204}, {0,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {31,218,204}, {195,218,204}, {0,0,238}, {0,0,238}, {0,0,238}, {0,0,238}, {31,218,204}, {129,255,255}, {188,255,255}, {169,255,255}, {0,255,255}, {31,218,204}, {31,218,204}, {0,0,255}, {195,218,204}, {223,255,255}, {129,255,255}, {134,255,255}, {143,255,255}, {155,255,255}, {215,255,255}, {204,255,255}, {83,255,255}, {92,255,255}, {103,255,255}, {115,255,255}, {188,255,255}, {177,255,255}, {0,255,255}, {13,255,255}, {17,255,255}, {22,255,255}, {172,255,255}, {195,255,255}, {30,255,255}, {49,255,255}, {57,255,255}, {71,255,255}, {131,255,255}, {135,253,128}, {0,0,255} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {39,218,204}, {39,218,204}, {39,218,204}, {39,218,204}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {39,218,204}, {31,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {39,218,204}, {39,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,218,204}, {31,218,204}, {31,218,204}, {39,218,204}, {0,0,0}, {0,0,0}, {86,255,255}, {172,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {135,253,128}, {39,218,204} },

    [5] = { {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {43,255,255}, {43,255,255}, {169,255,255}, {169,255,255}, {0,0,0}, {0,0,255}, {25,255,255}, {25,255,255}, {25,255,255}, {25,255,255}, {0,0,255}, {0,0,0}, {43,255,255}, {43,255,255}, {169,255,255}, {169,255,255}, {0,0,0}, {0,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {195,218,204}, {195,218,204}, {195,218,204}, {195,218,204}, {0,0,255}, {0,0,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {0,0,255}, {0,0,0}, {195,218,204}, {195,218,204}, {195,218,204}, {195,218,204}, {0,0,0}, {135,253,128}, {215,255,255} },

    [6] = { {0,0,255}, {40,255,255}, {40,255,255}, {40,255,255}, {21,255,255}, {40,255,255}, {0,0,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {131,255,255}, {0,0,255}, {21,255,255}, {86,255,255}, {21,255,255}, {21,255,255}, {131,255,255}, {0,0,255}, {195,218,204}, {21,255,255}, {0,0,238}, {131,255,255}, {86,255,255}, {169,255,255}, {0,0,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {0,0,0}, {169,255,255}, {0,0,255}, {169,255,255}, {0,0,255}, {0,0,255}, {131,255,255}, {0,0,255}, {169,255,255}, {169,255,255}, {169,255,255}, {131,255,255}, {195,218,204}, {0,0,255}, {86,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {135,253,128}, {0,0,0}, {0,0,0} },

    [7] = { {0,0,0}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {21,255,255}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {215,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {21,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,255}, {215,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,255}, {21,255,255}, {21,255,255}, {0,255,255}, {0,0,255}, {0,0,255}, {21,255,255}, {135,253,128}, {0,0,255} },

};

void oneshot_mods_changed_user(uint8_t mods) {
  STATUS_LED_4((mods & MOD_MASK_SHIFT) != 0);
}

void caps_word_set_user(bool active) {
    if (active) {
        STATUS_LED_4(true);
    } else {
        STATUS_LED_4(false);
    }
}

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
        case KC_UNDS:
        case KC_AMPR:
        case KC_SLSH:
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
}

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
      case 1:
        set_layer_color(1);
        break;
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

  return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
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
      SEND_STRING(SS_LSFT(SS_TAP(X_0))SS_DELAY(100)  SS_LSFT(SS_TAP(X_SCLN))  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_0)SS_DELAY(100)  SS_TAP(X_MINUS)SS_DELAY(100)  SS_TAP(X_0)SS_DELAY(100)  SS_TAP(X_MINUS)SS_DELAY(100)  SS_TAP(X_0));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_0)SS_DELAY(100)  SS_TAP(X_MINUS)SS_DELAY(100)  SS_TAP(X_0));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_N))SS_DELAY(100)  SS_TAP(X_N));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_E))SS_DELAY(100)  SS_TAP(X_E));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_E))SS_DELAY(100)  SS_TAP(X_I));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_E))SS_DELAY(100)  SS_TAP(X_O));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_E))SS_DELAY(100)  SS_TAP(X_U));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_E))SS_DELAY(100)  SS_TAP(X_A));
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

    case DUAL_FUNC_0:
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
    case DUAL_FUNC_1:
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
    case DUAL_FUNC_2:
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
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_KP_0);
        } else {
          unregister_code16(KC_KP_0);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_SPACE);
        } else {
          unregister_code16(KC_SPACE);
        }  
      }  
      return false;
    case DUAL_FUNC_4:
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
    case DUAL_FUNC_5:
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
    case DUAL_FUNC_6:
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
    case DUAL_FUNC_7:
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
    case HSV_188_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(188,255,255);
      }
      return false;
    case HSV_169_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(169,255,255);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
  }
  return true;
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

static tap dance_state[9];

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
        case DOUBLE_TAP: register_code16(LCTL(KC_Q)); break;
        case DOUBLE_HOLD: register_code16(LCTL(LSFT(KC_ESCAPE))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ESCAPE); register_code16(KC_ESCAPE);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
        case SINGLE_HOLD: unregister_code16(KC_SYSTEM_POWER); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_Q)); break;
        case DOUBLE_HOLD: unregister_code16(LCTL(LSFT(KC_ESCAPE))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(LSFT(KC_SPACE))));
        tap_code16(LALT(LCTL(LSFT(KC_SPACE))));
        tap_code16(LALT(LCTL(LSFT(KC_SPACE))));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(LSFT(KC_SPACE))));
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(LSFT(KC_SPACE)))); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_SHIFT); break;
        case DOUBLE_TAP: register_code16(RALT(RCTL(RSFT(KC_TAB)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(LSFT(KC_SPACE)))); register_code16(LALT(LCTL(LSFT(KC_SPACE))));
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_SPACE)))); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_SHIFT); break;
        case DOUBLE_TAP: unregister_code16(RALT(RCTL(RSFT(KC_TAB)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(LSFT(KC_SPACE)))); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_C));
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_C)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_X)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_V)); break;
        case DOUBLE_HOLD: register_code16(LCTL(LSFT(KC_V))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_C)); register_code16(LCTL(KC_C));
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_C)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_X)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_V)); break;
        case DOUBLE_HOLD: unregister_code16(LCTL(LSFT(KC_V))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_C)); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ENTER);
        tap_code16(KC_ENTER);
        tap_code16(KC_ENTER);
    }
    if(state->count > 3) {
        tap_code16(KC_ENTER);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_ENTER); break;
        case SINGLE_HOLD: register_code16(RCTL(KC_ENTER)); break;
        case DOUBLE_TAP: register_code16(KC_ENTER); register_code16(KC_ENTER); break;
        case DOUBLE_HOLD: register_code16(LALT(KC_ENTER)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ENTER); register_code16(KC_ENTER);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_ENTER); break;
        case SINGLE_HOLD: unregister_code16(RCTL(KC_ENTER)); break;
        case DOUBLE_TAP: unregister_code16(KC_ENTER); break;
        case DOUBLE_HOLD: unregister_code16(LALT(KC_ENTER)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ENTER); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PSCR);
        tap_code16(KC_PSCR);
        tap_code16(KC_PSCR);
    }
    if(state->count > 3) {
        tap_code16(KC_PSCR);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_PSCR); break;
        case SINGLE_HOLD: register_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: register_code16(LALT(KC_PSCR)); break;
        case DOUBLE_HOLD: register_code16(LGUI(LSFT(KC_S))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PSCR); register_code16(KC_PSCR);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_PSCR); break;
        case SINGLE_HOLD: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_PSCR)); break;
        case DOUBLE_HOLD: unregister_code16(LGUI(LSFT(KC_S))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PSCR); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_K));
        tap_code16(LSFT(KC_K));
        tap_code16(LSFT(KC_K));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_K));
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_K)); break;
        case SINGLE_HOLD: register_code16(KC_DLR); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_M)); break;
        case DOUBLE_HOLD: register_code16(LALT(LSFT(KC_2))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_K)); register_code16(LSFT(KC_K));
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_K)); break;
        case SINGLE_HOLD: unregister_code16(KC_DLR); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_M)); break;
        case DOUBLE_HOLD: unregister_code16(LALT(LSFT(KC_2))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_K)); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DELETE);
        tap_code16(KC_DELETE);
        tap_code16(KC_DELETE);
    }
    if(state->count > 3) {
        tap_code16(KC_DELETE);
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(KC_DELETE); break;
        case DOUBLE_TAP: register_code16(LALT(KC_DELETE)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DELETE); register_code16(KC_DELETE);
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(KC_DELETE); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_DELETE)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DELETE); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
    }
    if(state->count > 3) {
        tap_code16(KC_BSPC);
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(KC_BSPC); break;
        case DOUBLE_TAP: register_code16(LALT(KC_BSPC)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_BSPC); register_code16(KC_BSPC);
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(KC_BSPC); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_BSPC)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_BSPC); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(tap_dance_state_t *state, void *user_data);
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void on_dance_8(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_GRAVE);
        tap_code16(KC_GRAVE);
        tap_code16(KC_GRAVE);
    }
    if(state->count > 3) {
        tap_code16(KC_GRAVE);
    }
}

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(KC_GRAVE); break;
        case DOUBLE_TAP: register_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_GRAVE); register_code16(KC_GRAVE);
    }
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(KC_GRAVE); break;
        case DOUBLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_GRAVE); break;
    }
    dance_state[8].step = 0;
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
};
