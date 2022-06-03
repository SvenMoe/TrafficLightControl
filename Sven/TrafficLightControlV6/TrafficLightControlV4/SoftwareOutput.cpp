/** @file SoftwareOutput.cpp*/

#include "SoftwareOutput.h"

SoftwareOutput *SoftwareOutput::Instance = NULL;

SoftwareOutput *SoftwareOutput::GetInstance()
{
  if (Instance == NULL)
  {
    Instance = new SoftwareOutput();
  }
  return Instance;
}

inline void SoftwareOutput::setRed()
{
    cout << "RED led on!" << endl;
}

inline void SoftwareOutput::setRedAmber()
{
    cout << "REDAMBER led on!" << endl;
}

inline void SoftwareOutput::setAmber()
{
    cout << "AMBER led on!" << endl;
}

inline void SoftwareOutput::setGreen()
{
    cout << "GREEN led on!" << endl;
}

inline void SoftwareOutput::off()
{
    cout << "All leds off!" << endl;
}