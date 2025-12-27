/*   EX 07 - AULA 10 - FOR:
Faça um programa que mostre n elementos da sequência de 
Fibonacci. 

O valor de n é passado para o programa.
O primeiro termo é 0, e o segundo termo é 1, os demais devem seguir a 
fórmula t
n = tn-1 + tn-2

 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	//Declarando as váriaveis:
	int contador, numero1 = 0, numero2 = 1, passo_final;
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    
    //Entrada e processamento de dados:
    printf("Digite o número de passos para calcular os termos de Fibonacci:");
    scanf("%d", &passo_final);    
        
	for(contador = 0; contador < passo_final; contador++){
		
		//A lógica das operações é usar 2 acumuladores para que resulte na sequencia, em que em numero1 e numero 2 ambas são sequencias de Fibonacci (permutadas)
		numero1 = numero1 + numero2;  // 1, 1, 2, 3, 5, 8, 13
		numero2 = numero1 - numero2;  // 0, 1, 1, 2, 3, 5, 8
		
		printf("O número atual da seuquencia é: %d\n", numero2);
						
	} //Fim do for de contagem para n vezes(entrada pelo usuário)
	   
        
return 0; //Retorna código 0 ao programa

} //Fim da main

