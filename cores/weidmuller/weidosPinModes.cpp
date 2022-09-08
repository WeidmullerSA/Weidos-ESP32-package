#include "Arduino.h"
#include "weidosPinModes.h"


void weidos_initDefaultIOPins(){
    
    //Digital inputs
    pinMode(pin25, INPUT);	//DI_4
	pinMode(pin26, INPUT);	//DI_5
	pinMode(pin27, INPUT);	//DI_6
	pinMode(pin28, INPUT);	//DI_7

}
