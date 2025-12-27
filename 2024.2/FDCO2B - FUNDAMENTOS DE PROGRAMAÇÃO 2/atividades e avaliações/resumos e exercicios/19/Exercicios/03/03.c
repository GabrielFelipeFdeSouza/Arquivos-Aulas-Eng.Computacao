/*Crie um programa que contenha uma matriz (3x3) de float.
Imprima o endereço de cada posição dessa matriz.*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    float matriz[3][3];

    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 3; j++){

            printf("Elemento [%d][%d] tem endereço:%p\n", i, j, &matriz[i][j]);
        }
    } //For alinhado que exibe os elementos

    return 0;
}