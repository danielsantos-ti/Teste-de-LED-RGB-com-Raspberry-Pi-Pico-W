#include <stdio.h>
#include "pico/stdlib.h"

// Define os pinos
#define BOTAO 5
#define BUZZER 21
#define LED_VERDE 11
#define LED_AZUL 12
#define LED_VERMELHO 13

void init_perifericos() {
    // Configura os pinos dos LEDs e do buzzer como saída
    gpio_init(LED_VERDE);
    gpio_set_dir(LED_VERDE, GPIO_OUT);

    gpio_init(LED_AZUL);
    gpio_set_dir(LED_AZUL, GPIO_OUT);

    gpio_init(LED_VERMELHO);
    gpio_set_dir(LED_VERMELHO, GPIO_OUT);

    gpio_init(BUZZER);
    gpio_set_dir(BUZZER, GPIO_OUT);

    // Configura o botão como entrada com pull-up
    gpio_init(BOTAO);
    gpio_set_dir(BOTAO, GPIO_IN);
    gpio_pull_up(BOTAO);
}

void ligar_led(uint led_pin, const char *cor) {
    printf("Ligando LED %s...\n", cor);
    gpio_put(led_pin, 1);
    sleep_ms(1000);  // Liga o LED por 1 segundo
    gpio_put(led_pin, 0);
}

void emitir_sinal_buzzer() {
    printf("Emitindo sinal sonoro...\n");
    gpio_put(BUZZER, 1);
    sleep_ms(2000);  // Buzzer ligado por 2 segundos
    gpio_put(BUZZER, 0);
}

int main() {
    stdio_init_all();
    init_perifericos();

    printf("Sistema inicializado. Pressione o botão para iniciar o teste.\n");

    while (true) {
        if (gpio_get(BOTAO) == 0) {  // Botão pressionado
            printf("Botão pressionado! Iniciando teste...\n");

            // Liga cada LED e imprime a mensagem correspondente
            ligar_led(LED_VERDE, "verde");
            ligar_led(LED_AZUL, "azul");
            ligar_led(LED_VERMELHO, "vermelho");

            // Emite o sinal sonoro ao final
            emitir_sinal_buzzer();

            printf("Teste concluído. Aguardando novo acionamento...\n");
        }

        sleep_ms(100);  // Evita polling constante
    }

    return 0;
}
