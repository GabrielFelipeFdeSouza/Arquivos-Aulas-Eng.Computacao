/*   EX 03 - AULA 10 - FOR:
Crie um algoritmo que exiba todos os números múltiplos 
de 5 no intervalo de 1 a 500
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	//Declarando as váriaveis:
	int contador;
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR

	//Entrada e processamento de dados:
	//O for começa em 5 pois o menor multiplo de 5 entre [1-500] é 5 e vai de 5 em 5 para exibir todos os multiplos:
	for(contador = 5; contador <= 500; contador+= 5){
		
		printf("O número atual é: %d\n", contador);		
		
	} //Fim do for de contagem multiplicativa até 500
    
        
return 0; //Retorna código 0 ao programa

} //Fim da main

