#include <Arduino.h>  // Wajib untuk PlatformIO + ESP32


// Deklarasi pin LED
int lampu = 0; // LED Merah
int lampu2 = 4; // LED Kuning
int lampu3 = 2; // LED Hijau


void setup() {
    Serial.begin(115200);  // Inisialisasi komunikasi Serial
    Serial.println("ESP32 Blinking LED");


    // Atur pin sebagai OUTPUT
    pinMode(lampu, OUTPUT);
    pinMode(lampu2, OUTPUT); 
    pinMode(lampu3, OUTPUT);
}


void loop() {
    // Menyalanya lampu merah
    digitalWrite(lampu, HIGH);
    digitalWrite(lampu2, LOW);
    digitalWrite(lampu3, LOW);
    Serial.println("LED RED ON");
    
    delay(2000); 

    // Menyalanya lampu kuning
    digitalWrite(lampu, LOW);
    digitalWrite(lampu2, HIGH);
    digitalWrite(lampu3, LOW);
    Serial.println("LED Yellow ON");
    
    delay(1000);

    // Menyalanya lampu hijau
    digitalWrite(lampu, LOW);
    digitalWrite(lampu2, LOW);
    digitalWrite(lampu3, HIGH);
    Serial.println("LED Green ON");
    
    delay(2000); 
}
