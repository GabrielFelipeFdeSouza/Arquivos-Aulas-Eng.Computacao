/*Crie uma função recursiva que retorne a soma dos elementos de um vetor de inteiros.*/

#include<stdio.h>
#include<stdlib.h>

int somar(int vetor[], int tamanho ){

    if(tamanho == 0){
        return vetor[0];
    } //Caso base

    return vetor[tamanho] + somar(vetor, tamanho - 1); //retorno e recursão
}

int main(){
    int soma, vetor[15] = {24,-2,5,-8,0,5,-6,41,-20,1,1,8,3,3,3}; 

    soma = somar(vetor, sizeof(vetor) / sizeof(vetor[0])); //Chamada da função recursiva
    printf("A soma é: %d", soma); //Saida

    return 0;
}