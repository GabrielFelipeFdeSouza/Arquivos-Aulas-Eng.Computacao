/*   EX 01 - AULA 8 - WHILE:
Faça um algoritmo que exiba todos números de 1 a 100
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
//Declarando as váriaveis:
	int i = 1; //Variavel de controle e contagem
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    while(i <= 100){
    	printf("O número atual é: %d\n", i);    	
    	i++; //Soma 1 à váriavel de controle
	} //Fim while
    
return 0; //Retorna código 0 ao programa

} //Fim da main

