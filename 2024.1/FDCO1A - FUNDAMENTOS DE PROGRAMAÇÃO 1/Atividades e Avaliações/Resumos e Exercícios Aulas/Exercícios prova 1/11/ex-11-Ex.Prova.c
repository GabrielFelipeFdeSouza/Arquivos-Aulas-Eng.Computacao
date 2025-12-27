/*   EX 11 - Ex. Prova:
Desenvolva um algoritmo que receba vários números no intervalo fechado
de 1 a 1000. Ao receber um valor fora da faixa, o programa deverá exibir
a soma dos números pares e o produto dos números ímpares e finalizar.

Obs: O valor fora da faixa utilizado para sair não deverá entrar na conta da soma nem do produto
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{

	// Declarando as variaveis:
	int numero, soma, produto;

	setlocale(LC_ALL, "Portuguese"); // Habilita os sinais ortograficos PT-BR
	printf("--------SOMA E PRODUTO DE NÚMEROS--------\n\n");

	// Entarda de dados pelo usuário:
	do{
		printf("*Digite um número entre 1 e 1000:");
		scanf("%d", &numero);
		
	//Checagem para soma ou produto do numero
		
		if(numero >= 1 && numero <= 1000){
		
		if((numero % 2) == 0){
			
			soma+= numero; //Atribui à soma o valor dela + numero atual (PARES)
			
		} else {
			
			produto *= numero; //Atribui ao produto o valor dele * numero atual (IMPARES)
			
		} //Fim else de produtos 
		
		
		} //If de vereficação para não incluir ultimo termo
		
	} while(numero >= 1 && numero <= 1000);
	
	//Fim do Loop e exibição de resultados
	
	
	printf("\nValor fora da faixa!\n\nO valor da soma dos pares foi de : %d e o produto dos impares foi de : %d", soma, produto);


	return 0; // Retorna código 0 ao programa

} // Fim da main
