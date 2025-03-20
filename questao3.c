//3º Descubra o que acontece ao tentarmos acessar um ponteiro que contém um
//endereço inválido. Para isso tente mostrar o conteúdo apontado por um ponteiro
//recém-criado:

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>



int main(){
    setlocale(LC_ALL,"Portuguese");

    int *ponteiro;
    printf("Conteúdo do ponteiro: %d\n", *ponteiro);

    // No meu caso, ao rodar o código, ele apresentou um número (177444) que provavelmente
    //é um lixo de memória aleatório. Mas, em pesquisa, também descobri que outra resposta do sistema pode 
    //ser o segmentation fault. Ou seja, apresentaria um erro ao tentar acessar um endereço de memória inválido.

return(0);
}