#include <LiquidCrystal.h> 

LiquidCrystal lcd(2,3,4,5,6,7); 

void setup() { //setup code
  delay(200); 
  Serial.begin(200000);
  Serial.println("Hello Board A2");

  lcd.begin(16,2)
  lcd.setCursor(0,0);
  lcd.print("ABCDEFGHIJKLMNOP");
  lcd.setCursor(0,1); 
  lcd.print("abcdefghijklmnop");

  pinMode(LED_BUILTIN,OUTPUT);
  digitalWrite(LED_BUILTIN, LOW); // LED OFF
  
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // LED ON
  delay(1000); // Second Wait
  digitalWrite(LED_BUILTIN, LOW);// LED OFF
  delay(1000); // Second Wait 
}
// https://www.youtube.com/watch?v=nAv5pmGzqsk Example Code/Wiring Video
