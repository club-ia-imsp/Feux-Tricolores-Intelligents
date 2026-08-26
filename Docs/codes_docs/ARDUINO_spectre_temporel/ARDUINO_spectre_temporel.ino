#include <SoftwareSerial.h>

SoftwareSerial espSerial(10, 11); // RX, TX

void setup() {
  Serial.begin(115200);     // Pour le moniteur série PC
  espSerial.begin(115200);  // Pour communiquer avec l'ESP32
}

void loop() {
  int valeur = analogRead(A0);
  espSerial.println(valeur); // Envoi à l'ESP32 avec un retour à la ligne
  Serial.println("Envoi : " + String(valeur));
  delay(1000);
}