/*Crie um programa que contenha um vetor de inteiros de tamanho 5.
Utilizando aritmética de ponteiros, leia os dados do teclado e exiba seus
valores multiplicado por 2. Em seguida, exiba o endereço de memória das
posições que contém valores pares.*/

#include<stdio.h>
#include<stdlib.h>

int main(){


    int vetor[5];

    for(int s = 0; s < 5; s++){
        printf("Digite o valor %d do vetor:", s);
        scanf("%d", &vetor[s]);
    }

    for(int n = 0; n < 5; n++){
        printf("%d", vetor[n]*2);
        if(vetor[n] %2 == 0)
            printf(" - %p", &vetor[n]);
        printf("\n");
    }

    return 0;
}