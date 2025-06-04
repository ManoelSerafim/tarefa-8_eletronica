#ifndef LED_H
#define LED_H

#include <stdbool.h>

// Pino do LED azul
#define BLUE_LED_PIN 12

// Pino do LED vermelho
#define RED_LED_PIN 13

// Pino do LED verde
#define GREEN_LED_PIN 11

void init_leds();

void red_led_on();

void red_led_off();


#endif // LED_H