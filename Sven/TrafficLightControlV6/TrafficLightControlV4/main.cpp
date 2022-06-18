// Mainpage in Doxygen
/** @mainpage Documentation of the Traffic Light Project
 *  @section  Introduction
 *            This C++ project realizes a common traffic light, like it is used on the streets.
 *            The project language is english.
 *
 *  @section  Basics
 *            There are two operating states: active and flashing (Standby). It can be switched between these states.
 *            But it also can be switched between Softwareinput and -output and Hardwareinput and -output.
 *            To switch between states there are state patterns. The concrete states of these state machines are implemented as singelton pattern.
 *  @author   Sven Moessner, Niklas Stein, Cedric Franke, Timo Kempf
 *  @date     June 2022
 */

#include "TrafficLight.h"
#include <iostream>
#include "SoftwareOutput.h"
#include "HardwareOutput.h"
#include "SoftwareInput.h"
#include "HardwareInput.h"
#include "OutputFormat.h"

using namespace std;

//If defined Hardware will be used to interact with the user.
//Otherwise the Software Interface will be used.
#define _HARDWAREPRESENT

int main()
{
#ifdef _HARDWAREPRESENT
  OutputFormat *myOutputFormat = HardwareOutput::GetInstance();
  InputFormat *myInputFormat = HardwareInput::GetInstance();
#else
  OutputFormat *myOutputFormat = SoftwareOutput::GetInstance();
  InputFormat *myInputFormat = SoftwareInput::GetInstance();
#endif

  //Continuous loop operating the traffic light
  TrafficLight myTrafficLight(active::GetInstance(myOutputFormat, myInputFormat), myOutputFormat, myInputFormat);
  do
  {

  } while (myTrafficLight.Handle());

  return 0;
}
