/** @file state.h*/

#ifndef STATE_H
#define STATE_H

#include "regtypes.h"
//#include "flashing.h"
//#include "active.h"
#include <iostream>

/**
 * Interface class "state".
 * @author 
 * @date   May 2022
 */
class state
{

public:
  state(){}
  virtual void Handle() = 0;
  virtual state* nextstate() = 0;

};


#endif