#include "threshold_check.h"

uint8_t IsHeartRateCritical(uint16_t bpm) {
    return (bpm < 50 || bpm > 120);
}

uint8_t IsSpO2Critical(uint8_t spo2) {
    return (spo2 < 94);
}

uint8_t IsRespRateCritical(uint16_t rate) {
    return (rate < 10 || rate > 24);
}
