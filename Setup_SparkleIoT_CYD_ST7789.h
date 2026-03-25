// Custom TFT_eSPI Setup for ESP32-2432S028 (SparkleIoT XH-32S Variant)
// Save this in your TFT_eSPI/User_Setups/ folder.

#define USER_SETUP_INFO "SparkleIoT_CYD_ST7789"
#define ST7789_DRIVER
#define TFT_WIDTH  240
#define TFT_HEIGHT 320
#define TFT_RGB_ORDER TFT_BGR // Fixes Cyan/Yellow color swapping

// Core TFT Pins (HSPI)
#define TFT_MISO 12
#define TFT_MOSI 13
#define TFT_SCLK 14  // Note: Standard V2/V3 boards use 18, this board uses 14
#define TFT_CS   15
#define TFT_DC    2
#define TFT_RST  -1  // Reset handled by ESP32 EN pin
#define TFT_BL   21  // Backlight pin
#define TFT_BACKLIGHT_ON HIGH

// Touchscreen Pins (XPT2046)
#define TOUCH_CS 33
// SPI Touch wiring (Shared or separate, refer to diagram)
// TP CLK:  25
// TP DIN:  32
// TP OUT:  39
// TP IRQ:  36

// Standard Fonts
#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT24
#define LOAD_FONT48
#define LOAD_GFXFF
#define SMOOTH_FONT

// SPI Frequencies
#define SPI_FREQUENCY  55000000
#define SPI_READ_FREQUENCY  20000000
#define SPI_TOUCH_FREQUENCY  2500000
