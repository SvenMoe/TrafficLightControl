/** @file UserButtons.h*/

#ifndef USERBUTTONS_H
#define USERBUTTONS_H

#include "regtypes.h"
#include "GPIO.h"
#include <iostream>

using namespace std;

/**
 * The class controls the Input-Buttons of the STM Board.
 * @author 
 * @date   May 2022
 */
class UserButtons
{
private:
  GPIO myGPIOB;
  bool getPinB3();
  bool getPinB5(); 
 
public:
/**
 *  @brief Configuration of the GPIO Input Buttons. Each object instantiated from the class references to GPIO-Port-B. 
 *  @param None
 *  @return None
 */
  UserButtons() : myGPIOB(0x40020400){};
  
/**
 *  @brief Reads the Button states
 *  @param None
 *  @return Character describing the Button states (O = no Button pressed, X = both Buttons pressed, B = only PB3 pressed, F = only PB5 pressed)
 */
  UINT8 getButton();
  

};

#endif //USERBUTTONS_H