/*************/
/*  SEMAFORO */
/*************/


# include <Arduino.h>

#define SECONDS(x) X*1000

//3 and 4 are USB pins
const int red=PIN0
const int yellow=PIN1
const int green=PIN2

void setup()
{
	pinMode(red, OUTPUT);
	pinMode(Yellow, OUTPUT);
	pinMode(green, OUTPUT);
	
	digitalwrite(red, OUTPUT);
	digitalwrite(Yellow, OUTPUT);
	digitalwrite(green, OUTPUT);
}