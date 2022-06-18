/** @file SoftwareInput.cpp*/

#include "SoftwareInput.h"

SoftwareInput *SoftwareInput::Instance = NULL;

SoftwareInput *SoftwareInput::GetInstance()
{
  if (Instance == NULL)
  {
    Instance = new SoftwareInput();
  }
  return Instance;
}

inline char SoftwareInput::getButton()
{
  cin >> button;
  return button;
  
}