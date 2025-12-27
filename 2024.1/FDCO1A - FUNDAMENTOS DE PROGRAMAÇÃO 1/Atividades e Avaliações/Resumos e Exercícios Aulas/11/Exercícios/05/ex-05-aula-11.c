/*   EX 05 - AULA 11 - VETORES:
Dado dois vetores, A (4 elementos) e B (5 elementos), faça 
um programa em C que imprima todos os elementos comuns 
aos dois vetores
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	//Declarando as váriaveis:
	int vetor_1[4] = {1, 0, 3, 4}, vetor_2[5] = {1, 2, 3, 1, 5};
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
	printf("---Comparação de vetores---\n");
    
	//Entrada e processamento de dados:
	
	printf("\nO vetor de entrada 1 é:\n");
	//For 1 para exibir valores vetor 1:
	for(int i = 0; i < 4; i++){
		
		printf("Valor %d do vetor 1: %d  ", i, vetor_1[i]);
	
	} //Fim for 1
	
	printf("\n\nO vetor de entrada 2 é:\n");
	//For 2 para exibir valores vetor 2:
	for(int i = 0; i < 5; i++){
		
		printf("Valor %d do vetor 2: %d  ", i, vetor_2[i]);
	
	} //Fim for 2
	
	printf("\n"); //Linha branca
	
	//Lógica com 2 for's alinhados para buscar todos os elementos comuns entre os vetores:
	
	printf("\n"); //Linha branca
	
	for(int i = 0; i < 4; i++){
		
		for(int g = 0; g < 5; g++){
			
			if(vetor_1[i] == vetor_2[g])
				printf("Um elemento comum é: %d\n", vetor_2[g]);
			
		} //Fim do for de contagem 2
				
	} //Fim do for de contagem 1

    
        
return 0; //Retorna código 0 ao programa

} //Fim da main

