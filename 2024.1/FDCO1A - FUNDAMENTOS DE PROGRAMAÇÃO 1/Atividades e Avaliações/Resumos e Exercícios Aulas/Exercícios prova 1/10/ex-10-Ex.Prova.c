/*   EX 10 - Ex. Prova:
Desenvolva um programa que receba um valor de 1 a 99 e exiba o valor por extenso
Ex:
Digite um Número: 74
Valor por extenso: setenta e quatro
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{

	// Declarando as variaveis:
	int numero, numero_dezena, numero_unidade;

	setlocale(LC_ALL, "Portuguese"); // Habilita os sinais ortograficos PT-BR
	printf("--------ESCRITA DOS NÚMEROS--------\n");

	// Entarda de dados pelo usuário:
	do{
		printf("\n*Digite um número entre 1 e 99:");
		scanf("%d", &numero);
		
	} while(numero > 99 || numero < 1);
	
	//Verefica o numero digitado e explita entre dezena e unidade
	
	numero_dezena = numero / 10;
	numero_unidade = numero % 10;
	
	printf("%d, %d\n\n", numero_dezena, numero_unidade);
	
	switch(numero_dezena){ //Switch que manda as dezenas
		
		case 0: break;
		
		case 2: printf("Vinte"); break;
		
		case 3: printf("Trinta"); break;
		
		case 4: printf("Quarenta"); break;
		
		case 5: printf("Cinquenta"); break;
		
		case 6: printf("Sesenta"); break;
		
		case 7: printf("Setenta"); break;
		
		case 8: printf("Oitenta"); break;
		
		case 9: printf("Noventa"); break;
		
		default: 
		
		switch(numero){ //Switch que mandas os casos de 11 - 19
		
		case 10: printf("Dez"); break;
		
		case 11: printf("Onze"); break;
		
		case 12: printf("Doze"); break;
		
		case 13: printf("Treze"); break;
		
		case 14: printf("Quatorze"); break;
		
		case 15: printf("Quinze"); break;
		
		case 16: printf("Desezeis"); break;
		
		case 17: printf("Dezesete"); break;
		
		case 18: printf("Dezoito"); break;
		
		case 19: printf("Dezenove"); break;

		
		
	} //Switch de numeros entre 10 - 19
	
	
		
		
	} //Switch de dezenas
	
	if(numero_dezena > 1){ //Escreve um e para concatenar se dezena > 1
		
		printf(" e ");
	}
	
	if(numero_dezena != 1){ //Verefica se não cai no caso de 11 - 20

	switch(numero_unidade){ //Switch que manda as unidades
		
		case 0: break;
		
		case 1: printf("um"); break;
		
		case 2: printf("dois"); break;
		
		case 3: printf("treis"); break;
		
		case 4: printf("quatro"); break;
		
		case 5: printf("cinco"); break;
		
		case 6: printf("seix"); break;
		
		case 7: printf("sete"); break;
		
		case 8: printf("oito"); break;
		
		case 9: printf("nove"); break;
		
	} //Switch unidades 
	
		} //If checa a dezena

	return 0; // Retorna código 0 ao programa

} // Fim da main
