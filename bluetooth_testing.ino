void setup() {
  Serial.begin(9600);
  Serial.println("Bluetooth Testing - Ready to receive messages!");
}

void loop() {
  if (Serial.available()) {
    char receivedChar = Serial.read();
    Serial.print("Received: ");
    Serial.println(receivedChar);
  }
}
