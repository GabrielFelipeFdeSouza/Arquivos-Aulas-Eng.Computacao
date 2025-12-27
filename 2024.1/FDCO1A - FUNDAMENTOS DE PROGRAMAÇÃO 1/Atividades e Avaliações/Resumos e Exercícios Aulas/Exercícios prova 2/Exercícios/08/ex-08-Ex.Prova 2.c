/*   EX 08 - Ex. Prova 2:
8)  Faça um programa que receba o nome e o preço de custo de 3 produtos. Para isso, crie,
além da matriz com os nomes (tamanho 20), uma matriz 3x3 de preços de produtos onde cada 
coluna representa: coluna 0 é o preço de custo (digitado pelo usuário), coluna 1 será o preço 
à vista calculado (preço de custo acrescido em 10%), coluna 2 é o preço a prazo calculado 
(preço de custo acrescido em 20%).  Para tanto, relacione o índice/linha da matriz de preços 
com o índice/linha de um vetor bidimensional de strings que armazenará o nome dos produtos.
O programa deve exibir, um por um, o nome do produto e a sua tabela com todos os preços (custo, à vista e a prazo).
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <windows.h>


int main(){
	
//Declarando as váriaveis:
	float precos[3][3];
	char produtos[3][21];
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
	// Aruma os problemas de Strings com caracteres especiais em Windows:
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

    printf("--------PRODUTOS E SUAS CARACTERISTCIAS--------\n\n");
    
	for(int i = 0; i < 3; i++){

		printf("Digite o nome do produto %d:", i);
		fgets(produtos[i], 21, stdin);
		produtos[i][strcspn(produtos[i],"\n")] = '\0';
		setbuf(stdin, NULL);

		do{

			printf("Digite o preço do item %d:", i);
			scanf("%f", &precos[0][i]);
			setbuf(stdin, NULL);

		}while(precos[0][i] < 0); //Checa se o pre
		

	} //Fim for que recebe as informações

	for(int i = 0; i < 3; i++){

		precos[1][i] = precos[0][i] * 1.1;
		precos[2][i] = precos[0][i] * 1.2;

	} //Fim for que calcula os valores 

	//Exibição: 

	for(int i = 0; i < 3; i++){

	printf("O item %s tem os valores:\n", produtos[i]);	
	printf("O valor de custo é: %3.2f\n", precos[0][i]);
	printf("O valor a vista é: %3.2f\n", precos[1][i]);
	printf("O valor a prazo é: %3.2f\n", precos[2][i]);
	printf("\n"); //Linha branca

	} //Fim for exibições resultados 
	
		
return 0; //Retorna código 0 ao programa

} //Fim da main

