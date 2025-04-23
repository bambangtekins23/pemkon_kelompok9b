#include "MAX30102.h"
#include "config.h"

static I2C_HandleTypeDef* p_i2c = NULL;

static int simulate_hr_data(void)
{
    return 75; // Detak jantung normal
}

static int simulate_spo2_data(void)
{
    return 97; // SpO2 normal
}

void MAX30102_Init(I2C_HandleTypeDef* hi2c)
{
    p_i2c = hi2c;
}


int MAX30102_ReadHeartRate(void)
{
    int value = simulate_hr_data();
    if ((value < 20) || (value > 250))
    {
        return SENSOR_ERROR_CODE;
    }
    return value;
}

int MAX30102_ReadSpO2(void)
{
    int value = simulate_spo2_data();
    if ((value < 70) || (value > 100))
    {
        return SENSOR_ERROR_CODE;
    }
    return value;
}
