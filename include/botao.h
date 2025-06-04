#ifndef BOTAO_H
#define BOTAO_H

#include "pico/stdlib.h"
#include "hardware/gpio.h"

#define LED_BLUE 12   // GPIO conectado ao terminal azul do LED RGB
#define BUTTON_A 5    // GPIO conectado ao Botão A

void setup();
#endif // BOTAO_H