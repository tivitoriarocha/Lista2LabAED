//1º Defina um registro que descreve um peixe. O registro deve incluir o tipo (string), o peso (ponto-flutuante) e 
//o comprimento (inteiro) do peixe. Em seguida mostre:
//a) Como criar uma variável de tipo peixe
//b) Como criar um ponteiro para uma variável de tipo peixe.


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

typedef struct 
{
    char tipo[35]; 
    float peso; 
    int comprimento; 
}peixe;



int main(){
    setlocale(LC_ALL,"Portuguese");

    peixe p1[22];
    peixe*ponteiro = p1; 

    printf("Para cadastrar um novo peixe informe seu tipo: ");
    //fgets(ponteiro->tipo,sizeof(ponteiro->tipo),stdin);
    scanf("%s", &ponteiro->tipo);
    printf("Informe o peso: ");
    scanf("%f", &ponteiro->peso);
    printf("Informe seu comprimento: ");
    scanf("%d", &ponteiro->comprimento);

    printf("\nO tipo do peixe eh: %s",p1->tipo);
    printf("\nO peso do peixe eh: %.2f Kg",p1->peso);
    printf("\nO compimento do peixe eh: %u cm",p1->comprimento);

return(0);
}


