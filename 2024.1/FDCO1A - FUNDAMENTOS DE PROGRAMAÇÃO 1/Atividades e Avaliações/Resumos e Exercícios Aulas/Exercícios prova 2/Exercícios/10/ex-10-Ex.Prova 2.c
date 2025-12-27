/*   EX 10 - Ex. Prova 2:
10) Faça um programa que receba e armazene 10 nomes de carros (tamanho máximo: 20 caracteres).
Em seguida, o programa deverá permitir a busca pelos nomes. Ao receber um carro, o sistema deverá
informar se o carro está ou não na lista e quantas vezes ele está na lista. O programa deverá
finalizar se for feita a busca por "Fusca", que deve ser informado também se está ou não na lista.
Exemplo da busca:
Digite o carro a ser buscado: Gol
O carro está na lista 1 vez.
Digite o carro a ser buscado: Vectra
O carro não está na lista.
Digite o carro a ser buscado: Fusca
O carro está na lista 2 vezes.
Fim de programa.
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <windows.h>
#include <string.h>

int main(){

	// Declarando as váriaveis:
	char carros[10][21], entrada[21];
	int vezes_lista = 0, tolower();

	// Entrada de dados:

	setlocale(LC_ALL, "Portuguese"); // Habilita os sinais ortograficos PT-BR
	// Aruma os problemas de Strings com caracteres especiais em Windows:
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	printf("--------ENTRADA E BUSCA DE CARROS--------\n\n");

	for(int i = 0; i < 10; i++){

		printf("[%d] Digite o nome do carro para salvar:", i + 1);
		fgets(carros[i], 21, stdin);
		carros[i][strcspn(carros[i], "\n")] = '\0';
		setbuf(stdin, NULL);

		for (int d = 0; carros[i][d] != '\0'; d++){
		carros[i][d] = tolower(carros[i][d]);
		} //Fim for que converte todos os carros em minusculo

	} // Fim for entrada do nome dos carros

	do{

		printf("Digite o carro para checar se esta no sistema:");
		fgets(entrada, 21, stdin);
		entrada[strcspn(entrada, "\n")] = '\0';
		setbuf(stdin, NULL);
		
		for(int i = 0; entrada[i] != '\0'; i++){
        entrada[i] = tolower(entrada[i]);
    	} //fim for - converte a entrada para minuscula 

		for(int d = 0; d < 10; d++){

			if (strcmp(entrada, carros[d]) == 0)
				vezes_lista++; // Soma a cada vez que o carro é encontrado na lista

		} // Fim for que percorre todos os carros armazenados no sistema

		if(vezes_lista == 0){

			printf("O carro digitado não está na lista\n\n");
			vezes_lista = 0;
		} else{

			printf("O carro aparece na lista %d vezes\n\n", vezes_lista);
			vezes_lista = 0;
		} // Fim if-else que retorna as mensagens de conter ou não na lista

	} while(strcmp(entrada, "fusca") != 0);

	return 0; // Retorna código 0 ao programa

} // Fim da main
