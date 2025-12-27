/*   EX 03 - AULA 13 - STRINGS:
Desenvolva um programa que armazene o nome e o
telefone de 5 pessoas. Ao digitar a posição desejada, o
programa deve exibir o nome e telefone daquela posição. O
programa finaliza ao receber a entrada -1
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{

	// Declarando as váriaveis:
	char nomes[5][30];
	unsigned long int telefones[5]; //Aumenta o tamanho da capacidade de receber argumentos na variável
	int controle; //Verificador dos casos
	
	setlocale(LC_ALL, ""); // Habilita os sinais ortograficos PT-BR
	//Aruma os problemas de Strings com caracteres especiais em Windows:
	SetConsoleCP(1252); 
	SetConsoleOutputCP(1252);
	
	printf("---LISTA DE NOMES E TELEFONES---\n\n");

	// Entrada dos nomes:

	printf("\n"); // Linha branca 

	for (int i = 0; i < 5; i++)
	{

		printf("Digite um nome:");
		fgets(nomes[i], 30, stdin);
		nomes[i][strcspn(nomes[i], "\n")] = '\0'; // elimina o \n dos enter's
		setbuf(stdin, NULL);					  // Limpa o buffer do teclado

		printf("Digite o número do telefone da pessoa:");
		scanf("%d", &telefones[i]);
		setbuf(stdin, NULL); // Limpa o buffer do teclado

	} // Fim for entdrada dados

	// Exibindo a saida:

	do{
		printf("\n\nDigite um número de 0-4 para saber o nome e número:");
		scanf("%d", &controle);
		
		switch(controle){
			
			case 0:
				printf("\n\nO nome do selecionado é: %s e o telefone é: %d", nomes[0], telefones[0]);
				break;
				
			case 1:
				printf("\n\nO nome do selecionado é: %s e o telefone é: %d", nomes[1], telefones[1]);
				break;
				
			case 2:
				printf("\n\nO nome do selecionado é: %s e o telefone é: %d", nomes[2], telefones[2]);
				break;
				
			case 3:
				printf("\n\nO nome do selecionado é: %s e o telefone é: %d", nomes[3], telefones[3]);
				break;
			
			case 4:
				printf("\n\nO nome do selecionado é: %s e o telefone é: %d", nomes[4], telefones[4]);
				break;
				
			default:
				break;
		} //Fim switch case de seleção de opções com saida exclusiva em -1
		
	} while(controle != -1); //Fim do-while saidas

	return 0; // Retorna código 0 ao programa

} // Fim da main
