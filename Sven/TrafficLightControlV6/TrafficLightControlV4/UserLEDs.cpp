/** @file UserLEDs.cpp*/

#include "UserLEDs.h"

UserLEDs::UserLEDs() : myGPIOA(0x40020000),PinRed(8),PinAmber(9),PinGreen(10)
{
  #ifdef _HARDWAREPRESENT

    myGPIOA.select_datadirection(PinRed,true);           //Pin A8  Output (D7) LED red
    myGPIOA.select_datadirection(PinAmber,true);         //Pin A9  Output (D8) LED amber
    myGPIOA.select_datadirection(PinGreen,true);         //Pin A10 Output (D2) LED green

	#else

    toggle = false;

	#endif

}

void UserLEDs::redLED(bool state)
{ 
  #ifdef _HARDWAREPRESENT

    if(state)
      {
        myGPIOA.set_bit(PinRed);
      }
      else
      {
        myGPIOA.delete_bit(PinRed);
      }
  
	#else

    if(state)
      {
        cout << "RED led on!" << endl;
      }
      else
      {
        // off
      }

	#endif

}

void UserLEDs::amberLED(bool state)
{
  #ifdef _HARDWAREPRESENT

    if(state)
      {
        myGPIOA.set_bit(PinAmber);
      }
      else
      {
        myGPIOA.delete_bit(PinAmber);
      }
  
	#else

    if(state)
      {
        cout << "AMBER led on!" << endl;
      }
      else
      {
        // off
      }

	#endif
}

void UserLEDs::greenLED(bool state)
{
  #ifdef _HARDWAREPRESENT
  
    if(state)
      {
        myGPIOA.set_bit(PinGreen);
      }
      else
      {
        myGPIOA.delete_bit(PinGreen);
      }
  
	#else

    if(state)
      {
        cout << "GREEN led on!" << endl;
      }
      else
      {
        // off
      }

	#endif
}

void UserLEDs::amberLEDToggle(bool state)
{
  #ifdef _HARDWAREPRESENT
  
    while(state)
    {
      myGPIOA.toggle_bit(PinAmber);
    }
  
	#else

    while(state)
    {
      if(toggle)
      {
        cout << "AMBER led on!" << endl;
        toggle = false;
      }
      else
      {
        cout << "AMBER led off!" << endl;
        toggle = true;
      }

    }

	#endif
  
}

void UserLEDs::allLEDs(bool state)
{
  #ifdef _HARDWAREPRESENT
  
  if(state)
  {
    myGPIOA.write_port(1ul << PinRed | 1ul << PinAmber | 1ul << PinGreen);
  }
  else
  {
    myGPIOA.write_port(0ul << PinRed | 0ul << PinAmber | 0ul << PinGreen);
  }
  
	#else

    if(state)
  {
    cout << "RED led on!" << endl;
    cout << "AMBER led on!" << endl;
    cout << "GREEN led on!" << endl;
  }
  else
  {
    // off
  }
    
	#endif
  
}