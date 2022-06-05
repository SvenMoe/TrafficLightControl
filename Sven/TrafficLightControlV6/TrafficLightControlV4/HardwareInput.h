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
 * @author 
 * @date   May 2022
 */
class HardwareInput : public InputFormat
{

private:
    
    UserButtons myUserButton;
    static HardwareInput *Instance;
    HardwareInput() {}

public:
    static HardwareInput *GetInstance();
    char getButton();

};


#endif