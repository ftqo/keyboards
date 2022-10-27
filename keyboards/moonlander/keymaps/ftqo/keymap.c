#include QMK_KEYBOARD_H
#include "version.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    TT(4),          KC_QUOTE,       KC_COMMA,       KC_DOT,         KC_P,           KC_Y,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F,           KC_G,           KC_C,           KC_R,           KC_L,           KC_ESCAPE,      
    KC_TAB,         KC_A,           KC_O,           KC_E,           KC_U,           KC_I,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_D,           KC_H,           KC_T,           KC_N,           KC_S,           KC_SLASH,       
    KC_LSHIFT,      KC_SCOLON,      KC_Q,           KC_J,           KC_K,           KC_X,                                           KC_B,           KC_M,           KC_W,           KC_V,           KC_Z,           KC_RSHIFT,      
    KC_LCTRL,       KC_CAPSLOCK,    KC_TRANSPARENT, KC_LGUI,        KC_LALT,        TG(1),                                                                                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       
    KC_SPACE,       KC_BSPACE,      KC_TRANSPARENT,                 MO(3),          MO(2),          KC_ENTER
  ),
  [1] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, 
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,      
    KC_CAPSLOCK,    KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,       
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSHIFT,      
    KC_LCTRL,       TT(4),          KC_TRANSPARENT, KC_LGUI,        KC_LALT,        KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       
    KC_SPACE,       KC_BSPACE,      KC_TRANSPARENT,                 MO(3),          MO(2),          KC_ENTER
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,        KC_TILD,        
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSLASH,      
    KC_TRANSPARENT, KC_COLN,        KC_PLUS,        KC_MINUS,       KC_EQUAL,       KC_GRAVE,                                       KC_UNDS,        KC_LCBR,        KC_RCBR,        KC_LBRACKET,    KC_RBRACKET,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F11,         KC_F12,         KC_F13,         KC_F14,         KC_F15,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F16,         KC_F17,         KC_F18,         KC_F19,         KC_F20,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_AUDIO_VOL_UP,RGB_SAD,        KC_TRANSPARENT,                                 KC_TRANSPARENT, RGB_SAI,        KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_MS_BTN3,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,RGB_VAD,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, RGB_VAI,        KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_UP,    KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_MS_BTN4,     KC_MS_BTN5,     KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_RIGHT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 RGB_MOD,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [1] = { {0,218,204}, {34,218,204}, {101,218,204}, {134,218,204}, {174,218,204}, {0,218,204}, {34,218,204}, {101,218,204}, {134,218,204}, {174,218,204}, {0,218,204}, {34,218,204}, {101,218,204}, {134,218,204}, {174,218,204}, {0,218,204}, {34,218,204}, {101,218,204}, {134,218,204}, {174,218,204}, {0,218,204}, {34,218,204}, {101,218,204}, {134,218,204}, {174,218,204}, {0,218,204}, {34,218,204}, {101,218,204}, {134,218,204}, {0,218,204}, {34,218,204}, {101,218,204}, {213,218,204}, {213,218,204}, {213,218,204}, {174,218,204}, {0,218,204}, {34,218,204}, {101,218,204}, {134,218,204}, {174,218,204}, {0,218,204}, {34,218,204}, {101,218,204}, {134,218,204}, {174,218,204}, {0,218,204}, {34,218,204}, {101,218,204}, {134,218,204}, {174,218,204}, {0,218,204}, {34,218,204}, {101,218,204}, {134,218,204}, {174,218,204}, {0,218,204}, {34,218,204}, {101,218,204}, {134,218,204}, {174,218,204}, {0,218,204}, {34,218,204}, {101,218,204}, {134,218,204}, {0,218,204}, {34,218,204}, {101,218,204}, {213,218,204}, {213,218,204}, {213,218,204}, {174,218,204} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 1:
      set_layer_color(1);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}


