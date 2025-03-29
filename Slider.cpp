#include "Slider.h"

void Slider::init(int channel) {
  this->channel = channel;
  sliderPin = channel + 34; // 假设推子连接在 GPIO 34 到 GPIO 38
  pinMode(sliderPin, INPUT);
}

void Slider::update() {
  volume = analogRead(sliderPin);
  volume = map(volume, 0, 4095, 0, 100); // 将模拟值映射到 0-100
}

int Slider::getVolume() {
  return volume;
}