/*   EX 04 - AULA 12 - MATRIZES:
Faça um programa que multiplique por 5 a 
matriz A (preenchida a partir do teclado) para gerar a 
matriz C
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	//Declarando as váriaveis:
	int matriz_entrada[2][3];
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
	printf("---Matriz multiplicada por escalar---\n\n");
    
	//Entrada e processamento de dados:
	
	for(int l = 0; l < 2; l++){
		
		for(int c = 0; c < 3; c++){
		
			printf("Digite o elemento [%d][%d] da matiz:", l, c);
			scanf("%d", &matriz_entrada[l][c]);
						
		} //Fim for colunas	
		
	} //Fim for linhas
	
	printf("\n");
	
	
	//Exibições:.
	
	printf("\nA matriz original é:\n");
	
	for(int l = 0; l < 2; l++){
		
		for(int c = 0; c < 3; c++){
		
			printf("%3d ", matriz_entrada[l][c]);
		
		} //Fim for colunas exibição	
		
		printf("\n");
		
	} //Fim for linhas exibição
	
	printf("\nA matriz multiplicada é:\n");
	
	for(int l = 0; l < 2; l++){
		
		for(int c = 0; c < 3; c++){
		
			printf("%3d ", matriz_entrada[l][c] * 5);
		
		} //Fim for colunas exibição 2
		
		printf("\n");
		
	} //Fim for linhas exibição 2

	
	      
return 0; //Retorna código 0 ao programa

} //Fim da main

