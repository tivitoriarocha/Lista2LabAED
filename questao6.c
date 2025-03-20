#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    char letra= 'A';

    char*ponteiro = &letra;
    *ponteiro = 'B';

    printf("%c\n", letra);
    printf("%c\n",*ponteiro);
    

return (0);
}