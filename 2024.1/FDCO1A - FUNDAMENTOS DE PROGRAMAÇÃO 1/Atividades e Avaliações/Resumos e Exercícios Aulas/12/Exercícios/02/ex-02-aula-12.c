/*   EX 02 - AULA 12 - MATRIZES:
Faça um algoritmo que leia uma matriz 3 por 3 (3x3) e 
retorna a soma dos elementos da sua diagonal principal e 
da sua diagonal secundária
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	//Declarando as váriaveis:
	int matriz_entrada [3][3], diag_principal = 0, diag_secundaria = 0;
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
	printf("---Matriz 3x3---\n\n");
    
	//Entrada e processamento de dados:
	
	for(int l = 0; l < 3; l++){
		
		for(int c = 0; c < 3; c++){
		
			printf("Digite o elemento [%d][%d] da matiz:", l, c);
			scanf("%d", &matriz_entrada [l][c]);
			
			if(l == c){
				
				diag_principal += matriz_entrada [l][c];
				
			} //If diagonal principal acumulador
			
			if(l + c == 2){
				
				diag_secundaria += matriz_entrada [l][c];
				
			} //If diagonal principa acumulador
		
		} //Fim for colunas	
		
		
	} //Fim for linhas
	
	printf("\n");
	
	
	//Exibições:
	for(int l = 0; l < 3; l++){
		
		for(int c = 0; c < 3; c++){
		
			printf("%3d ", matriz_entrada [l][c]);
		
		} //Fim for colunas exibição	
		
		printf("\n");
		
	} //Fim for linhas exibição
	
	printf("\n\nA soma da diagonal principal foi de: %d", diag_principal);
	printf("\nA soma da diagonal secundaria foi de: %d", diag_secundaria);

	      
return 0; //Retorna código 0 ao programa

} //Fim da main

