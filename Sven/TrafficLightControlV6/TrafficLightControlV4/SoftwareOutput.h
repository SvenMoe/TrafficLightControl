/** @file SoftwareOutput.h*/

#ifndef SOFTWAREOUTPUT_H
#define SOFTWAREOUTPUT_H

#include "regtypes.h"
#include "OutputFormat.h"
//#include "flashing.h"
//#include "active.h"
#include <iostream>


using namespace std;

/**
 * Interface class "SoftwareOutput".
 * @author 
 * @date   May 2022
 */
class SoftwareOutput : public OutputFormat
{

private:

    static SoftwareOutput *Instance;
    SoftwareOutput() {}

public:
    static SoftwareOutput *GetInstance();
    void setRed();
    void setRedAmber();
    void setAmber();
    void setGreen();
    void off();

};


#endif