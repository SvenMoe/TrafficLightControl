/** @file state.h*/

#ifndef STATE_H
#define STATE_H

#include "regtypes.h"
//#include "flashing.h"
//#include "active.h"
#include <iostream>

class state
{

public:
  state(){}
  virtual void Handle() = 0;
  virtual state* nextstate() = 0;

};


#endif