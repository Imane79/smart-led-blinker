#include <TimerOne.h>

const int ledPin = 13;

void blinkLED() {
  digitalWrite(ledPin, !digitalRead(ledPin));
}

void setup() {
  pinMode(ledPin, OUTPUT);
  Timer1.initialize(500000);      // 0.5 seconds
  Timer1.attachInterrupt(blinkLED);
}

void loop() {
  // Nothing needed
}
