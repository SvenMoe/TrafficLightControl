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

inline HardwareOutput::setRed()
{
    myLED.redLED(1);
    myLED.amberLED(0);
    myLED.greenLED(0);
}

inline HardwareOutput::setRedAmber()
{
    myLED.redLED(1);
    myLED.amberLED(1);
    myLED.greenLED(0);
}

inline HardwareOutput::setAmber()
{
    myLED.redLED(0);
    myLED.amberLED(1);
    myLED.greenLED(0);
}

inline HardwareOutput::setGreen()
{
    myLED.redLED(0);
    myLED.amberLED(0);
    myLED.greenLED(1);
}

inline HardwareOutput::setFlashing()
{
    myLightControl = Off::GetInstance();
    myLightControl->Handle();
    for (int i = 0; i < 5000; i++)
    {
    }
    myLightControl = Amber::GetInstance();
    myLightControl->Handle();
}

inline HardwareOutput::off()
{
    myLED.redLED(0);
    myLED.amberLED(0);
    myLED.greenLED(0);
}