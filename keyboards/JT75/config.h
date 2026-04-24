#pragma once

#define EE_HANDS

// Split keyboard
#define SPLIT_KEYBOARD

// TRRS single-wire serial on GP15
#define SOFT_SERIAL_PIN GP15

// Matrix size (6 rows per half)
#define MATRIX_ROWS 12
#define MATRIX_COLS 9

#define DIODE_DIRECTION COL2ROW

// Helps RP2040 split stability
#define SPLIT_USB_DETECT
