#include "OLED.h"

OLED::OLED(uint8_t i2cAddr) : display(128, 64, &Wire, i2cAddr) {}

void OLED::init() {
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address 0x3C for 128x64
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,0);
  display.display();
}

void OLED::displayVolume(int channelVolumes[4], int masterVolume) {
  display.clearDisplay();
  display.setCursor(0,0);
  display.print("Channel 1: ");
  display.print(channelVolumes[0]);
  display.print("\nChannel 2: ");
  display.print(channelVolumes[1]);
  display.print("\nChannel 3: ");
  display.print(channelVolumes[2]);
  display.print("\nChannel 4: ");
  display.print(channelVolumes[3]);
  display.print("\nMaster Volume: ");
  display.print(masterVolume);
  display.display();
}