/*   EX 04 - AULA 8 - WHILE:
Crie um algoritmo que exiba todos os números pares 
entre 240 e 730 inclusive
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
//Declarando as váriaveis:
	int i = 240; //Variavel de controle e contagem
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    while(i <= 730){
    	printf("O número atual é: %d\n", i);    	
    	i = i +2; //Soma 2 à váriavel de controle
	} //Fim while
    
return 0; //Retorna código 0 ao programa

} //Fim da main

