#include "TrafficLight.h"
#include <iostream>
#include "SoftwareOutput.h"
#include "HardwareOutput.h"
#include "OutputFormat.h"

using namespace std;

//#define _HARDWAREPRESENT

int main()
{
#ifdef _HARDWAREPRESENT
  OutputFormat *myOutputFormat = HardwareOutput::GetInstance();
#else
  OutputFormat *myOutputFormat = SoftwareOutput::GetInstance();
#endif

  TrafficLight myTrafficLight(active::GetInstance(myOutputFormat), myOutputFormat);
  do
  {

  } while (myTrafficLight.Handle());

  return 0;
}
