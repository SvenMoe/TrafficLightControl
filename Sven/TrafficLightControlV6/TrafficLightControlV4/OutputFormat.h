/** @file OutputFormat.h*/

#ifndef OUTPUTFORMAT_H
#define OUTPUTFORMAT_H

#include "regtypes.h"
//#include "UserLEDs.h"
//#include "flashing.h"
//#include "active.h"
#include <iostream>

/**
 * Interface class "OutputFormat".
 * @author 
 * @date   May 2022
 */
class OutputFormat
{

public:
  OutputFormat(){}
  virtual void setRed() = 0;
  virtual void setRedAmber() = 0;
  virtual void setAmber() = 0;
  virtual void setGreen() = 0;
  virtual void off() = 0;
};


#endif