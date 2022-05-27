/** @file flashing.h*/

#ifndef FLASHING_H
#define FLASHING_H

#include "regtypes.h"
#include "state.h"
#include "LightControl.h"
#include "Off.h"
#include "Amber.h"
#include "active.h"
#include <iostream>

using namespace std;

class flashing : public state
{
  
  LightControl *myLightControl = nullptr;
public:
  flashing(){}
  void Handle();
  state* nextstate(); 
};


#endif