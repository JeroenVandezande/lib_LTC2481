#ifndef LIB_LTC2481_LIBRARY_H
#define LIB_LTC2481_LIBRARY_H

#include <stdint.h>
#include <stdbool.h>
#include "LL_i2c.h"

enum LTC2481_AddressPinState_t {LTC2481_AddressPinState_Low, LTC2481_AddressPinState_Floating, LTC2481_AddressPinState_High};

struct LTC2481_t
  {
	//PUBLIC INSTANCE MEMBERS
	uint8_t I2CAddress;
	//points to a function to handle the I2C writes
	I2CMaster_WriteMethod_t i2cWriteDataMethod;
  };

int LTC2481_Init(struct LTC2481_t* instance, enum LTC2481_AddressPinState_t CA0, enum LTC2481_AddressPinState_t CA1, float referenceVoltage);

#endif //LIB_LTC2481_LIBRARY_H
