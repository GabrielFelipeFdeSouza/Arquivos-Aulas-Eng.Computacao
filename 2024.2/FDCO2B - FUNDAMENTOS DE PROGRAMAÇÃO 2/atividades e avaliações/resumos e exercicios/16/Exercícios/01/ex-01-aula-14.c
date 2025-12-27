/*Fa�a um algoritmo que implemente uma fun��o que receba 3 n�meros
inteiros e retorne o maior valor
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>

// Declarando as v�riaveis:
int valores[3], saida_final;
int maior_valor(int valores_funcao[3]);

int maior_valor(int valores_funcao[3])
{
	int saida = valores_funcao[0];

	for (int d = 0; d < 3; d++)
	{

		if (valores_funcao[d] > valores_funcao[d - 1])
			saida = valores_funcao[d]; // Seta o valor de saida para o maior valor

	} // Fim for verifica��es
	return saida;
} // Fim fun��o define o maior valor

int main()
{

	setlocale(LC_ALL, "Portuguese"); // Habilita os sinais ortograficos PT-BR
	// Aruma os problemas de Strings com caracteres especiais em Windows:
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	printf("---MAIOR NUMERO - FUN��O---\n\n");

	// Entrada dos valores:
	for (int i = 0; i < 3; i++)
	{

		printf("Digite o valor %d:", i);
		scanf("%d", &valores[i]);

	} // Fim for entrada dados

	saida_final = maior_valor(valores);

	printf("\n\nO maior valor �: %d", saida_final);

	return 0; // Retorna c�digo 0 ao programa

} // Fim da main
