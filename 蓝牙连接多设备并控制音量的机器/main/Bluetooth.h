#ifndef Bluetooth_h
#define Bluetooth_h

#include <Arduino.h>

class Bluetooth {
public:
  Bluetooth(uint8_t txPin, uint8_t rxPin, uint8_t statePin, uint8_t vccPin, uint8_t pwrCtrlPin);
  void begin();
  void update();

private:
  uint8_t bluetoothModuleTx;
  uint8_t bluetoothModuleRx;
  uint8_t bluetoothModuleState;
  uint8_t bluetoothModuleVcc;
  uint8_t bluetoothModulePwrCtrl;
};

#endif