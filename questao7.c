//Uma cor pode ser representada pela combinação de 4 valores de intensidade para R (Red), G (Green), B (Blue) e A (Alpha). 
//Esses valores podem ser guardados em um registro com 4 inteiros de 8 bits (0-255) ou por um valor inteiro de 32 bits codificado
//com os 4 valores. Construa uma união para armazenar uma cor. Em seguida construa uma função para ler do usuário uma cor no 
//formato RGBA e outra para ler uma cor no formato inteiro de 32 bits. Ambas as funções devem receber o endereço de uma variável 
//do tipo cor e modificar a variável recebida, sem retornar valor.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdint.h>


typedef union {
    struct {
        uint8_t r; //unsigned char = uint8_t (só por causa da biblioteca)
        uint8_t g; 
        uint8_t b; 
        uint8_t a; 
    } rgba;
    uint32_t int32; 
} Cor;

void lerCorRGBA(Cor *cor) {
    printf("Digite uma cor no formato RGBA (R G B A): ");
    scanf("%hhu %hhu %hhu %hhu", &cor->rgba.r, &cor->rgba.g, &cor->rgba.b, &cor->rgba.a);
}

void lerCorInt32(Cor *cor) {
    printf("Digite uma cor no formato Int32: ");
    scanf("%u", &cor->int32);
}

void exibirCorRGBA(const Cor *cor) {
    printf("Cor no formato RGBA: %hhu %hhu %hhu %hhu\n", cor->rgba.r, cor->rgba.g, cor->rgba.b, cor->rgba.a);
}

void exibirCorInt32(const Cor *cor) {
    printf("Cor no formato Int32: %u\n", cor->int32);
}

int main() {
    Cor minhaCor;

    lerCorRGBA(&minhaCor);
    exibirCorRGBA(&minhaCor);
    exibirCorInt32(&minhaCor);

    lerCorInt32(&minhaCor);
    exibirCorRGBA(&minhaCor);
    exibirCorInt32(&minhaCor);

return (0);
}