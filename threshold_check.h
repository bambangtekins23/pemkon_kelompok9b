#ifndef THRESHOLD_CHECK_H
#define THRESHOLD_CHECK_H

#include <stdint.h>

uint8_t IsHeartRateCritical(uint16_t bpm);
uint8_t IsSpO2Critical(uint8_t spo2);
uint8_t IsRespRateCritical(uint16_t rate);

#endif
