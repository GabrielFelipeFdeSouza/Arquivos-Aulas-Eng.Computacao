/*Crie uma fun��o que retorne o fatorial de um n�mero passado por 
par�metro.*/

#include<stdio.h>
#include<stdlib.h>

int fatorial(int numero){

    if(numero == 1 || numero == 0){

        return 1; //Caso base
    } else{

        return numero * fatorial(numero-1);
    } //Conta do fatorial
}

int main(){
    int numero;

    printf("Digite o numero para o fatoria:");
    scanf("%d", &numero); //Entrada de dados

    printf("O fatorial de %d e %d", numero, fatorial(numero)); //Saida

    return 0;
}