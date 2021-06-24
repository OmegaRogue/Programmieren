#include <Arduino.h>

int PotiWert, Ausgabe;
const byte AnalogIn0 = A0;
const byte PWM1 = 3;

void setup() {
    Serial.begin(9600);
    pinMode(PWM1, OUTPUT);
}

void loop() {
// write your code here
}