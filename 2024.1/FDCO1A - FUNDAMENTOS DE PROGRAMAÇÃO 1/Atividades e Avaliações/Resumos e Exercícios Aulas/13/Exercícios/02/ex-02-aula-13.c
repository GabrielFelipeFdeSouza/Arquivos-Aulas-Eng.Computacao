/*   EX 02 - AULA 13 - STRINGS:
Faça um programa que armazene o nome e salário de 5 
empregados. Em seguida calcule um aumento de 8% nos 
salários e exiba a nova folha de pagamentos
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	//Declarando as váriaveis:
	char nomes [5][30];
	float salarios [10];
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    //Aruma os problemas de Strings com caracteres especiais em Windows:
	SetConsoleCP(1252); 
	SetConsoleOutputCP(1252);
	
	printf("---LISTA DE NOMES E SALARIOS EMPREGADOS---\n\n");
    
	//Entrada dos nomes:
	
	printf("\n"); //Linha branca
	
	for(int i = 0; i < 5; i++){
			
		printf("Digite um nome:");
		fgets(nomes[i], 30, stdin);
		nomes[i][strcspn(nomes[i], "\n")] = '\0'; //elimina o \n dos enter's
		setbuf(stdin, NULL); //Limpa o buffer do teclado
		
		printf("Digite o salário dessa pessoa:");
		scanf("%f", &salarios[i]);
		setbuf(stdin, NULL); //Limpa o buffer do teclado
		
	} //Fim for entdrada dados

	//Exibindo a saida:
	
	printf("\n");
	
	for(int i = 0; i < 5; i++){
		
		printf("O nome %d é %s e o salário é: %.2fR$\n", i, nomes[i], salarios[i] * 1.08);
		
	} //Fim for exibição 
	
        
return 0; //Retorna código 0 ao programa

} //Fim da main

