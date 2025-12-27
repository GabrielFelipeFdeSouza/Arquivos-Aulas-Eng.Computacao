/*   EX 03 - Ex. Prova 2:
3) Faça um programa que solicite o tamanho de um quadrado 
e mostre a borda de um quadrado utilizando o caracter #.
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
//Declarando as váriaveis:
	int aresta = 0;
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    printf("--------QUADRADO OCO--------\n\n");
    
//Pede ao usuário o número da aresta:

	printf("Digite o número para a aresta:\n");
	scanf("%d", &aresta);
    
//Exibindo a tabela:

	for(int i = 0; i < aresta; i++){
		
		for(int z = 0; z < aresta; z++){
			
		if(i == 0 || i == aresta - 1){
			
		printf("# ");
			
		} //Fim if para linhas topo e base
		
		else {
			
			if(z == 0 || z == aresta - 1){
			
				printf("# ");
			
			} //Fim if
				
			else{
				
				printf("  ");	
				
			} //Fim else
			
		} //Fim else para linhas topo e base
			

		} //Fim for colunas
		
		
		printf("\n");
		
	} //Fim for linhas
    
    
return 0; //Retorna código 0 ao programa

} //Fim da main

