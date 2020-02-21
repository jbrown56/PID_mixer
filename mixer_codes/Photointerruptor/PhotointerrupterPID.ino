//*Program to display the photoreflector input values
//********************************************************************
int pin = 0; //
void setup() {
Serial.begin(9600) ;
}
void loop() {
int val;
val = analogRead(pin) ; //Read sensor value from Analog pin 1
Serial.println(val) ; //Display to serial monitor
delay(100) ; // Wait 100ms
}
