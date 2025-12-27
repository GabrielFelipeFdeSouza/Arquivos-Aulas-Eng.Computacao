/*Escreva uma função que receba como parâmetro um valor L e um valor C e retorne
o ponteiro para uma matriz alocada dinamicamente contendo L linhas e C colunas.
Essa matriz deve ser inicializada com o valor 0 em todas as suas posições.
*/

#include<stdio.h>
#include<stdlib.h>

int **alocaMatriz(int l, int c){
    int **matriz;

    matriz = calloc(l, sizeof(int*)); //Aloca as linhas da matriz

    for(int p = 0; p < l; p++){
       matriz[p] = (int*) calloc(c, sizeof(int));
    } //Aloca as colunas da matriz para conteudo

    return matriz;
}

int main(){

    int l, c;
    int **matriz;

    printf("Digite o numero de linhas da matriz:");
    scanf("%d", &l);
    printf("Digite o numero de colunas da matriz:");
    scanf("%d", &c); //Entrada do usuario

    matriz = alocaMatriz(l, c); //Chama a função de alocação

    printf("Endereco da regiao alocada: %p", matriz);
    
    for(int i = 0; i < l; i++){
        printf("\n");
        for(int p = 0; p < c; p++){
            printf("%d ", matriz[i][p]);
        }
    } //Saida

    for(int s = 0; s < l; s++){
        free(matriz[s]);
    } //Desaloca as colunas

    free(matriz); //Desaloca a matriz

    return 0;
}