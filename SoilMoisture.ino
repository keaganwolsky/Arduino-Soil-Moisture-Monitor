#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
#define GREENLED 6
#define REDLED 7
void setup() {
  lcd.begin(16,2);
Serial.begin(9600);
pinMode(GREENLED,OUTPUT);
pinMode(REDLED,OUTPUT);
pinMode(A0,INPUT);


}


void loop() {
int sensorValue=analogRead(A0);
Serial.println(sensorValue);
lcd.clear();
lcd.setCursor(0,0);




if (800<sensorValue) {
  lcd.print("I need water:(");
  digitalWrite(REDLED,HIGH);
  digitalWrite(GREENLED,LOW);
  }else {
    lcd.print("I am happy :)");
digitalWrite(GREENLED,HIGH);
digitalWrite(REDLED,LOW);}
delay(1000);
}


