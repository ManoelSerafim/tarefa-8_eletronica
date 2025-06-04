#include "include/botao.h" 
 

void setup() {
    // Configuração do GPIO do Botão B como entrada com pull-up interno
    gpio_init(BUTTON_A);
    gpio_set_dir(BUTTON_A, GPIO_IN);
    gpio_pull_up(BUTTON_A);  
}