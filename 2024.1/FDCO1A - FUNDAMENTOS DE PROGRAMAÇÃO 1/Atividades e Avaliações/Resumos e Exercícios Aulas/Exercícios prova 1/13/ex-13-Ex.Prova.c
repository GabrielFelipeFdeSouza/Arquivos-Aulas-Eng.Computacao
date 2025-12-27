/*   EX 13 - LAST ONE - Ex. Prova:
Faça um programa que verifique se um número dado via teclado é primo.

Dica: para saber se um número n é primo, basta dividir por cada um dos 
números entre 2 e raiz quadrada de n; se o resto for diferente de zero pra todos ele é primo
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

//OBS: Usei uma aproximação do tempo para int, para facilitar o cógigo

int main()
{

	// Declarando as variaveis:
	int numero, passo_contador = 2, primo = 0; //Usando a variavel passo_contador inicial em 2 pois abaixo disso não há primos e a variavel primo que é uma verificação para exibição no final do cógido
	float raiz_numero;

	setlocale(LC_ALL, "Portuguese"); // Habilita os sinais ortograficos PT-BR
	printf("--------VEREFICAR SE É PRIMO--------\n\n");

	// Entarda de dados pelo usuário:
	
	printf("Digite o numero a ser vereficado:");
	scanf("%d", &numero);
	
	//implementação:
	
	raiz_numero = sqrt(numero);
	
	do{
		
		if(numero == 2){
			break;
		} else{
		
			if(numero <= 1){
				printf("\nNão é primo!\n"); primo = 1; break;
			}
			
		} //Else dos casos onde numero é 1 e 2
		
		if((numero % passo_contador) == 0){
			
			printf("\nNão é primo!\n"); primo = 1; break;
			
		} 
		
		passo_contador++; //incrementa 1 à variavel contadora
		
	} while(passo_contador <= raiz_numero);
	
	//Caso o contador while chegue ao fim exibe que é primo:
	if(primo == 0)
		printf("\nÉ primo!\n"); 

		
	return 0; // Retorna código 0 ao programa

} // Fim da main
