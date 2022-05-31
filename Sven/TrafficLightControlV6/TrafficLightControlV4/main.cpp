#include "TrafficLight.h"
#include <iostream>

using namespace std;


//#define _HARDWAREPRESENT;

int main()
{
  #ifdef _HARDWAREPRESENT
	OutputFormat* myOutputFormat = new HardwareOutput;	
	#else
	OutputFormat* myOutputFormat = new SoftwareOutput;
	#endif

  TrafficLight myTrafficLight(active::GetInstance(), myOutputFormat);
  do
  {
  
  }
  while(myTrafficLight.Handle());

  return 0;
}

