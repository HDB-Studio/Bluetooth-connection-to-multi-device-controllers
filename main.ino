#include "Bluetooth.h"
#include "Slider.h"
#include "Button.h"
#include "OLED.h"

Bluetooth bluetooth(17, 16, 2, 18, 19); // 使用带参数的构造函数初始化
OLED oled(0x3C); // 0x3C 是 OLED 的默认 I2C 地址
Slider slider[5];
Button button;

void setup() {
  Serial.begin(115200);
  bluetooth.begin();
  oled.init();
  for (int i = 0; i < 5; i++) {
    slider[i].init(i);
  }
  button.init();
}

void loop() {
  bluetooth.update();
  for (int i = 0; i < 5; i++) {
    slider[i].update();
  }
  button.update();
  int channelVolumes[4];
  int masterVolume = 50; // 假设总音量为50
  for (int i = 0; i < 4; i++) {
    channelVolumes[i] = slider[i].getVolume();
  }
  oled.displayVolume(channelVolumes, masterVolume);
}