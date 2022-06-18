/** @file HardwareOutput.h*/

#ifndef HARDWAREOUTPUT_H
#define HARDWAREOUTPUT_H

#include "regtypes.h"
#include "OutputFormat.h"
#include "UserLEDs.h"
//#include "flashing.h"
//#include "active.h"
#include <iostream>

/**
 * Interface class "HardwareOutput".
 * @author Niklas Stein
 * @date   June 2022
 */
class HardwareOutput : public OutputFormat
{

private:
    static HardwareOutput *Instance;
    UserLEDs myLED;
    HardwareOutput() {}

    

public:
    /**
     * Static singleton access method.
     * @param  None
     * @return None
     */
    static HardwareOutput *GetInstance();
    
    /**
     * Sets the red LED with help of UserLEDs class.
     * @param  None
     * @return None
     */
    void setRed();
    
    /**
     * Sets the red and the amber LED with help of UserLEDs class.
     * @param  None
     * @return None
     */
    void setRedAmber();
    
    /**
     * Sets the amber LED with help of UserLEDs class.
     * @param  None
     * @return None
     */
    void setAmber();
    
    /**
     * Sets the green LED with help of UserLEDs class.
     * @param  None
     * @return None
     */
    void setGreen();
    
    /**
     * Resets all LEDs with help of UserLEDs class.
     * @param  None
     * @return None
     */
    void off();

};


#endif