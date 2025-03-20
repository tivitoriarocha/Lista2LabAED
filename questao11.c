//Crie um registro Imagem que contenha campos para nome, altura, largura e tipo, sendo o tipo um dos seguintes valores: JPG, PNG ou BMP. 
//Use uma enumeração para guardar o tipo da imagem. No programa principal inicialize uma variável do tipo Imagem e passe seu endereço
//para uma função Detalhes. A função deve receber o endereço de uma Imagem e exibir os seus dados no formato do exemplo abaixo.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//Código diretamente do Chat!

// Definição da enumeração para o tipo da imagem
typedef enum {
    JPG,
    PNG,
    BMP
} TipoImagem;

// Definição do registro Imagem
typedef struct {
    char nome[50];
    int altura;
    int largura;
    TipoImagem tipo;
} Imagem;

// Função para exibir os detalhes da imagem
void Detalhes(const Imagem *img) {
    const char *tipoStr;
    switch (img->tipo) {
        case JPG:
            tipoStr = "JPG";
            break;
        case PNG:
            tipoStr = "PNG";
            break;
        case BMP:
            tipoStr = "BMP";
            break;
        default:
            tipoStr = "Desconhecido";
            break;
    }

    printf("A imagem \"%s\" com tamanho %dx%d tem formato %s.\n", img->nome, img->largura, img->altura, tipoStr);
}

int main() {
    // Inicialização de uma variável do tipo Imagem
    Imagem minhaImagem;
    strcpy(minhaImagem.nome, "backg.png");
    minhaImagem.altura = 1080;
    minhaImagem.largura = 1920;
    minhaImagem.tipo = PNG;

    // Passando o endereço da imagem para a função Detalhes
    Detalhes(&minhaImagem);

return (0);
}