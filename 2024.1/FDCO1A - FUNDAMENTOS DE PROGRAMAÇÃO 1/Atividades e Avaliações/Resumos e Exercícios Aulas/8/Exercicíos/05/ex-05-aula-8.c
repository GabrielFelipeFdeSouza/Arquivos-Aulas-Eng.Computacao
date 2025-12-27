/*   EX 05 - AULA 8 - WHILE:
Faça um programa que receba um número real, calcule e 
exiba o quadrado dele. O programa deverá repetir esse 
procedimento para 10 números, um de cada vez
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
//Declarando as váriaveis:
	int i = 1; //Variavel de controle
	float numero = 0; //Número operado
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    while(i < 11){
    	printf("(Operação nº %d) - Digite um número para fazer o quadrado dele:", i);    	
    	scanf("%f", &numero); //Entrada do número para operação
    	numero = pow(numero, 2); //operação
    	printf("O número digitado ao quadrado é: %.2f\n", numero);
    	printf("\n");
    	i++; //Soma 1 à variável de controle
	} //Fim while
    
return 0; //Retorna código 0 ao programa

} //Fim da main

