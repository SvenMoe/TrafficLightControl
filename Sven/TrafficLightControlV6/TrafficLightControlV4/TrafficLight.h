/** @file TrafficLight.h*/

#ifndef TRAFFICLIGHT_H
#define TRAFFICLIGHT_H

#include "regtypes.h"
#include "UserButtons.h"
#include "state.h"
#include "flashing.h"
#include "active.h"
#include <iostream>

/**
 * Context class "TrafficLight".
 * User Interface.
 * @author
 * @date   May 2022
 */
class TrafficLight
{
private:
  bool buttonReset = true;
  UserButtons button;
  state *mystate;
  OutputFormat *myOutputFormat;
  // flashing myflashing;
  // active myactive;

public:
  /**
   * Constructor of "TrafficLight"-class.
   * @param  "state *mystate" gets the current state of the Traffic Light.
   * @return None
   */
  TrafficLight(state *mystate = active::GetInstance(), OutputFormat *myOutputFormat = new HardwareOutput) : mystate(mystate), myOutputFormat(myOutputFormat) {}

  /**
   * Handle to switch between active and flashing state.
   * @param  None
   * @return zero for cancelling the program, otherwise it returns one
   */
  UINT8 Handle();
};

#endif