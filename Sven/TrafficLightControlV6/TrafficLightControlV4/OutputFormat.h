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
 * @author Niklas Stein
 * @date   June 2022
 */
class OutputFormat
{

public:
  /**
   * Constructor of "OutputFormat"-class. Is empty.
   * @param  None
   * @return None
   */
  OutputFormat(){}
  
  /**
   * Virtual Method. Will be overritten.
   * @param  None
   * @return None
   */
  virtual void setRed() = 0;
  
  /**
   * Virtual Method. Will be overritten.
   * @param  None
   * @return None
   */
  virtual void setRedAmber() = 0;
  
  /**
   * Virtual Method. Will be overritten.
   * @param  None
   * @return None
   */
  virtual void setAmber() = 0;
  
  /**
   * Virtual Method. Will be overritten.
   * @param  None
   * @return None
   */
  virtual void setGreen() = 0;
  
  /**
   * Virtual Method. Will be overritten.
   * @param  None
   * @return None
   */
  virtual void off() = 0;
};


#endif