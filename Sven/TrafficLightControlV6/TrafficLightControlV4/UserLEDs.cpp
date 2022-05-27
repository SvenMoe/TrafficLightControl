/** @file UserLEDs.cpp*/

#include "UserLEDs.h"

UserLEDs::UserLEDs() : myGPIOA(0x40020000),PinRed(8),PinAmber(9),PinGreen(10)
{
  myGPIOA.select_datadirection(PinRed,true);           //Pin A8  Output (D7) LED red
  myGPIOA.select_datadirection(PinAmber,true);         //Pin A9  Output (D8) LED amber
  myGPIOA.select_datadirection(PinGreen,true);         //Pin A10 Output (D2) LED green
}

void UserLEDs::redLED(bool state)
{
  if(state)
  {
    myGPIOA.set_bit(PinRed);
  }
  else
  {
    myGPIOA.delete_bit(PinRed);
  }
}

void UserLEDs::amberLED(bool state)
{
  if(state)
  {
    myGPIOA.set_bit(PinAmber);
  }
  else
  {
    myGPIOA.delete_bit(PinAmber);
  }
}

void UserLEDs::greenLED(bool state)
{
  if(state)
  {
    myGPIOA.set_bit(PinGreen);
  }
  else
  {
    myGPIOA.delete_bit(PinGreen);
  }
}

void UserLEDs::amberLEDToggle(bool state)
{
  while(state)
  {
    myGPIOA.toggle_bit(PinAmber);
  }
}

void UserLEDs::allLEDs(bool state)
{
  if(state)
  {
    myGPIOA.write_port(1ul << PinRed | 1ul << PinAmber | 1ul << PinGreen);
  }
  else
  {
    myGPIOA.write_port(0ul << PinRed | 0ul << PinAmber | 0ul << PinGreen);
  }
}