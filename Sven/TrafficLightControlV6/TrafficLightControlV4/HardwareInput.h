/** @file HardwareInput.h*/

#ifndef HARDWAREINPUT_H
#define HARDWAREINPUT_H

#include "regtypes.h"
#include "InputFormat.h"
#include "UserButtons.h"
#include <iostream>


using namespace std;

/**
 * Interface class "HardwareInput".
 * @author Niklas Stein
 * @date   June 2022
 */
class HardwareInput : public InputFormat
{

private:
    
    UserButtons myUserButton;
    static HardwareInput *Instance;
    HardwareInput() {}

public:
    /**
     * Static singleton access method.
     * @param  None
     * @return None
     */
    static HardwareInput *GetInstance();
    
    /**
     * Reads the input value from UserButtons class.
     * @param  None
     * @return return value from myUserButton.getButton()
     */
    char getButton();

};


#endif