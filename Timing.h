//
<<<<<<< HEAD
// easy to use timing code that handles millis() overflow
=======
// easy to use timing that handles millis() overflow
>>>>>>> b45aa3a599be3dc324313397f49c4c0f9c6956d0
// example:
// create timer:    Timing mytimer;
// in setup():      mytimer.begin(0); // 0=catchup, 1=always use delay even if late
// in loop():       if (mytimer.isOver(1000) {
//                                           do something every 1000ms
//                                           }
<<<<<<< HEAD
// This file Copyright (c) 2015 Peter Scargill
=======
>>>>>>> b45aa3a599be3dc324313397f49c4c0f9c6956d0
//
#ifndef Timing_h
#define Timing_h
#include <Arduino.h>

class Timing
{
private:
 unsigned long counter;
 boolean catchup;
<<<<<<< HEAD
public:
    void begin(boolean cat)
    {
        counter=millis();
        catchup=cat;
    }

    boolean onTimeout(unsigned long interval)
    {
        unsigned long newmillis=millis();  // temp vars so easier comparison
        if ((newmillis-counter)>=interval)
            {
            if (catchup) counter=newmillis; else counter+=interval;
            return true;
            }
        return false;
    }


    void onTimeout(unsigned long interval, void (*g)()) // this version pass function as parameter
    {
        unsigned long newmillis=millis();  // temp vars so easier comparison
        if ((newmillis-counter)>=interval)
            {
            if (catchup) counter=newmillis; else counter+=interval;
            g();
            }
    }



};
#endif
=======
public: 
	void begin(boolean cat)
	{
		counter=millis();
		catchup=cat;
	}
		
	boolean onTimeout(unsigned long interval)
	{
		unsigned long newmillis=millis();  // temp vars so easier comparison
		if ((newmillis-counter)>=interval)
			{
			if (catchup) counter=newmillis; else counter+=interval;
			return true;
			}
		return false;
	}
	
	
	void onTimeout(unsigned long interval, void (*g)()) // this version pass function as parameter
	{
		unsigned long newmillis=millis();  // temp vars so easier comparison
		if ((newmillis-counter)>=interval)
			{
			if (catchup) counter=newmillis; else counter+=interval;
			g();
			}
	}
	
	

};
#endif
>>>>>>> b45aa3a599be3dc324313397f49c4c0f9c6956d0
