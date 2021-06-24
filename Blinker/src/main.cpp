#include <Arduino.h>


const byte LED1=13;
const byte LED2=8;
const byte Taster=4;
int TasterWert;
boolean x=true;


void setup() {
//Serial.begin(57600);
    pinMode(LED1,OUTPUT);//Pin13 als Ausgang definieren
    pinMode(LED2,OUTPUT);//Pin8 als Ausgang definieren
    pinMode(Taster,INPUT_PULLUP);//Pin4 als Eingang definieren
//digitalWrite (Taster,HIGH);

}


void loop() {
    TasterWert=digitalRead(Taster);//Taster lesen
    if (TasterWert==true)
    {
        digitalWrite(LED1,x);
        digitalWrite(LED2,!x);

        delay(500);//500ms warten
        x = !x;
//    Serial.println(x);
//    digitalWrite(LED,LOW);//Port2 auf Low setzen
//    delay(500);//500ms warten
    }
    else{
        digitalWrite(LED1,x);
        digitalWrite(LED2,x);
        delay(500);//500ms warten
        x = !x;
    }

}