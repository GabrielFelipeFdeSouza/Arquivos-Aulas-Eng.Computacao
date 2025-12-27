/*Crie um programa que contenha um vetor float (tamanho 10). Imprima o endereço de cada posição desse vetor.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vetor[10];

    for (int s = 0; s < 10; s++)
    {
        printf("O endereço do elemento %d do vetor é: %p\n", s, &vetor[s]);
    } // For de exibição dos endereços

    return 0;
}