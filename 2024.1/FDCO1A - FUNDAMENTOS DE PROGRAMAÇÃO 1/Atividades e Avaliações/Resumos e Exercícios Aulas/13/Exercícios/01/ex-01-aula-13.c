/*   EX 01 - AULA 13 - STRINGS:
Crie um programa para armazenar 10 nomes em um vetor 
e imprimir uma lista numerada
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	
	//Declarando as váriaveis:
	char nomes [10][300];
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    //Aruma os problemas de Strings com caracteres especiais em Windows:
	SetConsoleCP(1252); 
	SetConsoleOutputCP(1252);
	
	printf("---LISTA DE NOMES---\n\n");
    
	//Entrada dos nomes:
	
	printf("\n"); //Linha branca
	
	for(int i = 0; i < 10; i++){
			
		printf("Digite um nome:");
		fgets(nomes[i], 30, stdin);
		nomes[i][strcspn(nomes[i], "\n")] = '\0'; //elimina o \n dos enter's
		setbuf(stdin, NULL); //Limpa o buffer do teclado
		
		
	} //Fim for entdrada dados

	//Exibindo a saida:
	
	for(int i = 0; i < 10; i++){
		
		printf("O nome %d é %s\n", i, nomes[i]);
		
	} //Fim for exibição 
	
        
return 0; //Retorna código 0 ao programa

} //Fim da main

