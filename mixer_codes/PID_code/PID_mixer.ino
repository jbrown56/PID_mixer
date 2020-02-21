#include <Wire.h>
#include <LiquidCrystal_I2C.h> 
LiquidCrystal_I2C lcd(0x27,16,2);
int potvalue;
int potpin = 2;
int motorpin = 9;
int motorvalue;
int speed;
int setspeed; 
int photopin = 2;
int photostate;
int interupts = 0;
int oldinterupts = 0;

//pid variables


void setup()
{
	lcd.begin (16,2); // for 16 x 2 LCD module
lcd.init();
lcd.backlight();
lcd.setBacklight(HIGH);
pinMode(photopin, INPUT_PULLUP);
attachInterrupt(digitalPinToInterrupt(2), , RISING);
attachInterrupt(digitalPinToInterrupt(3), ledlowfunction, FALLING);
Serial.begin(9600);
}

void loop()
{
potvalue = analogRead(potpin);
motorvalue = potvalue/4;
Serial.println(motorvalue);
analogWrite(motorpin, motorvalue);
if (motorvalue != 0){
speed = map(motorvalue, 1, 255, 1, 5);
}
if (motorvalue == 0) { 
speed = 0;
}
lcd.setCursor(0,0);
lcd.print("speed:");
lcd.setCursor(0,1);
lcd.println(speed);
}

//pololu motornoise