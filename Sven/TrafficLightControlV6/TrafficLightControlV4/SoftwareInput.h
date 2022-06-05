/** @file SoftwareInput.h*/

#ifndef SOFTWAREINPUT_H
#define SOFTWAREINPUT_H

#include "regtypes.h"
#include "InputFormat.h"
#include <iostream>


using namespace std;

/**
 * Interface class "SoftwareInput".
 * @author 
 * @date   May 2022
 */
class SoftwareInput : public InputFormat
{

private:

    static SoftwareInput *Instance;
    char button;
    SoftwareInput() {}

public:
    static SoftwareInput *GetInstance();
    char getButton();

};


#endif