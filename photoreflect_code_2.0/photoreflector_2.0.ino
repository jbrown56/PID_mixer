
int pin = 0; //
int interuption;


void setup()
{
Serial.begin(9600);
pinMode(pin, INPUT);	
}

void loop()
{
int val;
int lastval;
val = analogRead(pin);
if (val < 100 and lastval > 100){//if it sense the reflected pieces and previosuly it did not
interuption = interuption + 1; //add one to the interruption counter
lastval = val//change the last value to the current value which would no longer make this statment able to run
}
if (val > 100){//if it senses the normal fan blades
lastval = val//last value becomes value so that it is greater than 100 and the previous loop can function again
}
Serial.println(interuption);//print the number of times the reflector has sensed the special tape
delay(100) ; 
}

