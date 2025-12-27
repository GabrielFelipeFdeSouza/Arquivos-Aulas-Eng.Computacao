/*   EX 04 - AULA 10 - FOR:
Crie um algoritmo que exiba todos os números pares 
entre 240 e 730 inclusive
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	//Declarando as váriaveis:
	int contador;
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR

	//Entrada e processamento de dados:
	//O for começa em 240 para exibi-lo e vai de 2 em 2 até 730, pois os pares são multiplos de 2:
	for(contador = 240; contador <= 730; contador+= 2){
		
		printf("O número atual é: %d\n", contador);		
		
	} //Fim do for de contagem multiplicativa até 500
    
        
return 0; //Retorna código 0 ao programa

} //Fim da main

