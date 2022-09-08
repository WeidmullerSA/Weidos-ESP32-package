#include "Arduino.h"
#include "weidosPinModes.h"


void weidos_initDefaultIOPins(){

    //Digital inputs
    pinMode(pin25, INPUT);	//DI_4
	pinMode(pin26, INPUT);	//DI_5
	pinMode(pin27, INPUT);	//DI_6
	pinMode(pin28, INPUT);	//DI_7
	
	//Digital outputs
	digitalWrite(pin55, LOW);
    digitalWrite(pin56, LOW);
    digitalWrite(pin57, LOW);
    digitalWrite(pin58, LOW);
	pinMode(pin55, OUTPUT); //DO_0
	pinMode(pin56, OUTPUT); //DO_1
	pinMode(pin57, OUTPUT); //DO_2
	pinMode(pin58, OUTPUT); //DO_3
}
