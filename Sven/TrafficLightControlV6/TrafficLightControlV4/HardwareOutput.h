/** @file HardwareOutput.h*/

#ifndef HARDWAREOUTPUT_H
#define HARDWAREOUTPUT_H

#include "regtypes.h"
#include "OutputFormat.h"
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
    HardwareOutput(){}

public:
    static HardwareOutput *GetInstance();
    void setRed() = 0;
    void setRedAmber() = 0;
    void setAmber() = 0;
    void setGreen() = 0;
    void setFlashing() = 0;
    void off() = 0;

};


#endif