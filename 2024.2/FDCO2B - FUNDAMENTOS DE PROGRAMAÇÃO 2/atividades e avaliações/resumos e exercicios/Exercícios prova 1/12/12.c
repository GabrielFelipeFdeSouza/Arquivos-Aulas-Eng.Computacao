/*Crie uma função recursiva que retorne a média dos elementos de um vetor de inteiros.*/

#include <stdio.h>
#include <stdlib.h>

float fazer_media(int vetor[], int tamanho, int divisor){

    if (tamanho == 0)
    {
        return (float)vetor[0] / divisor;
    } // Caso base
    return (float)vetor[tamanho] / divisor + fazer_media(vetor, tamanho - 1, divisor); // retorno e recursão
}

int main(){
    int vetor[15] = {24, -2, 5, -8, 0, 5, -6, 41, -20, 1, 1, 8, 3, 3, 3};
    float media;

    media = fazer_media(vetor, sizeof(vetor) / sizeof(vetor[0]), sizeof(vetor) / sizeof(vetor[0])); // Chamada da função recursiva
    printf("A média é: %.2f", media);                                                               // Saida

    return 0;
}