#include <Arduino.h>
void setup() {
    Serial.begin(19200);
    for (int i = 1; i < 100; ++i) {
        delay(100);
        if(i%15==0)
            Serial.println("FizzBuzz");
        else if(i%3==0)
            Serial.println("Fizz");
        else if(i%5==0)
            Serial.println("Buzz");
        else
            Serial.println(i);
    }
}

void loop() {
// write your code here
}