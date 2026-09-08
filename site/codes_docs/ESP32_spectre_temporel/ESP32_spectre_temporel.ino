void setup() {
  Serial.begin(115200);
  // RX2 = GPIO 16, TX2 = GPIO 17
  Serial2.begin(115200, SERIAL_8N1, 16, 17); 
  Serial.println("ESP32 Prêt...");
}

void loop() {
  if (Serial2.available()) {
    String msg = Serial2.readStringUntil('\n');
    Serial.print("Reçu de l'Arduino : ");
    Serial.println(msg);
  }
}