/*   EX 06 - AULA 8 - WHILE:
 Faça um programa que receba um número real, calcule e 
exiba o quadrado dele. O programa deverá calcular o quadrado 
de vários números e finalizar quando for digitado um número 
negativo ou zero
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
    while(i >= 1){
    	printf("(Operação nº %d) - Digite um número para fazer o quadrado dele:", i);   
    	scanf("%f", &numero); //Entrada do número para operação
    	if(numero > 0){
			numero = pow(numero, 2); //operação
    		printf("O número digitado ao quadrado é: %.2f\n", numero);
    		printf("\n");
		} else { 
			printf("O número digitado é menor ou igual a 0\n");
			break; //Para o programa caso seja 0 ou negativo
		} //Fim else
		i++;
		
	} //Fim while
    
return 0; //Retorna código 0 ao programa

} //Fim da main

