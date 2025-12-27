/*   EX 01 - Ex. Prova 2:
1) Crie um algoritmo que imprima uma tabela de conversão de polegadas para centímetros.
Deseja-se que na tabela conste valores de 1 polegada até 20 polegadas inteiras.
(Para isso considere: 1 polegada = 2,54 cm)
Exemplo de saída:
1” equivale a 2,54 cm
2” equivalem a 5,08 cm
3” equivalem a 7,62 cm
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
//Declarando as váriaveis:
	float valor_cm = 0;
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    printf("--------TABELA POLEGADAS E Cm--------\n\n");
    
//Exibindo a tabela:

	for(float i = 1; i < 21; i++){
		//Usei o proprio contador do for para o contador da variavel polegada
		
		valor_cm = 2.54 * i;
		printf("O valor de %2.0f Polegadas é %5.2f Cm\n", i, valor_cm);
				
		
	}
    
    
return 0; //Retorna código 0 ao programa

} //Fim da main

