//4º Construa duas funções que realizem o incremento de um número em uma unidade.
//A função Mais deve receber um número inteiro através de um ponteiro. 
//A função Incrementa deve receber um valor inteiro, sem usar ponteiros, 
//e retornar o valor incrementado em uma unidade.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

void Mais(int *numero){
    (*numero)++;
    printf("Resultado após Mais: %d\n", *numero);
}

void Incrementa(int numero){
    printf("Resultado após Incrementa: %d\n", numero + 1);
}

int main(){
    setlocale(LC_ALL,"Portuguese");

    int a = 0;

    printf("Informe o valor inteiro a ser incrementado: ");
    scanf("%d",&a);

    Mais(&a);

    Incrementa(a);

return(0);
}