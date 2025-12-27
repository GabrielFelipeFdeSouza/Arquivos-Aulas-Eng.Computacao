/*   EX 04 - AULA 14 - FUNÇÕES:
Faça uma função que receba a média final de um aluno 
por parâmetro e retorne o seu conceito, conforme a tabela 
abaixo:

   Nota     Conceito
[ 9 - 10]      A
[ 7 ? 9 [      B
[ 5 - 7 [      C
[ 0 ? 5 [      D
*/

// Para fins didáticos o código usa de recursos desnecesários, porém, para grandes aplicações ele funcionaria bem!

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>

// Declarando as váriaveis:
int calc_conceito(float media);
float media;
char conceito;

int calc_conceito(float media){
	int saida; // Definindo saida

	if(media < 0 || media > 10) 
		saida = -1;

	if(media >= 0 && media < 5)
		saida = 1;

	if(media >= 5 && media < 7)
		saida = 2;

	if(media >= 7 && media < 9)
		saida = 3;

	if(media >= 9 && media <= 10)
		saida = 4; //Fim extrutura if que verifica e manda parametro para main

	return saida;
} // Fim função define os conceitos de saida

int main(){

	setlocale(LC_ALL, "Portuguese"); // Habilita os sinais ortograficos PT-BR
	// Aruma os problemas de Strings com caracteres especiais em Windows:
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	printf("---CALCULO CONCEITO DE NOTA---\n\n");

	printf("Digite a média final do aluno:");
	scanf("%f", &media);

	int saida_final = calc_conceito(media); // Chamada da função calcula conceitos com retorno em sadia_final

	switch (saida_final){

		case 1:
			printf("O coceito do aluno é D\n");
			break;

		case 2:
			printf("O coceito do aluno é C\n");
			break;

		case 3:
			printf("O coceito do aluno é B\n");
			break;

		case 4:
			printf("O coceito do aluno é A\n");
			break;

		default:
			printf("O coceito não pode ser definido pois a entrada de nota é inválida!\n");
			break;
	} //Fim switch exibição conceitos

	return 0; // Retorna código 0 ao programa

} // Fim da main