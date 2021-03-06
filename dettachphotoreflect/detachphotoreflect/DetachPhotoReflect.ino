// Justine and Ella
// Detach interrupt code
// Official Code For THE Project
// get detach interrupt to workd with the photoreflector to measure interrupts and convert that to speed
int photoPin = 2;
int ledPin = 8;
int photoState = analogRead(photoPin);
int interrupt = 0;
long oldTime = 0;
long Time = 0;
float rps = interrupt/Time;
int toggle;

int on()
{
	// Variables are needed
	if (toggle == 0)
	{
		interrupt = interrupt + 1;
		toggle = 1;
	}
}

int off()
{
	toggle = 0;
}

void setup()
{
	Serial.begin(9600);
	pinMode(photoPin, INPUT_PULLUP);
	pinMode(ledPin, OUTPUT);
	attachInterrupt(digitalPinToInterrupt(3), off, FALLING); // Works faster than a loop. If there is nothing in the way, the light turns off
	attachInterrupt(digitalPinToInterrupt(2), on, RISING); // Works faster than a loop. If there is something in the way, the light turns on
	// Detach, do the math, reattach
}

void loop()
{
	Time = millis(); // Time counts up
	if (Time > 1000 + oldTime)
		//It runs every second
	{
		detachInterrupt(digitalPinToInterrupt(3));
		detachInterrupt(digitalPinToInterrupt(2));
		rps = interrupt/ ((Time - oldTime) /1000); // The rate it changes is the number of interrupts divided by the amount of milliseconds passed. Dividing it by 1000 puts it in terms of seconds
		oldTime = millis(); // Resets old time back to 0
		interrupt = 0; // Resets the amount of interrupts
		Serial.println("time > 1000!");

		attachInterrupt(digitalPinToInterrupt(3), off, FALLING);
		attachInterrupt(digitalPinToInterrupt(2), on, RISING);
		
	}
	Serial.println(rps);
	delay(100);
}
