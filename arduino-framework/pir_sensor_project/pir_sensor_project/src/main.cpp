#include <Arduino.h>

#define PIR_PIN 15  // PIR sensörünün bağlandığı GPIO pini

void setup() {
    Serial.begin(115200);
    pinMode(PIR_PIN, INPUT);
    Serial.println("PIR Sensor Testi Basliyor...");
}

void loop() {
    int motionState = digitalRead(PIR_PIN);
    
    if (motionState == HIGH) {
        Serial.println("Hareket var!");
    } else {
        Serial.println("Hareket yok...");
    }

    delay(1000); // Sensörün çıkış durumunu kontrol etmek için bekleme
}
