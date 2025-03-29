#include "Button.h"

void Button::init() {
  pinMode(upPin, INPUT_PULLUP);
  pinMode(downPin, INPUT_PULLUP);
  pinMode(leftPin, INPUT_PULLUP);
  pinMode(rightPin, INPUT_PULLUP);
  pinMode(selectPin, INPUT_PULLUP);
}

void Button::update() {
  if (digitalRead(upPin) == LOW) {
    // 处理向上按键
  }
  if (digitalRead(downPin) == LOW) {
    // 处理向下按键
  }
  if (digitalRead(leftPin) == LOW) {
    // 处理向左按键
  }
  if (digitalRead(rightPin) == LOW) {
    // 处理向右按键
  }
  if (digitalRead(selectPin) == LOW) {
    // 处理确认按键
  }
}