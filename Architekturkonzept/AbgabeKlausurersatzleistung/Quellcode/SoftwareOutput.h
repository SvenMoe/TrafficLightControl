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
 * @author Niklas Stein
 * @date   June 2022
 */
class SoftwareOutput : public OutputFormat
{

private:

    static SoftwareOutput *Instance;
    SoftwareOutput() {}

public:
    /**
     * Static singleton access method.
     * @param  None
     * @return None
     */
    static SoftwareOutput *GetInstance();
    
    /**
     * Writes "RED led on!" to the Terminal.
     * @param  None
     * @return None
     */
    void setRed();
    
    /**
     * Writes ""REDAMBER led on!" to the Terminal.
     * @param  None
     * @return None
     */
    void setRedAmber();
    
    /**
     * Writes "AMBER led on!" to the Terminal.
     * @param  None
     * @return None
     */
    void setAmber();
    
    /**
     * Writes "GREEN led on!" to the Terminal.
     * @param  None
     * @return None
     */
    void setGreen();
    
    /**
     * Writes "All leds off!" to the Terminal.
     * @param  None
     * @return None
     */
    void off();

};


#endif