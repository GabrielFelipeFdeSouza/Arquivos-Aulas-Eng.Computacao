/*   EX 05 - Ex. Prova 2:
5) Faça um programa que receba 10 números inteiros. 
Em seguida o programa deverá permitir o usuário buscar números 
dentro do vetor, informando se o mesmo está ou não no vetor. 
O usuário poderá realizar quantas buscas quiser e finalizar ao 
solicitar a busca de um valor negativo.
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main(){
	
//Declarando as váriaveis:
	int vetor_numeros[10], input = 0;
	bool saida;
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    printf("--------VERIFICAÇÃO SE HÁ UM NÚMERO--------\n\n");
    
//Lendo o vetor:

	for(int i = 0; i < 10; i++){
		
		printf("Digite o elemento %d do vetor de entrada:", i);
		scanf("%d", &vetor_numeros[i]);
		
	} //Fim for que recebe o vetor numeros
	
	printf("\n"); //Linha branca
	
	do{
		
		printf("Digite um número para verificar se está no vetor de entrada:");
		scanf("%d", &input);

		if(input >= 0){

			for(int i = 0; i < 10; i++){

				if(input == vetor_numeros[i]){
					saida = true;
					break;
				} else{
					saida = false;
				} //Fim if-else verifica input 
					
			} //Fim for verifica se há o número digitado no vetor

			if(saida == true)	
				printf("O número da entrda está no vetor\n");
			else	
				printf("O número da entrda não está no vetor\n");

		} //fim if verifica se número é positivo ou zero
		
		saida = false;
	} while(input >= 0);
	
return 0; //Retorna código 0 ao programa

} //Fim da main

