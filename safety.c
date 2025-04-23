#include "safety.h"
#include "buzzer.h"
#include "config.h"

void Safety_CheckAndHandle(int heartRate, int spO2, int chestExpansion)
{
    if ((heartRate == SENSOR_ERROR_CODE) ||
        (spO2 == SENSOR_ERROR_CODE) ||
        (chestExpansion == SENSOR_ERROR_CODE))
    {
        Buzzer_On();
        return;
    }

    if ((heartRate > HR_THRESHOLD) ||
        (spO2 < SPO2_THRESHOLD) ||
        (chestExpansion < BREATH_EXPANSION_THRESHOLD))
    {
        Buzzer_On();
    }
    else
    {
        Buzzer_Off();
    }
}
