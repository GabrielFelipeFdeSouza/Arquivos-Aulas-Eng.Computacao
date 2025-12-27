/*   EX 01 - AULA 12 - MATRIZES:
Crie uma matriz identidade com dimensões 5 x 5
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	//Declarando as váriaveis:
	int matriz_identidade [5][5];
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
	printf("---Matriz identidade 5x5---\n\n");
    
	//Processamento de dados:
	
	for(int l = 0; l < 5; l++){
		
		for(int c = 0; c < 5; c++){
			
			if(l == c){
				
				matriz_identidade [l][c] = 1;
				
			} else {
			
				matriz_identidade [l][c] = 0;
			 
			 } //Fim else
			
		} //Fim for colunas
		
	} //Fim for linhas
	
	    
	//Exibindo a saida:
	
	printf("A Matriz identidade é:\n\n");
	
	for(int l = 0; l < 5; l++){
		
		for(int c = 0; c < 5; c++){
			
			printf("%d ", matriz_identidade [l][c]);
			
		} //Fim for colunas
		
		printf("\n"); //Printa uma lin ha branca
		
	} //Fim for linhas
		
        
return 0; //Retorna código 0 ao programa

} //Fim da main

