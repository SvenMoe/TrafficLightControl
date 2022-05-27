/** @file GPIO.h*/

#ifndef GPIO_H
#define GPIO_H

#include "regtypes.h"
#include <iostream>

using namespace std;

/**
 *  The class GPIO serves as an interface to read inputs and manipulate outputs 
 *  of the STM board.
 */
class GPIO
{
private:
    volatile UINT32& MODER;             ///< Pointer for adressing the MODER register
    volatile UINT32& OTYPER;            ///< Pointer for adressing the OTYPER register
    volatile UINT32& OSPEEDR;           ///< Pointer for adressing the OSPEEDR register
    volatile UINT32& PUPDR;             ///< Pointer for adressing the PUPDR register
    volatile UINT32& IDR;               ///< Pointer for adressing the IDR register
    volatile UINT32& BSRR;              ///< Pointer for adressing the BSRR register
    volatile UINT32& RCC_AHB1ENR;       ///< Pointer for adressing the RCC_AHB1ENR register
 
public:
/**
 *  @brief Configuration of the desired port. Each object instantiated from the class references to the selected Port (e.g. GPIOA, GPIOB ?). 
 *  @brief Activation of the GPIO clock for the corresponding register.
 *  @param startadress: identifies the GPIO-Port
 *  @return None
 */
  GPIO(UINT32 startadress);
  
/**
 *  @brief Sets the data direction (input/output) for each pin.
 *  @param pin identifies the GPIO-Pin
 *  @param direction identifies the direction of the Pin
 *  @return None
 */
  void select_datadirection(UINT8 pin, bool direction);
  
/**
 *  @brief Sets an individual bit of a port.
 *  @param pin identifies the GPIO-Pin
 *  @return None
 */
  void set_bit(UINT32 pin);
  
/**
 *  @brief Deletes an individual bit of a port.
 *  @param pin identifies the GPIO-Pin
 *  @return None
 */
  void delete_bit(UINT32 pin);
  
/**
 *  @brief Inverts (toggle) an individual bit of a port.
 *  @param pin identifies the GPIO-Pin
 *  @return None
 */
  void toggle_bit(UINT32 pin);
  
/**
 *  @brief Simultaneous reading of all bits of a port.
 *  @param None
 *  @return data from the port
 */
  UINT32 read_port()    { return IDR; };
  
/**
 *  @brief Simultaneous writing of all bits of a port.
 *  @param data to write to the port
 *  @return None
 */
  void write_port(UINT32 data);
};

#endif //GPIO_H