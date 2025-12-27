/*Reescreva o exercício anterior utilizando a estrutura horário 
(contendo hora, minuto e segundo) e passando a estrutura por 
referência. Utilize o seguinte protótipo da função:
void converteHorario(int total_segundos, Horario* hor)*/


#include<stdio.h>
#include<stdlib.h>

typedef struct{

int hora, min, seg;

} Horario;

void converteHorario(int total_segundos, Horario* hor){

    hor->hora = total_segundos / 3600;
    hor->min = total_segundos / 60 % 60;
    hor->seg = total_segundos % 60;

    printf("%02d:%02d:%02d", hor->hora, hor->min, hor->seg);

    return;
}

int main(){

int entrada;
Horario time;

    printf("Digite um número em segundos para formatar:");
    scanf("%d", &entrada);
    converteHorario(entrada, &time);

    return 0;
}