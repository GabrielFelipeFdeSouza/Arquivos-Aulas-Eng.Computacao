/*   EX 02 - AULA 9 - DO-WHILE:
Faça um programa que receba valores enquanto eles estiverem no 
intervalo de 500 a 1000. Ao receber um valor fora da faixa, o 
programa deverá parar de solicitar valores, exibir quantos valores 
válidos foram digitados e finalizar
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
//Declarando as váriaveis:
	float numero;
	int contador = -1; //Variavel contadora começa em -1 pois o do-while na primeira passagem soma 1 direto

	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    printf("--------CHECAGEM E CONTADOR DE NÚMEROS--------\n");
    
    do{
    	printf("Digite um número por favor:");
    	scanf("%f", &numero);
    	contador++; //Soma um ao contador de validos
    	
	} while(numero >= 500 && numero <= 1000);
	
	printf("A quantidade de valores válidos digitados foi de: %i\n", contador);
    
return 0; //Retorna código 0 ao programa

} //Fim da main

