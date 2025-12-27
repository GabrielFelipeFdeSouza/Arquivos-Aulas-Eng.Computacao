/*Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em
seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o
imprima*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int *vetor;
    int tamanho = 0;

    printf("Qual o tamanho do vetor que voce deseja alocar:");
    scanf("%d", &tamanho); //Entrada do tamanho do vetor pelo usuario

    vetor = (int*) calloc(tamanho, sizeof(int)); //Aloca memmoria para tamanho de vetores

    for(int r = 0; r < tamanho; r++){
        printf("Digite o valor do vetor na posicao %d:", r);
        scanf("%d", &vetor[r]);
    } //Entrada das posicoes pelo usuario

    for(int y = 0; y < tamanho; y++){
        printf("\nvetor[%d] = %d",y , vetor[y]);
    } //Exibe as posicoes e contudos do vetor

    free(vetor); //Libera memoria do vetor

    return 0;
}