/*   EX 12 - Ex. Prova 2:
12) Desenvolva um programa que receba uma frase. O programa deverá gerar e exibir
uma nova string, contendo uma "palavra sim e outra não" da frase digitada, e
exibir o número de palavras da frase original.

Exemplo:
Digite uma frase: A arte de programar consiste em organizar e dominar a complexidade.
Saída
A de consiste organizar dominar complexidade.
Número de palavras: 11

Obs: Considere que serão digitadas apenas letras na frase do usuário (não tem pontuação nem números)
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <windows.h>
#include <string.h>

int main(){

	// Declarando as váriaveis:
	char entrada[41], saida[41];
	int toupper(), numero_palavras = 0, tamanho;

	// Entrada de dados:

	setlocale(LC_ALL, "Portuguese"); // Habilita os sinais ortograficos PT-BR
	// Aruma os problemas de Strings com caracteres especiais em Windows:
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	printf("--------INTERCALAR FRASES--------\n\n");

	printf("Digite uma frase:\n");
	fgets(entrada, 41, stdin);
	entrada[strcspn(entrada, "\n")] = '\0';
	setbuf(stdin, NULL);
	tamanho = strlen(entrada) + 1;

	for (int d = 0, s = 0; d < tamanho; d++){

		if(entrada[d] == ' ')
			numero_palavras++;

		if((numero_palavras % 2) == 0){
			saida[s] = entrada[d];
			s++;
		}

		if(entrada[d] == '\0')
			saida[s] = '\0';
			
	}
	
	//Exibição:

	printf("A frase de saida é: %s\n", saida);
	printf("O número de palavras da frase digitada é: %d", numero_palavras + 1);

	return 0; // Retorna código 0 ao programa

} // Fim da main
