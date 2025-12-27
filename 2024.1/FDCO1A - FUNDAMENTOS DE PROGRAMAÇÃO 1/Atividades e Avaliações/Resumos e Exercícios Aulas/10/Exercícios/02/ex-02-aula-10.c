/*   EX 02 - AULA 10 - FOR:
Faça um algoritmo que exiba todos números de 100 a 1
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	//Declarando as váriaveis:
	int contador;
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR

	//Entrada e processamento de dados:
	for(contador = 100; contador > 0; contador--){
		
		printf("O número atual é: %d\n", contador);		
		
	} //Fim do for de contagem até 0
    
        
return 0; //Retorna código 0 ao programa

} //Fim da main

