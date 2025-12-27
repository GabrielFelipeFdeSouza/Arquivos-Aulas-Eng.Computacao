/*Escreva uma função que receba como parâmetro duas matrizes, A e B, 
e seus tamanhos. A função deve retornar o ponteiro para uma matriz C, 
em que C é o produto da multiplicação da matriz A pela matriz B. Se a 
multiplicação das matrizes não for possível, retorne um ponteiro nulo*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int **multiplicaMatrizes(int *linhas, int *colunas, int matriz1[][colunas[0]], int matriz2[][colunas[1]]){

    //Aloca a matriz de saida:
    int **matriz3 = (int **)malloc(linhas[0] * sizeof(int *));
    for (int i = 0; i < linhas[0]; i++) {
        matriz3[i] = (int *)calloc(colunas[1], sizeof(int));
    }

    if(colunas[0] != linhas[1]){
        return NULL;
    } //Saida pela condição de não multiplicação

    //Calculo da multiplicação:
    for (int l = 0; l < linhas[0]; l++){
        for (int c = 0; c < colunas[1]; c++){
            for(int c2 = 0; c2 < colunas[0]; c2++){

                matriz3[l][c] += matriz1[l][c2] * matriz2[c2][c];

            }
        }
    }

    return matriz3;
}


int main(){

    int linhas[2], colunas[2], **ptr;

    //Entrada das matrizes:
    for(int s = 0; s < 2; s++){
    printf("\nDigite a quantidade de linhas da matriz %d:", s+1);
    scanf("%d", &linhas[s]);
    setbuf(stdin, NULL);
    printf("\nDigite a quantidade de colunas da matriz %d:", s+1);
    scanf("%d", &colunas[s]);
    setbuf(stdin, NULL);
    }
    

    int matriz1[linhas[0]][colunas[0]];
    int matriz2[linhas[1]][colunas[1]];

    for (int l = 0; l < linhas[0]; l++){
        for (int c = 0; c < colunas[0]; c++){
            printf("\nDigte o elemento [%d][%d]:", l + 1, c + 1);
            scanf("%d", &matriz1[l][c]);
            setbuf(stdin, NULL);
        }
    } //Entrada dos elemetos da matriz 1

        for (int l = 0; l < linhas[1]; l++){
        for (int c = 0; c < colunas[1]; c++){
            printf("\nDigte o elemento [%d][%d]:", l + 1, c + 1);
            scanf("%d", &matriz2[l][c]);
            setbuf(stdin, NULL);
        }
    } //Entrada dos elemetos da matriz 2

    ptr = multiplicaMatrizes(linhas, colunas, matriz1, matriz2); //Chamada da função

    //Exibição saida:
    if(ptr == NULL){
        printf("Multiplicação impossível!\n");
    } else {
        printf("Resultado da multiplicação:\n");
        for (int l = 0; l < linhas[0]; l++) {
            for (int c = 0; c < colunas[1]; c++) {
                printf("%d ", ptr[l][c]);
            }
            printf("\n");
        }

        // Libera a memória da matriz3
        for (int i = 0; i < linhas[0]; i++) {
            free(ptr[i]);
        }
        free(ptr);
    }

    return 0;
}