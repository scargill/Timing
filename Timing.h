//
// easy to use timing that handles millis() overflow
// example:
// create timer:    Timing mytimer;
// in setup():      mytimer.begin(0); // 0=catchup, 1=always use delay even if late
// in loop():       if (mytimer.isOver(1000) {
//                                           do something every 1000ms
//                                           }
//
#ifndef Timing_h
#define Timing_h
#include <Arduino.h>

class Timing
{
private:
 unsigned long counter;
 boolean catchup;
public: 
	void begin(boolean cat)
	{
		counter=millis();
		catchup=cat;
	}
		
	boolean isOver(unsigned long interval)
	{
		unsigned long newmillis=millis();  // temp vars so easier comparison
		if ((newmillis-counter)>=interval)
			{
			if (catchup) counter=millis(); else counter+=interval;
			return true;
			}
		return false;
	}

};
#endif