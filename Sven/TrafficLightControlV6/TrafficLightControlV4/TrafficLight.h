/** @file TrafficLight.h*/

#ifndef TRAFFICLIGHT_H
#define TRAFFICLIGHT_H

#include "regtypes.h"
#include "InputFormat.h"
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
  OutputFormat *myOutputFormat;
  InputFormat *myInputFormat;
  state *mystate;

  // flashing myflashing;
  // active myactive;

public:
  /**
   * Constructor of "TrafficLight"-class.
   * @param  "state *mystate" gets the current state of the Traffic Light.
   * @return None
   */
  TrafficLight(state *mystate, OutputFormat *myOutputFormat, InputFormat *myInputFormat) : mystate(mystate), myOutputFormat(myOutputFormat), myInputFormat(myInputFormat) {}

  /**
   * Handle to switch between active and flashing state.
   * @param  None
   * @return zero for cancelling the program, otherwise it returns one
   */
  UINT8 Handle();

};

#endif