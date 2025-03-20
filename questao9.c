//Declare um registro Horário com os campos horas e minutos. Crie uma função MostrarHorario que deve receber um ponteiro para um Horário 
//e mostrá-lo no formato HH:MM. Na função principal, declare uma variável do tipo Horário e um ponteiro que aponta para ela. Peça que o 
//usuário digite o horário atual e guarde-o na variável. Usando o ponteiro, incremente o horário recebido em uma hora e em seguida mostre 
//o horário corrigido com MostrarHorario.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct {
    int horas;
    int minutos;
} Horario;

void MostrarHorario(Horario *horario) {
    (*horario).horas++;
    if (horario->horas >= 24) {
        horario->horas = 0;
    }

    printf("%d:%d\n", (*horario).horas, horario->minutos);
}



int main() {
    setlocale(LC_ALL, "Portuguese"); 

    Horario meuHorario;
    Horario *ponteiroHorario = &meuHorario;

    printf("Informe o horário atual (HH:MM): ");
    scanf("%d:%d", &meuHorario.horas, &meuHorario.minutos);

    if (meuHorario.horas < 0 || meuHorario.horas >= 24 || meuHorario.minutos < 0 || meuHorario.minutos >= 60) {
        printf("Horário inválido!\n");
        return (1);
    }

    printf("Seu relógio está atrasado, o horário correto é ");
    MostrarHorario(ponteiroHorario);

return (0);
}