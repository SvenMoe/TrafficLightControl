/** @file UserButtons.h*/

#ifndef USERBUTTONS_H
#define USERBUTTONS_H

#include "regtypes.h"
#include "GPIO.h"
#include <iostream>

using namespace std;

/**
 *  The class 
 */
class UserButtons
{
private:
  GPIO myGPIOB;
  bool getPinB3();
  bool getPinB5(); 
 
public:
/**
 *  @brief Configuration of the desired port. Each object instantiated from the class references to the selected Port (e.g. GPIOA, GPIOB ?). 
 *  @brief Activation of the GPIO clock for the corresponding register.
 *  @param startadress: identifies the GPIO-Port
 *  @return None
 */
  UserButtons();
  
/**
 *  @brief Sets the data direction (input/output) for each pin.
 *  @param pin identifies the GPIO-Pin
 *  @param direction identifies the direction of the Pin
 *  @return None
 */
  UINT8 getButton();
  

};

#endif //USERBUTTONS_H