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
 * @author 
 * @date   May 2022
 */
class HardwareOutput : public OutputFormat
{

private:
    static HardwareOutput *Instance;
    UserLEDs myLED;
    HardwareOutput() {}

    

public:
    static HardwareOutput *GetInstance();
    void setRed();
    void setRedAmber();
    void setAmber();
    void setGreen();
    void off();

};


#endif