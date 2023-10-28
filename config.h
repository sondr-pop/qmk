#pragma once

#define MASTER_RIGHT
#define SPLIT_WPM_ENABLE
#define SPLIT_OLED_ENABLE

#ifdef OLED_ENABLE
  #define OLED_DISPLAY_128X32
  #define OLED_TIMEOUT 300000
#endif