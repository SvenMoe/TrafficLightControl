#include "TrafficLight.h"
#include <iostream>
#include "SoftwareOutput.h"
#include "HardwareOutput.h"
#include "SoftwareInput.h"
#include "HardwareInput.h"
#include "OutputFormat.h"

using namespace std;

//#define _HARDWAREPRESENT

int main()
{
#ifdef _HARDWAREPRESENT
  OutputFormat *myOutputFormat = HardwareOutput::GetInstance();
  InputFormat *myInputFormat = HardwareInput::GetInstance();
#else
  OutputFormat *myOutputFormat = SoftwareOutput::GetInstance();
  InputFormat *myInputFormat = SoftwareInput::GetInstance();
#endif

  TrafficLight myTrafficLight(active::GetInstance(myOutputFormat, myInputFormat), myOutputFormat, myInputFormat);
  do
  {

  } while (myTrafficLight.Handle());

  return 0;
}
