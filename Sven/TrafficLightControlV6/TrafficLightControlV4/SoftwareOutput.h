/** @file SoftwareOutput.h*/

#ifndef SOFTWAREOUTPUT_H
#define SOFTWAREOUTPUT_H

#include "regtypes.h"
#include "OutputFormat.h"
//#include "flashing.h"
//#include "active.h"
#include <iostream>

/**
 * Interface class "SoftwareOutput".
 * @author 
 * @date   May 2022
 */
class SoftwareOutput : public OutputFormat
{

private:

    static SoftwareOutput *Instance;
    SoftwareOutput(){}

public:
    static SoftwareOutput *GetInstance();
    void setRed() = 0;
    void setRedAmber() = 0;
    void setAmber() = 0;
    void setGreen() = 0;
    void setFlashing() = 0;
    void off() = 0;

};


#endif