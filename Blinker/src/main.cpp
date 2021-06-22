#include <Arduino.h>
const byte LED=8;
const byte Taster=4;
int TasterWert;
boolean x=true;


void setup() {
    Serial.begin(9600);
    pinMode(LED,OUTPUT);//Pin2 als Ausgang definieren
    pinMode(Taster,INPUT_PULLUP);//Pin4 als Eingang definieren
//digitalWrite (Taster,HIGH);

}


void loop() {
    TasterWert=digitalRead(Taster);//Taster lesen
    if (TasterWert==true)
    {
        digitalWrite(LED,x);//Port2 auf High setzen
        delay(500);//500ms warten
        x = !x;
        Serial.print(x);
//    digitalWrite(LED,LOW);//Port2 auf Low setzen
//    delay(500);//500ms warten
    }
    else{
        digitalWrite(LED,LOW);//Port2 auf Low setzen
    }

}