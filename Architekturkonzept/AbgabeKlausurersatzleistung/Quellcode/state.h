/** @file state.h*/

#ifndef STATE_H
#define STATE_H

#include "regtypes.h"
//#include "flashing.h"
//#include "active.h"
#include <iostream>

/**
 * Interface class "state".
 * @author Sven Moessner
 * @date   June 2022
 */
class state
{

public:
  /**
   * Constructor of "state"-class. Is empty.
   * @param  None
   * @return None
   */
  state(){}
  
  /**
   * Virtual Method. Will be overritten.
   * @param  None
   * @return None
   */
  virtual void Handle() = 0;
  
  /**
   * Virtual Method. Will be overritten.
   * @param  None
   * @return None
   */
  virtual state* nextstate() = 0;

};


#endif