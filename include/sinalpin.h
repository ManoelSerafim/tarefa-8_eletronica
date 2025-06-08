#ifndef sinalpin_h
#define sinalpin_h

#include "hardware/gpio.h"
#define SINAL_PIN 8 // Pino do sinal

void sinalpin_init();

bool sinal_detected();

#endif 