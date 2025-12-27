/*   EX 08 - AULA 10 - FOR:
Utilizando a estrutura do laço for aninhado, crie um 
programa que exiba a tabuada de todos os números de 
1 a 10 no seguinte formato:
Tabuada do 1:
1 x 1 = 1
1 x 2 = 2
1 x 3 = 3
...
Tabuada do 5:
5 X 1 = 5
5 X 2 = 10
5 X 3 = 15
...

 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	//Declarando as váriaveis:
	int numero1 = 1, numero2, multiplicacao_saida;
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    
    //Processamento de dados e exibição:  
    
    //Foi usado uma lógica de for alinhdo onde o 1º define o primeiro numero das mux e o 2º define o segundo das mux, o 1º também exibe qual mux está no momento
        
	for(numero1; numero1 < 11; numero1++){
		
		printf("--Tabuada do %d--\n", numero1);
		numero2 = 1; //Setando o num2 para 1, pora reentrar no laço for2
		
		for(numero2; numero2 < 11	; numero2++){
			
			multiplicacao_saida = numero1 * numero2;		
			printf("%d X %d = %d\n", numero1, numero2, multiplicacao_saida);
						
		} //Fim do for 2
		
		printf("\n");
		 
						
	} //Fim do for 1
	   
        
return 0; //Retorna código 0 ao programa

} //Fim da main

