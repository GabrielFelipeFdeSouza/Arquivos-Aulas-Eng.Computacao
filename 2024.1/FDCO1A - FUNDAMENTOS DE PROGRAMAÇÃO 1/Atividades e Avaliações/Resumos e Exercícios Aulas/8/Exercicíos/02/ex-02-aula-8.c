/*   EX 02 - AULA 8 - WHILE:
Faça um algoritmo que exiba todos números de 100 a 1
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
//Declarando as váriaveis:
	int i = 100; //Variavel de controle e contagem
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    while(i >= 1){
    	printf("O número atual é: %d\n", i);    	
    	i--; //Subtrai 1 à váriavel de controle
	} //Fim while
    
return 0; //Retorna código 0 ao programa

} //Fim da main

