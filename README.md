# ESP32-2432S028 "CYD" - SparkleIoT XH-32S Variant

This repository contains configuration files and hardware notes for a specific, less-documented variant of the Cheap Yellow Display (CYD). 

### ⚠️ Hardware Quirks
Unlike the standard dual-USB CYD boards that use the ILI9341 driver and route the display clock to GPIO 18, this specific board uses an **ST7789** display controller and routes the display clock to **GPIO 14**.

If your screen boots to a white screen, shows inverted colors (cyan instead of yellow), or leaves a block of static at the bottom of the screen, you likely have this board variant.

**Crucial Code Note:** Even with the correct ST7789 driver defined, you may need to explicitly disable color inversion in your main sketch's `setup()` loop:
`tft.invertDisplay(false);`

### Verified Pinout Reference

**Display (ST7789 on HSPI)**
* `TFT_MISO` = 12
* `TFT_MOSI` = 13
* `TFT_SCLK` = 14 
* `TFT_CS` = 15
* `TFT_DC` = 2
* `TFT_BL` = 21 (Backlight)

**Touchscreen (XPT2046)**
* `TP_CLK` = 25
* `TP_CS` = 33
* `TP_DIN` = 32
* `TP_OUT` = 39
* `TP_IRQ` = 36

**SD Card (VSPI)**
* `SD_CS` = 5
* `SD_MOSI` = 23
* `SD_SCLK` = 18
* `SD_MISO` = 19

**Peripherals**
* **RGB LED:** Red = 4, Green = 16, Blue = 17 (Note: These are usually active-low)
* **Light Sensor (LDR):** 34
* **Audio Out:** 26
