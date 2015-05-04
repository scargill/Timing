#include <Timing.h>

Timing mytimer;
boolean toggle=false;
#define BLINKER 13

void setup(void)
	{
	pinMode(BLINKER,OUTPUT);
	mytimer.begin(0); // if timing is critical use 0, if you'd rather never return in LESS 
                      // than interval period, use 1	
	}
	

void loop(void)
	{
	if (mytimer.onTimeout(1000)) // 1000 ms intervals
		{
		toggle=~toggle; 
		if (toggle) digitalWrite(BLINKER,HIGH); else digitalWrite(BLINKER,LOW);		
		}
	}