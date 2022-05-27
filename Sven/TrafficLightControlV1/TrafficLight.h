/** @file TrafficLight.h*/

#ifndef TRAFFICLIGHT_H
#define TRAFFICLIGHT_H

#include "regtypes.h"
#include "UserButtons.h"
#include "state.h"
#include "flashing.h"
#include "active.h"
#include <iostream>

class TrafficLight
{
  bool buttonReset = true;
  UserButtons button;
  state *mystate;
  //flashing myflashing;
  //active myactive;
  
public:
  TrafficLight(state *mystate = new flashing()) : mystate(mystate) {}
  void Handle();
  
};


#endif