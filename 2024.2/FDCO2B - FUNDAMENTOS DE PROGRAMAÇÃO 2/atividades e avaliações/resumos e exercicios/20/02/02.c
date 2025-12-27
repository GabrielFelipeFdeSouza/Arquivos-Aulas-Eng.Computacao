/*Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne
o ponteiro para um vetor de tamanho N alocado dinamicamente. Se N for negativo ou
igual a zero, um ponteiro nulo deverá ser retornado.*/

#include<stdio.h>
#include<stdlib.h>

int *alocar(int tamanho){

    int *vetor;

    if(tamanho <= 0){
        vetor = NULL;
    } else {
        vetor = (int*) calloc(tamanho, sizeof(int));
    } //Se numero maior que zero aloca, se nao retorna regiao nula

    return vetor;
} //Funcao que retorna o endereco de uma regiao alocada com base na entrada dela

int main(){

    int *vetor;
    int tamanho = 0;

    printf("Qual o tamanho do vetor que voce deseja alocar:");
    scanf("%d", &tamanho); //Entrada do tamanho do vetor pelo usuario

    vetor = alocar(tamanho);
    printf("Endereco da regiao alocada: %p", vetor); //Saida do endereco aloacado

    free(vetor); //Desalocando a regiao

    return 0;
}