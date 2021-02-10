#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

#define LED 3

void setup() {
  pinMode(LED, OUTPUT);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print(" 7 Color  Flash LED");
}

void loop() {
  lcd.setCursor(0, 2);
  digitalWrite(LED, HIGH);
  lcd.print("****** LED ON ******");
  delay(4000);

  lcd.setCursor(0, 2);
  digitalWrite(LED, LOW);
  lcd.print("                    ");
  delay(2000);
}
