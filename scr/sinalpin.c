#include "include/sinalpin.h"

void sinalpin_init() {
    gpio_init(SINAL_PIN);
    gpio_set_dir(SINAL_PIN, GPIO_IN);
    gpio_pull_down(SINAL_PIN); // Use pull-down se necessário
}

bool sinal_detected() {
    // O sensor ativa nível alto quando chama detectada
    return gpio_get(SINAL_PIN) == 1;
}