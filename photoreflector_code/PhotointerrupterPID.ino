//*Program to display the photoreflector input values
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
attachInterrupt(digitalPinToInterrupt(2), rising, RISING);
attachInterrupt(digitalPinToInterrupt(3), falling, FALLING);
}


void loop() {
int val;
val = analogRead(pin);
Serial.println(val);
delay(100) ; // Wait 100ms
}
