#include <Arduino.h>

int PotiWert, Ausgabe;
const byte AnalogIn0 = A0;
const byte PWM1 = 3;

void setup() {
    Serial.begin(9600);
    pinMode(PWM1, OUTPUT);
}

void loop() {
    PotiWert = analogRead(AnalogIn0);
    Serial.print(PotiWert);
    Ausgabe = map(PotiWert, 0, 1023, 0, 255);
    Serial.print(", ");
    Serial.println(Ausgabe);
    analogWrite(PWM1, Ausgabe);
    delay(100);
}