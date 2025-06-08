#include <stdio.h>
#include "pico/stdlib.h"
#include "include/led.h"
#include "include/buzzer.h"
#include "include/botao.h"
#include "include/sinalpin.h"

void comportamento_sensor() {
    static bool alerta_ativo = false;
    if (sinal_detected()) {
        red_led_on();
        buzzer_alert();
        printf("Chama detectada!\n");
        alerta_ativo = true;
    } else if (alerta_ativo) {
        red_led_off();
        buzzer_off(BUZZER_PIN);
        alerta_ativo = false;
    }
}

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
    // Inicializa o pino do sinal
    sinalpin_init();

    // Loop principal
    while (1) {
        comportamento_sensor();
        sleep_ms(100);
    }
        return 0;

}