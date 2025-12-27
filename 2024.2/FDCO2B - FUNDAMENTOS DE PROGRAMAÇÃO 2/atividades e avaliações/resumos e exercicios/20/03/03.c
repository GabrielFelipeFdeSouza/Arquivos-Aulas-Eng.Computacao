/*Escreva uma função que receba como parâmetro dois vetores via referência( A e B)
e o tamanho N. A função deve retornar o ponteiro para um vetor C de tamanho N
alocado dinamicamente, em que:
C[i] = A[i] * B[i]
*/

#include<stdio.h>
#include<stdlib.h>

int *alocarVetor(int tamanho, int *vetorA, int *vetorB){
    int *vetorC;
    vetorC = (int*) calloc(tamanho, sizeof(int));
    for(int y = 0; y < tamanho; y++){
        vetorC[y] = vetorA[y] * vetorB[y];
    }
    printf("%d", vetorA[2]);
    return vetorC;
} //Funcao que aloca C e faz a conta

int main(){

    int tamanho; 
    int *vetorA, *vetorB, *vetorC;

    printf("Digite a quantidade de posicoes para alocar:");
    scanf("%d", &tamanho);

    vetorA = (int*) calloc(tamanho, sizeof(int));
    vetorB = (int*) calloc(tamanho, sizeof(int)); //Aloca os vetores de entrada

    for(int u = 0; u < tamanho; u++){
        printf("Digite a posicao %d do vetor A:", u);
        scanf("%d", &vetorA[u]);
    }

    for(int u = 0; u < tamanho; u++){
        printf("Digite a posicao %d do vetor B:", u);
        scanf("%d", &vetorB[u]);
    }

    vetorC = alocarVetor(tamanho, vetorA, vetorB); //Chamada da funcao para alocar C e fazer a operacao

    for(int r = 0; r < tamanho; r++){
        printf("Vetor C posicao %d = %d", r, vetorC[r]);
    } //Exibindo o vetor C

    free(vetorA);
    free(vetorB);
    free(vetorC); //Liberando a memoria depois do uso

    return 0;
}