#include <Wire.h>
//#define proximityPin 27
//define relayPin 26

const int  proximityPin = 27;
const int relayPin = 26;

//int proximityPin = 6;
//int relayPin = 5; 

int proximityValue;

void setup() {
  Serial.begin(9600);
  pinMode(proximityPin, INPUT);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);
  digitalWrite(proximityPin, LOW);
}

void loop() {
  proximityValue = digitalRead(proximityPin);

  if (proximityValue == HIGH) {
    Serial.println(" Objek Terdeteksi ");
    digitalWrite(relayPin, HIGH );
//    delay(1000);
  } else {
    Serial.println(" Tidak ada objek terdeteksi ");
    digitalWrite(relayPin, LOW);
//    delay(1000);
  }
delay(200);
}
