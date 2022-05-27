/** @file flashing.cpp*/

#include "flashing.h"


void flashing::Handle()
{
  cout << "mode: flashing" << endl;
  myLightControl = new Off();
  myLightControl->Handle();
  for(int i=0; i<5000; i++){}
  myLightControl= new Amber();
  myLightControl->Handle();
  
}

inline state* flashing::nextstate()
{
  state *instance = new active();
  return instance;
}