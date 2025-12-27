/*Escreva uma função que receba como parâmetro um vetor contendo N valores inteiros. 
Essa função deve retornar, por referência, dois valores: a soma dos números pares e ímpares.*/

#include <stdio.h>
#include <stdlib.h>

void soma_vetor(int *vetor, int tamanho, int *soma_pares, int *soma_impares){

    for(int t = 0; t < tamanho; t++){
        if(vetor[t] % 2 ==0){
            *soma_pares += vetor[t];
        } else{
            *soma_impares += vetor[t];
        }
    }
    return;
} //Função de soma pares e impares, com saida via referencia

int main(){

    int vetor[7] = {13,5,7,12,4,9,0}, tamanho = 7, soma_pares = 0, soma_impares = 0; //Apenas aumentando o vetor e redefinir seu valor já server para a função

    soma_vetor(vetor, tamanho, &soma_pares, &soma_impares); //Chama a função para somar 

    printf("Soma dos pares: %d, soma dos impares: %d\n", soma_pares, soma_impares); //Saida

    return 0;
}