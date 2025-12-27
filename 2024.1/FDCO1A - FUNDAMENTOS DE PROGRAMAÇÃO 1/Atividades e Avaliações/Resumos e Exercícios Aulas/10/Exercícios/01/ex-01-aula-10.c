/*   EX 01 - AULA 10 - FOR:
Faça um algoritmo que exiba todos números de 1 a 100
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	//Declarando as váriaveis:
	int contador;
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    
	//Entrada e processamento de dados:
	for(contador = 1; contador <= 100; contador++){
		
		printf("O número atual é: %d\n", contador);		
		
	} //Fim do for de contagem até 100
    
        
return 0; //Retorna código 0 ao programa

} //Fim da main

