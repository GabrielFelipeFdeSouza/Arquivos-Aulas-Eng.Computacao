/*Faça uma função que receba um inteiro N como parâmetro. Calcule e retorne o resultado da seguinte série S:
S = 2/4 + 5/5 + 10/6 + N^2 + 1 / N + 3*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float serie(int n){

    if (n == 1){
        return 0.5;
    } //Caso base

    return ((pow(n, 2) + 1) / (n + 3)) + serie(n - 1); //Formula
} //Função recursiva que calcula a série

int main()
{
    int n = 0;

    printf("Digite um n para calcular a série:");
    scanf("%d", &n); //Entrada de dados

    printf("O valor da serie é:%.2f\n", serie(n)); //Saida
    return 0;
}