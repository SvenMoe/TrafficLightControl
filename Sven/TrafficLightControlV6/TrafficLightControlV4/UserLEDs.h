/** 
 * @file   UserLEDs.h
 */

#ifndef UserLEDs_H
#define UserLEDs_H

#include <iostream>
#include "GPIO.h"
#include "regtypes.h"

using namespace std;

/**
 * This class controls the Hardware-LED states of the STM Board.
 * @author 
 * @date   May 2022
 */
class UserLEDs
{
private:
  GPIO myGPIOA;
  UINT32 PinRed;
  UINT32 PinAmber;
  UINT32 PinGreen;
  bool toggle;
public:
/**
 *  @brief Configuration of the GPIO Output LEDs. Each object instantiated from the class references to GPIO-Port-A. 
 *  @brief Sets the data direction for each LED pin.
 *  @param None
 *  @return None
 */
  UserLEDs();
  
/**
 *  @brief Sets the red LED to the desired state (High or Low).
 *  @param state : hands over the desired state.
 *  @return None
 */
  void redLED(bool state);
  
/**
 *  @brief Sets the amber LED to the desired state (High or Low).
 *  @param state : hands over the desired state.
 *  @return None
 */
  void amberLED(bool state);
  
/**
 *  @brief Sets the green LED to the desired state (High or Low).
 *  @param state : hands over the desired state.
 *  @return None
 */
  void greenLED(bool state);
  
 /**
 *  @brief Toggle the amber led repeatedly on and off.
 *  @param state : hands over the desired state.
 *  @return None
 */
  
  void amberLEDToggle(bool state);
  
/**
 *  @brief Sets all LEDs to the desired state (High or Low).
 *  @param state : hands over the desired state.
 *  @return None
 */
  void allLEDs(bool state);
};
#endif //UserLEDs_H