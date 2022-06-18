/** @file HardwareOutput.cpp*/

#include "HardwareOutput.h"

HardwareOutput *HardwareOutput::Instance = NULL;

HardwareOutput *HardwareOutput::GetInstance()
{
  if (Instance == NULL)
  {
    Instance = new HardwareOutput();
  }
  return Instance;
}

inline void HardwareOutput::setRed()
{
    myLED.redLED(1);
    myLED.amberLED(0);
    myLED.greenLED(0);
}

inline void HardwareOutput::setRedAmber()
{
    myLED.redLED(1);
    myLED.amberLED(1);
    myLED.greenLED(0);
}

inline void HardwareOutput::setAmber()
{
    myLED.redLED(0);
    myLED.amberLED(1);
    myLED.greenLED(0);
}

inline void HardwareOutput::setGreen()
{
    myLED.redLED(0);
    myLED.amberLED(0);
    myLED.greenLED(1);
}


inline void HardwareOutput::off()
{
    myLED.redLED(0);
    myLED.amberLED(0);
    myLED.greenLED(0);
}