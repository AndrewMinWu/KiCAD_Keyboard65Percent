#pragma once

#include "config_common.h"

#define VENDOR_ID       0x1234
#define PRODUCT_ID      0x5678
#define DEVICE_VER      0x0001
#define MANUFACTURER    Custom
#define PRODUCT         65 Keyboard

#define MATRIX_ROWS 5
#define MATRIX_COLS 16

#define MATRIX_ROW_PINS { D0, D1, D2, D3, D5 }
#define MATRIX_COL_PINS { F0, F1, F4, F5, F6, F7, C6, C7, B5, B4, B3, B2, B1, B0, E6, D7 }

#define DIODE_DIRECTION COL2ROW