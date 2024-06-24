#include <Wire.h>
#include <Adafruit_SSD1306.h>


#define OLED_SDA D2  // Replace A4 with the SDA pin of your ESP8266 (e.g., D2)
#define OLED_SCL D1  // Replace A5 with the SCL pin of your ESP8266 (e.g., D1)

#define OLED_ADDRESS 0x3C
#define OLED_WIDTH 128
#define OLED_HEIGHT 64


Adafruit_SSD1306 display(OLED_WIDTH, OLED_HEIGHT, &Wire, OLED_ADDRESS);


void setup() {
  Serial.begin(115200);  // Initialize serial communication for debugging
  display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDRESS);
  display.clearDisplay();
  display.display();
}

void loop() {

    if (Serial.available()) {
    char receivedChar = Serial.read();
    Serial.print("Received: ");
    Serial.println(receivedChar);

  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.print("WELCOME WORLD");
  display.print("ECE");
  display.setTextSize(2);
  display.display();
  delay(100);
  display.clearDisplay();
  display.setTextSize(1.5);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.print("Recieved: ");
  display.print(receivedChar);
  display.display();
  delay(1000);
}
