#include <Arduino.h>

int LED_Port = 6, Fadewert = 5, Fade = 5;// mehrere int Zuweisungen durch Komma getrennt

void setup() {
    Serial.begin(19200); //dient zur Fehlersuche
    //pinMode(LED_Port,OUTPUT); nicht notwendig bei Analogausgabe
}

void loop(){
    while (Fadewert<255){//Kopfgesteuert
        analogWrite(LED_Port,Fadewert); //Analogausgabe PWM 9
        delay(100);
        Fadewert += Fade;
        Serial.println(Fadewert);
    }
    while (Fadewert>0){//Kopfgesteuert
        analogWrite(LED_Port,Fadewert); //Analogausgabe PWM 9
        delay(100);
        Fadewert -= Fade;
        Serial.println(Fadewert);
    }

}


//void loop(){
//  do{
//    analogWrite(LED_Port,Fadewert); //Analogausgabe PWM 9
//    delay(100);
//    Fadewert += Fade;
//    Serial.println(Fadewert);
//  } while (Fadewert<255);//Fußgesteuert
//
//  do{
//    analogWrite(LED_Port,Fadewert); //Analogausgabe PWM 9
//    delay(100);
//    Fadewert -= Fade;
//    Serial.println(Fadewert);
//  } while (Fadewert>0);//Fußgesteuert
//}

//void loop() {
//    analogWrite(LED_Port,Fadewert); //Analogausgabe PWM 9
//    delay(50);
//    Fadewert += Fade;// entspricht Fadewert=Fadewert+Fade
//    Serial.println(Fadewert); //dient zur Fehlersuche
//    if (Fadewert==255 || Fadewert==0) //Vergleich mit Fadewert==255 ODER Fadewert==0
//    {
//      Fade = -Fade;//Vorzeichenänderung
//    }
//
//}