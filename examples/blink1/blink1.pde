#include <Timing.h>

Timing mytimer1,mytimer2;
boolean toggle1=false;
boolean toggle2=false;
#define BLINKER1 13
#define BLINKER2 12

void setup(void)
	{
	pinMode(BLINKER1,OUTPUT);
	pinMode(BLINKER2,OUTPUT);
	mytimer1.begin(0);
    mytimer2.begin(0);	
	}
	

void loop(void)
	{
	mytimer1.onTimeout(100,flash1); // 100 ms intervals
	mytimer2.onTimeout(30,flash2); // 30 ms intervals
    // do other stuff
	}

void flash1()
{
	toggle1=~toggle1; 
	if (toggle1) digitalWrite(BLINKER1,HIGH); else digitalWrite(BLINKER1,LOW);		 
}

void flash2()
{
	toggle2=~toggle2; 
	if (toggle2) digitalWrite(BLINKER2,HIGH); else digitalWrite(BLINKER2,LOW);		
}
