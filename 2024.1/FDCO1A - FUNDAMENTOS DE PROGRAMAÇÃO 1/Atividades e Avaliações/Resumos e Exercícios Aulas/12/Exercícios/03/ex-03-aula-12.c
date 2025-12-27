/*   EX 03 - AULA 12 - MATRIZES:
Construa um programa que leia uma matriz de tamanho 
5 x 5 e escreva:
O valor e a localização (linha, coluna) do maior valor encontrado 
na matriz.
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	//Declarando as váriaveis:
	int matriz_entrada[5][5], maior_valor, local[2];
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
	printf("---Matriz 5x5 Maior Valor---\n\n");
    
	//Entrada e processamento de dados:
	
	for(int l = 0; l < 5; l++){
		
		for(int c = 0; c < 5; c++){
		
			printf("Digite o elemento [%d][%d] da matiz:", l, c);
			scanf("%d", &matriz_entrada[l][c]);
			
			if(l == c && l == 0){
				
				maior_valor = matriz_entrada[0][0]; //Começar a acumulação
				
			} //Fim if do elemento 0,0
			
			if(matriz_entrada[l][c] >= maior_valor){
				
				maior_valor = matriz_entrada[l][c];
				local[0] = l + 1;
				local[1] = c + 1;
				
			} //Fim if verificação maior valor
			
		} //Fim for colunas	
		
	} //Fim for linhas
	
	printf("\n");
	
	
	//Exibições:
	for(int l = 0; l < 5; l++){
		
		for(int c = 0; c < 5; c++){
		
			printf("%3d ", matriz_entrada[l][c]);
		
		} //Fim for colunas exibição	
		
		printf("\n");
		
	} //Fim for linhas exibição
	
	printf("\n\nO maior valor é: %d e está na linha %d coluna %d", maior_valor, local[0], local[1]);
	
	      
return 0; //Retorna código 0 ao programa

} //Fim da main

