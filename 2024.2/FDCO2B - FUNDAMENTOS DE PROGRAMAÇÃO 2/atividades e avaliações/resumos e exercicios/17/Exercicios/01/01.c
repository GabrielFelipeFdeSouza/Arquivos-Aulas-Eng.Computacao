/*Escreva um programa que receba um número inteiro
representando a quantidade total de segundos e, usando
passagem de parâmetros por referência, converta a
quantidade informada de segundos em Horas, Minutos e
Segundos. Imprima o resultado da conversão no formato
HH:MM:SS. Utilize o seguinte protótipo da função:
void converteHora(int total_segundos, int* hora, int* min, int* seg)
*/

#include <stdio.h>
#include <stdlib.h>

void converteHora(int total_segundos, int *hora, int *min, int *seg){

    *hora = total_segundos / 3600;
    *min = total_segundos / 60 % 60;
    *seg = total_segundos % 60;

    printf("%02d:%02d:%02d", *hora, *min, *seg);

    return;
}

int main(){

    int entrada, hora, min, seg;

    printf("Digite um número em segundos para formatar:");
    scanf("%d", &entrada);
    converteHora(entrada, &hora, &min, &seg);

    return 0;
}
