// Justine and Ella
<<<<<<< HEAD
//Detach interrupt code
// Official Code For THE Project
//get detach interrupt to workd with the photoreflector to measure interrupts and convert that to speed

int photoPin = 2; //Pin for Photoreflector
int photoState = analogRead(photoPin); //Converts digital pin to analog pin
int interrupt = 0; //Counts how many changes in color
long oldTime = 0; //Resets time
long Time = 0; //Tells time
float rps = interrupt/Time; //Sets the number of rotations per second
int toggle; //Variable for the toggle


int on() //This is for when the photoreflector senses black
{
	// Variables are needed
toggle = 0; // Makes it only count once. Sets the code back to 0 so that it can count when it is white
	
}

int off(){ //This is for when the photoreflector senses white
	if (toggle = 0) { //This adds one to the count so that when it turns to white, one interrupt is added only once.
	interrupt = interrupt + 1;
		toggle = 1;
}
=======
// Detach interrupt code
// get detach interrupt to workd with the photoreflector to measure interrupts and convert that to speed
int photoPin = 2;
int ledPin = 8;
int photoState = analogRead(photoPin);
int interrupt = 0;
long oldTime = 0;
long Time = 0;
float rps = interrupt/Time;
volatile int toggle;


void on()
{
	if (toggle == 0)
	{
		interrupt = interrupt + 1;
		toggle = 1;
	}
}

void off()
{
	toggle = 0;
	// Variebles are needed
	// interrput = interrupt -1;
>>>>>>> cbb3d616a5b95d7e319d8a482c2a552235c03b86
}

void setup()
{
	Serial.begin(9600); //Sets up Serial Monitor
	pinMode(photoPin, INPUT_PULLUP); //Defines the pin for the photoreflector
	attachInterrupt(digitalPinToInterrupt(3), off, FALLING); // Works faster than a loop. If there is nothing in the way, the light turns off
	attachInterrupt(digitalPinToInterrupt(2), on, RISING); // Works faster than a loop. If there is something in the way, the light turns on
	// Detach, do the math, reattach
}

<<<<<<< HEAD
void loop(){
/*	Time = millis(); //Time counts up
	if (Time > 1000 + oldTime) //It runs every second
	{
		detachInterrupt(digitalPinToInterrupt(3)); //Stops the interrupt for one second for both rising and falling
		detachInterrupt(digitalPinToInterrupt(2)); 
		rps = interrupt/((Time - oldTime)/1000); //The rate it changes is the number of interrupts divided by the amount of milliseconds passed. Dividing it by 1000 puts it in terms of seconds
		oldTime = millis(); //Resets old time back to 0
		interrupt = 0; //Resets the amount of interrupts
		attachInterrupt(digitalPinToInterrupt(3), off, FALLING); //reattaches the interrupt to read it again for both rising and falling
		attachInterrupt(digitalPinToInterrupt(2), on, RISING);
		Serial.println("time > 1000"); //Shows that a second has passed
	}
*/
=======
void loop()
{
	/*	Time = millis(); //Time counts up
	if (Time > 2000 + oldTime) //It runs every second
	{
	detachInterrupt(digitalPinToInterrupt(3));
	detachInterrupt(digitalPinToInterrupt(2));
	rps = interrupt/((Time - oldTime)/1000); //The rate it changes is the number of interrupts divided by the amount of milliseconds passed. Dividing it by 1000 puts it in terms of seconds
	oldTime = millis(); //Resets old time back to 0
	interrupt = 0; //Resets the amount of interrupts
	attachInterrupt(digitalPinToInterrupt(3), off, FALLING);
	attachInterrupt(digitalPinToInterrupt(2), on, RISING);
	Serial.println("time > 1000!");
	}
	*/
	Serial.print(toggle);
	Serial.print("\t");
>>>>>>> cbb3d616a5b95d7e319d8a482c2a552235c03b86
	Serial.println(interrupt);
	delay(100);
}
