#include "Bluetooth.h"

Bluetooth::Bluetooth(uint8_t txPin, uint8_t rxPin, uint8_t statePin, uint8_t vccPin, uint8_t pwrCtrlPin)
  : bluetoothModuleTx(txPin), bluetoothModuleRx(rxPin),
    bluetoothModuleState(statePin), bluetoothModuleVcc(vccPin), bluetoothModulePwrCtrl(pwrCtrlPin) {}

void Bluetooth::begin() {
  pinMode(bluetoothModuleTx, OUTPUT);
  pinMode(bluetoothModuleRx, INPUT);
  pinMode(bluetoothModuleState, INPUT);
  pinMode(bluetoothModuleVcc, OUTPUT);
  pinMode(bluetoothModulePwrCtrl, OUTPUT);

  digitalWrite(bluetoothModuleVcc, HIGH);
  digitalWrite(bluetoothModulePwrCtrl, HIGH);
  Serial1.begin(9600, SERIAL_8N1, bluetoothModuleRx, bluetoothModuleTx);
}

void Bluetooth::update() {
  if (Serial1.available()) {
    String data = Serial1.readStringUntil('\n');
    Serial.print("Received data: ");
    Serial.println(data);
  }
}