#ifndef MAX30102_H
#define MAX30102_H

#include "stm32f4xx_hal.h"
#include "stdint.h"
#include "config.h"

void MAX30102_Init(I2C_HandleTypeDef* hi2c);
int MAX30102_ReadHeartRate(void);
int MAX30102_ReadSpO2(void);


#endif
