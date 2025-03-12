#include <Arduino.h>

#define PIR_PIN 15  // GPIO pin where the PIR sensor is connected

void setup() {
    Serial.begin(115200);
    pinMode(PIR_PIN, INPUT);
    Serial.println("PIR Sensor Test Starting...");
}

void loop() {
    int motionState = digitalRead(PIR_PIN);
    
    if (motionState == HIGH) {
        Serial.println("Motion detected!");
    } else {
        Serial.println("No motion detected...");
    }

    delay(1000); // Wait 1 second before checking the sensor output again
}
