// Justine and Ella
// Detach interrupt code
// get detach interrupt to workd with the photoreflector to measure interrupts and convert that to speed
int photoPin1 = 2;
int photoPin2 = 3;
int ledPin = 9;
int photoState = analogRead(photoPin1);
int interrupt = 0;
long oldTime = 0;
long Time = 0;
float rps = interrupt/Time;
volatile int toggle = 0;
int test = 0;
int check = 750; // how often the detach interrupt checks
void on()
{
	if (toggle == 0)//toggle prevents interrupts from counting multiple times when on white
	{
		interrupt = interrupt + 1;
		digitalWrite(ledPin, HIGH);
		// toggle = 1;
	}
}

void off()
{
	toggle = 0;//resets toggle
	digitalWrite(ledPin, LOW);
	// Variebles are needed
	// interrupt = interrupt + 1;
}

void setup()
{
	Serial.begin(9600);
	pinMode(photoPin1, INPUT);
	pinMode(photoPin2, INPUT);
	pinMode(ledPin, OUTPUT);
	attachInterrupt(digitalPinToInterrupt(photoPin2), off, RISING); // Works faster than a loop.
	// If there is nothing in the way, the light turns off
	attachInterrupt(digitalPinToInterrupt(photoPin1), on, FALLING); // Works faster than a loop.
	// If there is something in the way, the light turns on
	// Detach, do the math, reattach
}

void loop()
{
	Time = millis(); // Time counts up
	if (Time > check + oldTime)
	// It runs every second
	{
		/*
		Serial.println(interrupt);
		oldTime = Time;
		}
		*/
		detachInterrupt(digitalPinToInterrupt(3));
		detachInterrupt(digitalPinToInterrupt(2));
		rps = interrupt/ ((Time - oldTime) /check); // The rate it changes is the number of
		// interrupts divided by the amount of milliseconds passed. Dividing it by 1000 puts it in terms of seconds
		interrupt = 0; // Resets the amount of interrupts
		Serial.println("time > 1000!");
		Serial.println(rps);
		attachInterrupt(digitalPinToInterrupt(photoPin2), off, RISING); // Works faster than a loop.
		attachInterrupt(digitalPinToInterrupt(photoPin1), on, FALLING);
		oldTime = millis(); // Resets old time back to 0
	}
	// Serial.print(toggle);
	// Serial.print("\t");
	// Serial.println(rps);
	// Serial.print("\t");
	// Serial.println(test);
	delay(100);
}
