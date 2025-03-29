#ifndef Slider_h
#define Slider_h

#include <Arduino.h>

class Slider {
public:
  void init(int channel);
  void update();
  int getVolume();

private:
  int channel;
  int sliderPin;
  int volume = 0;
};

#endif