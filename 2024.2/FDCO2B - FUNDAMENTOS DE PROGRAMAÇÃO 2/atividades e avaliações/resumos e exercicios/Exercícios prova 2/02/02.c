/*Escreva uma função que receba como parâmetro uma matriz A contendo N linhas
e N colunas. A função deve retornar o ponteiro para um vetor B de tamanho N
alocado dinamicamente, em que cada posição de B é a soma dos números daquela linha da matriz*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *SomaMatriz(int linhas, int colunas, int matriz[linhas][colunas])
{
    int *ptr;

    ptr = calloc(linhas, sizeof(int));

    for (int l = 0; l < linhas; l++)
    {
        for (int c = 0; c < colunas; c++)
        {
            ptr[l] += matriz[l][c];
        }
    }

    return ptr;
}

int main()
{

    int linhas, colunas, *ptr;

    printf("Digite a quantidade de linhas da matriz:");
    scanf("%d", &linhas);
    setbuf(stdin, NULL);
    printf("\nDigite a quantidade de colunas da matriz:");
    scanf("%d", &colunas);
    setbuf(stdin, NULL);

    int matriz[linhas][colunas];

    for (int l = 0; l < linhas; l++)
    {
        for (int c = 0; c < colunas; c++)
        {
            printf("\nDigte o elemento [%d][%d]:", l + 1, c + 1);
            scanf("%d", &matriz[l][c]);
            setbuf(stdin, NULL);
        }
    } // Entrada dos elemetos da matriz

    ptr = SomaMatriz(linhas, colunas, matriz);

    for (int t = 0; t < linhas; t++)
    {
        printf("Soma da linha %d é: %d\n", t + 1, ptr[t]);
    }

    free(ptr);

    return 0;
}