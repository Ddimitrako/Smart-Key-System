#include <Arduino.h>
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                   // initialize the lcd 
  
  lcd.print("HELLOW BRO");

  lcd.backlight();
  Serial.begin(9600);
}


void loop()
{ 
  if(Serial.available()){
    //delay(100);    
    
    while(Serial.available()>0){
      if(Serial.find("decrypted:")){
        lcd.setCursor(0,0);
        lcd.print(Serial.readStringUntil(','));
      }
      if(Serial.find(".")){
        lcd.setCursor(0,1);
        lcd.print(Serial.readStringUntil('='));
      }
    }
  }

 
}