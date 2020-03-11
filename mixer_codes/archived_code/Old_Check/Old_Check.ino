//Ella McLaren and Justine Brown
//*Program to display the photoreflector input values
//Official Mixer Check Code
//********************************************************************
int pin = 0; //Analog pin for the photoreflector to work. No need to convert pins
int val; //This will be the values that the photoreflector is reading

void setup() {
Serial.begin(9600); //Sets up the serial monitor

pinMode(pin, INPUT); //Sets up the photoreflectors pin. Gains an input
}


void loop() {
val = analogRead(pin); //The value becomes what is read by the analog pin
Serial.println(val); //Prints the values that the photoreflector are sensing
delay(100) ; // Wait 100ms so that is doesn't spam the monitor
}
