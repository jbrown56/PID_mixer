//*Program to display the photoreflector input values
//Official Mixer Check Code
//********************************************************************
int pin = 0; //
int interuption;

int rising(){
interuption = interuption + 1;
}
int falling(){
interuption = interuption; 
}

void setup() {
Serial.begin(9600);

pinMode(pin, INPUT);
}


void loop() {
int val;
val = analogRead(pin);
Serial.println(val);
delay(100) ; // Wait 100ms
}
