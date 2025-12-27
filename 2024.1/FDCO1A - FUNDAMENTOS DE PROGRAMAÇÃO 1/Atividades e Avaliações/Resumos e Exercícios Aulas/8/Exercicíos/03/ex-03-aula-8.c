/*   EX 03 - AULA 8 - WHILE:
Crie um algoritmo que exiba todos os números múltiplos 
de 3 no intervalo de 1 a 322
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
//Declarando as váriaveis:
	int i = 3; //Variavel de controle e contagem
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    while(i <= 322){
    	printf("O número atual é: %d\n", i);    	
    	i = i +3; //Soma 3 à váriavel de controle
	} //Fim while
    
return 0; //Retorna código 0 ao programa

} //Fim da main

