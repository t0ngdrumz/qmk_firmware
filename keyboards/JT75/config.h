#pragma once

#define MATRIX_ROWS 6
#define MATRIX_COLS 9

#define MATRIX_ROW_PINS { GP9, GP10, GP11, GP12, GP13, GP14 }
#define MATRIX_COL_PINS { GP8, GP7, GP6, GP5, GP4, GP3, GP2, GP1, GP0 }

#define DIODE_DIRECTION COL2ROW

// Split settings
#define SPLIT_KEYBOARD
#define MASTER_LEFT

// TRRS serial link
#define USE_SERIAL
#define SOFT_SERIAL_PIN GP15
