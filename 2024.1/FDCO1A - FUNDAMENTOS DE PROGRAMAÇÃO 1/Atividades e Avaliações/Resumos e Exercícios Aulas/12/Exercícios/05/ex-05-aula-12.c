/*   EX 05 - AULA 12 - MATRIZES:
Faça um programa que some as matrizes A e B, 
gerando C
matriz C
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	//Declarando as váriaveis:
	int matriz_entrada_A[2][3], matriz_entrada_B[2][3];
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
	printf("---Soma de matrizes---\n\n");
    
	//Entrada e processamento de dados:
	
	for(int l = 0; l < 2; l++){
		
		for(int c = 0; c < 3; c++){
		
			printf("Digite o elemento [%d][%d] da matiz A:", l, c);
			scanf("%d", &matriz_entrada_A[l][c]);
						
		} //Fim for colunas	A
		
	} //Fim for linhas A
	
	printf("\n");
	
	for(int l = 0; l < 2; l++){
		
		for(int c = 0; c < 3; c++){
		
			printf("Digite o elemento [%d][%d] da matiz B:", l, c);
			scanf("%d", &matriz_entrada_B[l][c]);
						
		} //Fim for colunas	B
		
	} //Fim for linhas B
	
	printf("\n");
	
	
	//Exibições:.
	
	printf("\nA matriz A é:\n");
	
	for(int l = 0; l < 2; l++){
		
		for(int c = 0; c < 3; c++){
		
			printf("%3d ", matriz_entrada_A[l][c]);
		
		} //Fim for colunas exibição A	 
		
		printf("\n");
		
	} //Fim for linhas exibição A
	
	printf("\nA matriz B é:\n");
	
	for(int l = 0; l < 2; l++){
		
		for(int c = 0; c < 3; c++){
		
			printf("%3d ", matriz_entrada_B[l][c]);
		
		} //Fim for colunas exibição B	 
		
		printf("\n");
		
	} //Fim for linhas exibição B
	
	printf("\nA soma da matriz A com B (matriz C), é:\n");
	
	for(int l = 0; l < 2; l++){
		
		for(int c = 0; c < 3; c++){
		
			printf("%3d ", matriz_entrada_A[l][c] + matriz_entrada_B[l][c]);
		
		} //Fim for colunas exibição C 
		
		printf("\n");
		
	} //Fim for linhas exibição C

	
	      
return 0; //Retorna código 0 ao programa

} //Fim da main

