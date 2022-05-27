/** @file UserButtons.cpp*/

#include "UserButtons.h"

#include <iostream>

using namespace std;

UserButtons::UserButtons() : myGPIOB(0x40020400)
{

}

bool UserButtons::getPinB3()
{
  if(myGPIOB.read_port() & (1ul << 3))
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
bool UserButtons::getPinB5()
{
  if(myGPIOB.read_port() & (1ul << 5))
  {
    return 1;
  }
  else
  {
    return 0;
  }
} 


UINT8 UserButtons::getButton()
{
  myGPIOB.select_datadirection(3,false);        //Pin B3  Input Button D3
  myGPIOB.select_datadirection(5,false);        //Pin B5  Input Button D4
  
  bool PB3 = false;
  bool PB5 = false;
  bool state;
  bool nextstate;
  
  do
  {
    state = getPinB3();

    for(int i = 0; i<3000; i++) {}
    
    nextstate = getPinB3();
    PB3 = nextstate;
  }
  while(!(state == nextstate));

  
  do
  {
    bool state = getPinB5();
    
    for(int i = 0; i<3000; i++) {}
    
    bool nextstate = getPinB5();
    PB5 = nextstate;
  }
  while(!(state == nextstate));

  
  if(!(PB3) && !(PB5)) // no Button pressed
  {
    return 'O';
  }
  else if(PB3 && PB5) // both Buttons pressed
  {
    return 'X';
  }
  else if(PB3 && !(PB5)) // only PB3 pressed
  {
    return 'B';
  }
  else // only PB5 pressed
  {
    return 'F';
  }
}