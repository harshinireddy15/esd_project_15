#include <LiquidCrystal.h>

LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

int SensorPin = A5;
int motor = 7 ;
void setup() {
  pinMode(SensorPin,INPUT);
  pinMode(motor,OUTPUT);
  lcd.begin(20, 4);
  lcd.setCursor(0,0);
  lcd.print("----INFOTAINMENT----");
  lcd.setCursor(0,1);
  lcd.print("SOIL MOISTURE LEVEL.");
  lcd.setCursor(2,2);
  lcd.print("Analog Value: ");
  lcd.setCursor(2,3);
  lcd.print("Output: ");
}

void loop() {

  int SensorValue = analogRead(SensorPin);
  float SensorVolts = analogRead(SensorPin)*0.0048828125;   
  
  lcd.setCursor(16, 2);  
  lcd.print(SensorValue);
  lcd.setCursor(9, 3);  
  lcd.print(SensorVolts);     
  lcd.print("V");
  if(SensorValue<300){
    digitalWrite(motor,HIGH);
    delay(1000);
  }
  else{
    digitalWrite(motor,LOW);
    delay(1000);
  }

//  sensorValue = analogRead(sensorPin);
//  lcd.setCursor(4,2);
//  lcd.print(sensorValue);
//  delay(1000);
  
}
