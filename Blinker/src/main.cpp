#include <Arduino.h>

const byte LED = 13;
const byte Taster = 4;
int TasterWert;


void setup() {
//Serial.begin(9600);
    pinMode(LED, OUTPUT);//Pin2 als Ausgang definieren
    pinMode(Taster, INPUT_PULLUP);//Pin4 als Eingang definieren
//digitalWrite (Taster,HIGH);
//Serial.println(LED_BUILTIN);
}


void loop() {
    TasterWert = digitalRead(Taster);//Taster lesen
    if (TasterWert == true) {
        digitalWrite(LED, HIGH);//Port2 auf High setzen
        delay(500);//500ms warten
        digitalWrite(LED, LOW);//Port2 auf Low setzen
        delay(500);//500ms warten
    } else {
        digitalWrite(LED, LOW);//Port2 auf Low setzen
    }

}