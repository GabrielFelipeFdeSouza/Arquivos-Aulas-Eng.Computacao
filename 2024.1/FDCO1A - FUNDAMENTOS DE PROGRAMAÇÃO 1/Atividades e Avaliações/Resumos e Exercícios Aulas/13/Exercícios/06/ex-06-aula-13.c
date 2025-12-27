/*   EX 06 - AULA 13 - STRINGS:
Faça um programa que receba um nome e um sobrenome. Ele deve 
construir uma nova string no formato americano (Sobrenome, Nome)
Exemplo: Silva, José
*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>

//Neste caso poderia usar a função de concatenação, embora pode ser feito apenas com a função printf

int main()
{

	//Declarando as váriaveis:
	char nome[30], sobrenome[30];
	
	setlocale(LC_ALL, ""); //Habilita os sinais ortograficos PT-BR
	//Aruma os problemas de Strings com caracteres especiais em Windows:
	SetConsoleCP(1252); 
	SetConsoleOutputCP(1252);
	
	printf("---EXIBIR NOMES FORMATO AMERICANO---\n\n");

	//Entrada do nome e sobrenome:

	//NOME:
	printf("\n"); //Linha branca 	
	printf("Digite o nome:");
	fgets(nome, 30, stdin);
	nome[strcspn(nome, "\n")] = '\0'; //elimina o \n dos enter's
	setbuf(stdin, NULL); //Limpa o buffer do teclado
	
	//SOBRENOME
	printf("\n"); // Linha branca 	
	printf("Digite o nome:");
	fgets(sobrenome, 30, stdin);
	sobrenome[strcspn(sobrenome, "\n")] = '\0'; //elimina o \n dos enter's
	setbuf(stdin, NULL); //Limpa o buffer do teclado
	
	
	//Exibição:
	
	printf("\n"); //Linha branca 
	printf("%s, %s", sobrenome, nome);
	
	return 0; // Retorna código 0 ao programa 

} //Fim da main
