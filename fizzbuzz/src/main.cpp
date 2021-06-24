#include <Arduino.h>
void setup() {
    Serial.begin(19200);
    for (int i = 0; i < 100; ++i,delay(100))
        if(i%2!=0)
            Serial.println(i);
}

void loop() {
// write your code here
}