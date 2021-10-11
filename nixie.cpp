#include "Arduino.h"
#include "nixie.h"

Nixie::Nixie(byte pins[], byte s) {
  for (int i = 0; i < s; i++) {
    int pin = pins[i];
    pinMode(pin, OUTPUT);
    digitalWrite(pin, HIGH);
  }
  _pins = pins;
  _s = s;
}

void Nixie::display(int number) {
  Nixie::reset();
  digitalWrite(_pins[number], LOW);
}

void Nixie::reset() {
  for (int i = 0; i < _s; i++) {
    int pin = _pins[i];
    digitalWrite(pin, HIGH);
  }
}

void Nixie::test() {
  for (int i = 0; i < _s; i++) {
    int pin = _pins[i];
    digitalWrite(pin, LOW);
    delay(350);
    digitalWrite(pin, HIGH);
    
  }
}
