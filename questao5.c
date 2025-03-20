//5º Modifique o programa abaixo para que ele mostre o número 10 na tela usando o ponteiro q:

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int x, *p,**q;

    p = &x;
    q = &p;
    x = 10;
    //p = &x;
    //Se p corresponte ao endereço de memória de x, logo *p é igual ao valor de x (10).
    //q = &p; //Ponteiro para o ponteiro de p.
    //x = 10;
    //**q = *p = x
    //*q=&p
    //q = endereço de memória de p

    printf("%d\n", **q);
    
    //printf("%d\n",(void*)q);
    //Diante da explicação lá em cima é possível perceber como chegei a conclusão que **q é igual a x, logo 10. 
    //Mas, entendi ser impossível encontrar o valor "dez" printando apenas q, sem acrescentar outra viriável ao código e atrubuir o valor de **q.

    int numero = **q;
    printf("%d\n", numero);
    
return (0);
}