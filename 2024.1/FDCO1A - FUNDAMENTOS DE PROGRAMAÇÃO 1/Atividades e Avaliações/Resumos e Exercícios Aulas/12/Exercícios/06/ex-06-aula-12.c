/*   EX 06 - AULA 12 - MATRIZES:
Faça um programa que multiplique as matrizes A e D 
abaixo gerando matriz AD
 */
 
//OBS: Nesse caso não é nescessário cria a verificação de n e m (linhas e colunas das matrizes, afinal elas já estão definidas)!

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	//Declarando as váriaveis:
	int matriz_entrada_A[2][3], matriz_entrada_B[2][3], matriz_saida[2][2];
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
	printf("---Matriz 5x5 Maior Valor---\n\n");
    
	//Entrada e processamento de dados:
	
	for(int l = 0; l < 2; l++){
		
		for(int c = 0; c < 3; c++){
		
			printf("Digite o elemento [%d][%d] da matiz A:", l, c);
			scanf("%d", &matriz_entrada_A[l][c]);
						
		} //Fim for colunas	A
		
	} //Fim for linhas A
	
	printf("\n");
	
	for(int l = 0; l < 3; l++){
		
		for(int c = 0; c < 2; c++){
		
			printf("Digite o elemento [%d][%d] da matiz B:", l, c);
			scanf("%d", &matriz_entrada_B[l][c]);
						
		} //Fim for colunas	B
		
	} //Fim for linhas B
	
	printf("\n");
	
	//Criando a matriz de saida pela multiplicação de duas matrizes:
	
	/*Neste caso foi implementado um novo for para gerar a mudança dos elementos que estão 
	sendo multiplicados e somados, logo junto aos for's de contagem pode-se implementar a multiplicação */
	
	for(int l = 0; l < 2; l++){
		
		for(int c = 0; c < 2; c++){
						
				for(int m = 0; m < 3; m++){
					
					matriz_saida[l][c] += matriz_entrada_A[l][m] * matriz_entrada_B[m][c];
					
				} //Fim for multiplicação
										
 			} //Fim for colunas criação C	 
		
	} //Fim for linhas criação C
	
	
	//Exibições:.
	
	printf("\nA matriz A é:\n");
	
	for(int l = 0; l < 2; l++){
		
		for(int c = 0; c < 3; c++){
		
			printf("%3d ", matriz_entrada_A[l][c]);
		
		} //Fim for colunas exibição A	 
		
		printf("\n");
		
	} //Fim for linhas exibição A
	
	printf("\nA matriz B é:\n");
	
	for(int l = 0; l < 3; l++){
		
		for(int c = 0; c < 2; c++){
		
			printf("%3d ", matriz_entrada_B[l][c]);
		
		} //Fim for colunas exibição B	 
		
		printf("\n");
		
	} //Fim for linhas exibição B
	
	printf("\nA multiplicação das matrizes A e B (matriz C), é:\n");
	
	for(int l = 0; l < 2; l++){
		
		for(int c = 0; c < 2; c++){
		
			printf("%3d ", matriz_saida[l][c]);
		
		} //Fim for colunas exibição C 
		
		printf("\n");
		
	} //Fim for linhas exibição C

		      
return 0; //Retorna código 0 ao programa

} //Fim da main

