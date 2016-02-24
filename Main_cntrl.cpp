// Arduino_cntrl
// Example - Creating an Electronic Die: "Instruction Manual"
void setup()
{
	randomSeed(analogRead(0));
	// init the random number generator from analog pins
	for ( int z = 1 ; z < 7 ; z++ ) { // LEDs on pins 1-6 are output
	pinMode(z, OUTPUT);
	}
}
void randomizeLED(int ledDelay)
{
	int r;
	r = random(1, 7);
	digitalWrite(r, HIGH);
	if (ledDelay > 0) {
		delay(ledDelay);
	}

	else if (ledDelay == 0) {
	
	do
	forever
	{}

	while (1);
	}


digitalWrite(r, LOW);
}
// get a random number from 1 to 6
// output to the matching LED on digital pin 1-6
// hold the LED on for the delay received
// the delay entered was zero, hold the LED on
// turn off the LED
void loop() {

	int i;
	// cycle the LEDs around for effect
	for ( i = 0 ; i < 100 ; i++ ) {
	randomizeLED(50);
	}
	// slow down
	for ( i = 1 ; i <= 10 ; i++ ) {
	randomizeLED(i * 100);
	}
	// and stop at the final random number and LED
	randomizeLED(0);
}
