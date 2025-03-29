#ifndef Button_h
#define Button_h

#include <Arduino.h>

class Button {
public:
  void init();
  void update();

private:
  uint8_t upPin = 39;
  uint8_t downPin = 38;
  uint8_t leftPin = 37;
  uint8_t rightPin = 36;
  uint8_t selectPin = 35;
};

#endif