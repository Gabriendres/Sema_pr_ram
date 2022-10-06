/*************/
/*  SEMAFORO */
/*************/


# include <Arduino.h>

#define SECONDS(x) X*1000

//3 and 4 are USB pins
const int red=PIN0
const int yellow=PIN1
const int green=PIN2

// cambio en master

void setup()
{
	pinMode(red, OUTPUT);
	pinMode(Yellow, OUTPUT);
	pinMode(green, OUTPUT);
	
	digitalwrite(red, OUTPUT);
	digitalwrite(Yellow, OUTPUT);
	digitalwrite(green, OUTPUT);
}

void loop()
{
	pinMode(red, LOW);
	pinMode(green, HIGH);
	delay(SECONDS(10));
	pinMode(green, LOW);
	pinMode(yellow, HIGH);
	delay(SECONDS(2));
	pinMode(yellow, LOW);
	pinMode(red, HIGH);
	delay(SECONDS(10));
}