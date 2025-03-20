//Declare um registro "Tigela" com os campos estado (cheia ou vazia) e tipo de alimento (sopa ou canja). 
//Crie uma função "Fome" que recebe um ponteiro para uma Tigela e altera o seu estado para "vazia". 
//Na função principal crie uma tigela cheia, crie um ponteiro que aponta para essa tigela e então mostre como a 
//tigela estava antes da janta. Depois chame a função Fome com o ponteiro que aponta para a tigela e ao fim mostre a tigela depois da janta.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct {
    char estado[10]; 
    char tipoDoAlimento[10]; 
} Tigela;

void Fome(Tigela *tigela1) {
    strcpy(tigela1->estado, "vazia");
}

int main() {
    Tigela minhaTigela = {"cheia", "canja"};

    Tigela *ponteiroTigela = &minhaTigela;

    printf("Antes da janta:\n");
    printf("Estado: %s\n", minhaTigela.estado);
    printf("Tipo de alimento: %s\n", minhaTigela.tipoDoAlimento);

    Fome(ponteiroTigela);

    printf("\nDepois da janta:\n");
    printf("Estado: %s\n", minhaTigela.estado);
    printf("Tipo de alimento: %s\n", minhaTigela.tipoDoAlimento);

return (0);
}