#ifndef PIEZOSENSOR_H
#define PIEZOSENSOR_H

#include "stm32f4xx_hal.h"
#include "stdint.h"
#include "config.h"

void PiezoSensor_Init(ADC_HandleTypeDef* hadc);
int PiezoSensor_ReadExpansion(void);


#endif
