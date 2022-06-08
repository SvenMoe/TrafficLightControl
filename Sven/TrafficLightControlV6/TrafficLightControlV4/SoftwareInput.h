/** @file SoftwareInput.h*/

#ifndef SOFTWAREINPUT_H
#define SOFTWAREINPUT_H

#include "regtypes.h"
#include "InputFormat.h"
#include <iostream>


using namespace std;

/**
 * Interface class "SoftwareInput".
 * @author Niklas Stein
 * @date   June 2022
 */
class SoftwareInput : public InputFormat
{

private:

    static SoftwareInput *Instance;
    char button;
    SoftwareInput() {}

public:
    /**
     * Static singleton access method.
     * @param  None
     * @return None
     */
    static SoftwareInput *GetInstance();
    
    /**
     * Reads the input value and writes it to the class attribute "button".
     * @param  None
     * @return button class attribute
     */
    char getButton();

};


#endif