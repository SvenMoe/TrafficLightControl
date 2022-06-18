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
 * @author Niklas Stein
 * @date   June 2022
 */
class InputFormat
{

public:
  /**
   * Constructor of "InputFormat"-class. Is empty.
   * @param  None
   * @return None
   */
  InputFormat(){}
  
  /**
   * Virtual Method. Will be overritten.
   * @param  None
   * @return None
   */
  virtual char getButton() = 0;
};


#endif