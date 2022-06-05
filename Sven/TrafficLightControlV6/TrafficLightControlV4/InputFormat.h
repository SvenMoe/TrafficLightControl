/** @file InputFormat.h*/

#ifndef INPUTFORMAT_H
#define INPUTFORMAT_H

#include "regtypes.h"
//#include "UserLEDs.h"
//#include "flashing.h"
//#include "active.h"
#include <iostream>

/**
 * Interface class "InputFormat".
 * @author 
 * @date   May 2022
 */
class InputFormat
{

public:
  InputFormat(){}
  virtual char getButton() = 0;
};


#endif