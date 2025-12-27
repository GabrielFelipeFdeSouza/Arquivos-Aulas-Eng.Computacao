/*   EX 07 - AULA 8 - WHILE:
Faça um programa que calcule o fatorial de um número a ser 
digitado
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
//Declarando as váriaveis:
	int numero = 0; //Número operado e váriavel de controle
	int saida = 1; //Número de saída
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    printf("Digite um número para fazer o fatorial dele:\n");   
    scanf("%d", &numero); //Entrada do número para operação
    
    if(numero < 0){
    	printf("O fatorial de números negativos não existe\n");
	} else {
		while(numero > 0){
			saida = saida * numero;
			numero--;
		} //Fim while
		printf("O fatorial é: %d", saida);
		
	} //Fim else
    
return 0; //Retorna código 0 ao programa

} //Fim da main

