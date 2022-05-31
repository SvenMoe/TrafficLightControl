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

inline SoftwareOutput::setRed()
{
    cout << "RED led on!" << endl;
}

inline SoftwareOutput::setRedAmber()
{
    cout << "REDAMBER led on!" << endl;
}

inline SoftwareOutput::setAmber()
{
    cout << "AMBER led on!" << endl;
}

inline SoftwareOutput::setGreen()
{
    cout << "GREEN led on!" << endl;
}

inline SoftwareOutput::setFlashing()
{
    for(i=0; i<1000000; i++){}
    cout << "AMBER led on!" << endl;
    for(i=0; i<1000000; i++){}
    cout << "AMBER led off!" << endl;

}

inline SoftwareOutput::off()
{
    cout << "All leds off!" << endl;
}