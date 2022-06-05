/** @file HardwareInput.cpp*/

#include "HardwareInput.h"

HardwareInput *HardwareInput::Instance = NULL;

HardwareInput *HardwareInput::GetInstance()
{
  if (Instance == NULL)
  {
    Instance = new HardwareInput();
  }
  return Instance;
}

inline char HardwareInput::getButton()
{
  return myUserButton.getButton();

}