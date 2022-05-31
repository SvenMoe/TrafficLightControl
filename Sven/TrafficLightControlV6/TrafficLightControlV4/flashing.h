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

/**
 * Concrete state of interface class "state".
 * In this state the amber LED is flashing and the Traffic Light is in standby state.
 * @author Cedric Franke
 * @date   May 2022
 */
class flashing : public state
{
private:
  LightControl *myLightControl = nullptr;

  /**
   * Singleton instance of "flashing"-class.
   * @param  None
   * @return None
   */
  static flashing *Instance;

  /**
   * Constructor of "flashing"-class.
   * @param  None
   * @return None
   */
  flashing() {}

public:
  /**
   * Static singleton access method.
   * @param  None
   * @return None
   */
  static flashing *GetInstance();

  /**
   * Handle of concrete state "flashing".
   * Handles the concrete states "Off" and "Amber".
   * @param  None
   * @return None
   */
  void Handle();

  /**
   * Takes over to active state.
   * @param  None
   * @return Instance for next state.
   */
  state *nextstate();
};

#endif