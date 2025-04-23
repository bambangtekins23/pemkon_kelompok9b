#include "piezosensor.h"
#include "config.h"

static ADC_HandleTypeDef* p_adc = NULL;
static int simulate_expansion_data(void)
{
    return 350; // Ekspansi dada saat napas
}

void PiezoSensor_Init(ADC_HandleTypeDef* hadc)
{
    p_adc = hadc;
}


int PiezoSensor_ReadExpansion(void)
{
    int value = simulate_expansion_data();
    if ((value < 0) || (value > 1023))
    {
        return SENSOR_ERROR_CODE;
    }
    return value;
}
