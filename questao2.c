//2º Construa uma função que receba um peixe e exiba o seu conteúdo.
//a) Faça uma versão utilizando um parâmetro tipo peixe
//b) Faça uma versão utilizando um parâmetro tipo ponteiro para peixe


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    char tipo[30];
    float peso;
    int comprimento;
} peixe;

void receberDadosPeixe(peixe p) {
    printf("Informe o tipo do peixe: ");
    scanf("%s", p.tipo);
    printf("Informe o peso: ");
    scanf("%f", &p.peso);
    printf("Informe o comprimento: ");
    scanf("%d", &p.comprimento);

    printf("\nDados do peixe:\n");
    printf("Tipo: %s\n", p.tipo);
    printf("Peso: %.2f Kg\n", p.peso);
    printf("Comprimento: %d cm\n", p.comprimento);
}

void receberDadosPeixePonteiro(peixe *p) {
    printf("Informe o tipo do peixe: ");
    scanf("%s", p->tipo);
    printf("Informe o peso: ");
    scanf("%f", &p->peso);
    printf("Informe o comprimento: ");
    scanf("%d", &p->comprimento);

    printf("\nDados do peixe:\n");
    printf("Tipo: %s\n", p->tipo);
    printf("Peso: %.2f Kg\n", p->peso);
    printf("Comprimento: %d cm\n", p->comprimento);
}

int main() {
    peixe p1;
    peixe p2;

    receberDadosPeixe(p1);

    receberDadosPeixePonteiro(&p2);

return(0);
}


