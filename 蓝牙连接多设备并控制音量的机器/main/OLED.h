#ifndef OLED_h
#define OLED_h

#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>

class OLED {
public:
  OLED(uint8_t i2cAddr = -1);
  void init();
  void displayVolume(int channelVolumes[4], int masterVolume);

private:
  Adafruit_SSD1306 display;
};

#endif