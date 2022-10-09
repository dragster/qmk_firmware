#include QMK_KEYBOARD_H
#include "keymap_jp.h"

enum layers{
    BASE, 
    _RAISE0, 
    _RAISE1, 
    _RAISE2, 
    _RAISE3, 
};

#define RAISE0 MO(_RAISE0)
#define RAISE1 MO(_RAISE1)
#define RAISE2 MO(_RAISE2)
#define RAISE3 MO(_RAISE3)

/* modify this keymap to customize. */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT(
    KC_1,    KC_2,    KC_3,    XXXXXXX, 
    KC_4,    KC_5,    KC_6,    XXXXXXX, 
    KC_7,    KC_8,    KC_9,    XXXXXXX, 
    XXXXXXX, XXXXXXX, XXXXXXX, KC_0
  ), 
  [_RAISE0] = LAYOUT(
    _______, _______, _______, XXXXXXX, 
    _______, _______, _______, XXXXXXX, 
    _______, _______, _______, XXXXXXX, 
    XXXXXXX, XXXXXXX, XXXXXXX, _______
  ), 
  [_RAISE1] = LAYOUT(
    _______, _______, _______, XXXXXXX, 
    _______, _______, _______, XXXXXXX, 
    _______, _______, _______, XXXXXXX, 
    XXXXXXX, XXXXXXX, XXXXXXX, _______
  ), 
  [_RAISE2] = LAYOUT(
    _______, _______, _______, XXXXXXX, 
    _______, _______, _______, XXXXXXX, 
    _______, _______, _______, XXXXXXX, 
    XXXXXXX, XXXXXXX, XXXXXXX, _______
  ), 
  [_RAISE3] = LAYOUT(
    _______, _______, _______, XXXXXXX, 
    _______, _______, _______, XXXXXXX, 
    _______, _______, _______, XXXXXXX, 
    XXXXXXX, XXXXXXX, XXXXXXX, _______
  ), 
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

  }
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* Encoder */
        if (clockwise) {
            tap_code(KC_J); /* edit */
        } else {
            tap_code(KC_K); /* edit */
        }
    }
    return true;
}
