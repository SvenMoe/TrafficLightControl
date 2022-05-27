/** @file GPIO.cpp*/

#include "GPIO.h"

GPIO::GPIO(UINT32 startadress) :  MODER(*(volatile UINT32*)startadress), OTYPER(*(&MODER+1)), OSPEEDR(*(&MODER+2)), PUPDR(*(&MODER+3)), IDR(*(&MODER+4)), BSRR(*(&MODER+6)), RCC_AHB1ENR(*(volatile UINT32*)0x40023830)
{

  if(startadress == 0x40020000)
  {
    RCC_AHB1ENR |= (1ul << 0); // enable Port A Clock
  }
  else if(startadress == 0x40020400)
  {
    RCC_AHB1ENR |= (1ul << 1); // enable Port B Clock
  }
  else if(startadress == 0x40020800)
  {
    RCC_AHB1ENR |= (1ul << 1); // enable Port C Clock
  }
  else if(startadress == 0x40020C00)
  {
    RCC_AHB1ENR |= (1ul << 1); // enable Port D Clock
  }
  else if(startadress == 0x40021000)
  {
    RCC_AHB1ENR |= (1ul << 1); // enable Port E Clock
  }
  else if(startadress == 0x40021C00)
  {
    RCC_AHB1ENR |= (1ul << 1); // enable Port H Clock
  }
  
  OTYPER = 0ul;  // use Output as an Push-Pull
  OSPEEDR = 0ul; // use 2 MHz Low speed
  PUPDR = 0ul;   // No pull-up, no pull-down
}

void GPIO::select_datadirection(UINT8 pin, bool direction)
{
  if(direction) // direction = true: Pin is an output (01 in MODER register)
  {
    // Write 01 at correct position in MODER register
    MODER &= ~(1ul << (pin*2+1));
    MODER |= (1ul << pin*2); 
  }
  else          // direction = false: Pin is an output (00)
  {
    // Write 00 at correct position in MODER register
    MODER &= ~(3ul << (pin*2));
  }
    
}

void GPIO::set_bit(UINT32 pin)
{
  BSRR &= ~(1ul << (pin+16)); // deletes BR Bit
  BSRR |= (1ul << pin);       // sets BS Bit 
}

void GPIO::delete_bit(UINT32 pin)
{
  BSRR &= ~(1ul << pin);     // deletes BS Bit
  BSRR |= (1ul << (pin+16)); // sets BR Bit
}

void GPIO::toggle_bit(UINT32 pin)
{
  // If the corresponding Bit in the IDR register is high the bit will be reseted.
  // Otherwise the Bit will be set.
  if(((IDR & (1ul << pin)) >> pin) == 1)
  {
    BSRR &= ~(1ul << pin);     // deletes BS Bit
    BSRR |= (1ul << (pin+16)); // sets BR Bit
  }
  else
  {
    BSRR &= ~(1ul << (pin+16)); // deletes BR Bit
    BSRR |= (1ul << pin);       // sets BS Bit 
  }
}

void GPIO::write_port(UINT32 data)
{
  UINT32 bsrr_variable = 0x00000000;
  for (UINT32 pin = 0; pin<=15; pin+=1)
  {
    //Wenn an dem ausgewaehlten Pin eine 1 steht soll der Output gesetzt werden
    if(((data & (1ul << pin)) >> pin) == 1)
    {
      bsrr_variable &= ~(1ul << (pin+16));
      bsrr_variable |= 1ul << pin; //setze Output an Position des Pins (Low-Byte)
    }
    //Wenn an dem ausgewaehlten Pin eine 0 steht soll der Output zurueckgesetzt werden
    else if(((data & (1ul << pin)) >> pin) == 0)
    {
      bsrr_variable &= ~(1ul << (pin));
      bsrr_variable |= 1ul << (pin+16); //ruecksetze Output an Position des Pins (High-Byte)
    }
  }
  BSRR = bsrr_variable;
}