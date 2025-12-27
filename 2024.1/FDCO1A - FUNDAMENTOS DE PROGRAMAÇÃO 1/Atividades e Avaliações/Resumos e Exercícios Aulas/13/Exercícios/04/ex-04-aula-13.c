/*   EX 04 - AULA 13 - STRINGS:
Faça um programa que receba um nome, ele deve perguntar 
novamente caso o nome tenha tamanho inferior a 5 caracteres. Ao receber 
um nome com 5 caracteres ou mais o programa exibe o nome e finaliza
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{

	// Declarando as váriaveis:
	char nome[30];
	
	setlocale(LC_ALL, ""); // Habilita os sinais ortograficos PT-BR
	//Aruma os problemas de Strings com caracteres especiais em Windows:
	SetConsoleCP(1252); 
	SetConsoleOutputCP(1252);
	
	printf("---VERIFICAR SE NOME MENOR QUE 5---\n\n");

	// Entrada dos nomes:

	printf("\n"); // Linha branca 

	do{
		
		printf("Digite um nome:");
		fgets(nome, 30, stdin);
		nome[strcspn(nome, "\n")] = '\0'; // elimina o \n dos enter's
		setbuf(stdin, NULL); // Limpa o buffer do teclado
		
		if(strlen(nome) < 5)
			printf("Nome inválido - Digite novamente!\n\n");
		
	} while(strlen(nome) < 5); //Fim do-while de entrada do nome e verificação de tamanho 

	//Exibição:
	printf("O nome é: %s", nome);

	return 0; // Retorna código 0 ao programa

} // Fim da main
