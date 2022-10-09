
#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFFFE
#define PRODUCT_ID      0x0007
#define DEVICE_VER      0x0001
#define MANUFACTURER    a bit keys
#define PRODUCT         mpre cp
#define DESCRIPTION     hid keyboard

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 4

#define MATRIX_ROW_PINS       { B0, B1, B2, B3 }
#define MATRIX_COL_PINS       { B5, B6, C6, C7 }
#define UNUSED_PINS

/* Rotary Encorder Setting */
#define ENCODERS_PAD_A { F6 }
#define ENCODERS_PAD_B { F7 }
//#define ENCODER_RESOLUTIONS { 4 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

