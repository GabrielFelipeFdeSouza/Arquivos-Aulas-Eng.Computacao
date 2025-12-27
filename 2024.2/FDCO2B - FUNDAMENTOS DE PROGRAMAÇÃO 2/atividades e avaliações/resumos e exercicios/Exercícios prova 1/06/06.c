/*Escreva uma função para o cálculo do volume e da área de uma esfera em que ? = 3.1414592.
O valor do raio r deve ser passado por parâmetro, e os valores calculados devem ser retornados por referência.

A=4pir^2
V=4/3pir^3*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const float PI = 3.1415; //Const pi

void calculo(int raio, float *area, float *volume){

    *area = 4 * PI * pow(raio, 2);
    *volume = 4 * PI * pow(raio, 3) / 3;
    return;
} //Função que calcula pelo raio passado

int main(){
    int raio;
    float area, volume;

    printf("Digite o raio da esfera para calcular volume e raio");
    scanf("%d", &raio); //Entrada de dados

    calculo(raio, &area, &volume); //Calculo

    printf("A area é: %.2f e o volume é: %.2f", area, volume); //Saida
    return 0;
}
