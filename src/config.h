#ifndef CONFIG_H_
#define CONFIG_H_

#include <Arduino.h>

const uint32 ticks_per_second = 48e3;
const uint32 phases = 2e3;

const double lfoFrequency = 10;
const double lfoFactor = 0.25;

const uint8 polyphony = 10;

#endif
