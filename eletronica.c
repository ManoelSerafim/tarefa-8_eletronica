#include <stdio.h>
#include "pico/stdlib.h"
#include "include/led.h"
#include "include/buzzer.h"
#include "include/botao.h"


int main()
{
    // Inicializa o sistema de entrada/saída padrão
    stdio_init_all();
    // Inicializa os LEDs
    init_leds();
    // Inicializa o buzzer no pino definido
    init_buzzer(BUZZER_PIN);
    // Configura o botão A
    setup();

    // Loop principal
    while (true) {
        if(gpio_get(BUTTON_A) == 0) {   
        // Liga o LED vermelho e emite um beep
        red_led_on();
        beep(BUZZER_PIN, 200); // Beep de 500ms
        } else {

        // Liga o LED verde e emite um beep
        red_led_off();
        }

    }

    return 0;

}