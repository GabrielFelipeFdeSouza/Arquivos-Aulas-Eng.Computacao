/*Fa�a uma fun��o recursiva que retorne o n-�simo termo da sequ�ncia de
Fibonacci, sendo que n � recebido por par�metro. Utilize essa fun��o para
desenvolver um programa que mostre no main() os n termos dessa
sequ�ncia na tela, a partir do valor de n recebido pelo teclado. Sabe-se que
o 1� termo � 0 e o 2� termo � 1*/

#include <stdlib.h>
#include <stdio.h>

void fibonnaci(int passo_final, int num1, int num2){

    if(passo_final == 1){
        printf("%d\n", num1);
        return;
    } //Caso base, apenas exibe

    printf("%d - ", num1);
    int acumulador = num2;
    num2 += num1;
    num1 = acumulador; //Conta do fibonnaci
    fibonnaci(passo_final-1, num1, num2); //Recursividade

    return;
}

int main(){

    int numero;

    printf("Digite o en�sinmo numero do fibonacci a ser exibido:");
    scanf("%d", &numero);
    fibonnaci(numero, 0, 1); //Recebe o numero do usuario e chama a fun��o recursiva para exibir os termos

    return 0;
}