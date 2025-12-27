/*   EX 02 - AULA 14 - FUNÇÕES:
Elabore uma função que receba por parâmetro o sexo (caractere) e a
altura de uma pessoa (real), calcule e retorne seu peso ideal. Para isso,
utilize as fórmulas a seguir.
# Para homens: (72.7 * altura) - 58
# Para mulheres: (62.1 * altura) - 44.7
*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>

// Declarando as váriaveis:
float peso_ideal(char sexo, float altura);
float altura, saida_final;
char sexo;

float peso_ideal(char sexo, float altura){
	float saida; // Definindo saida

	switch (sexo){

	case 'm':
		saida = (72.7 * altura) - 58;
		break;

	case 'f':
		saida = (62.1 * altura) - 44.7;
		break;

	default:
		saida = -1;
		break;

	} // Fim case definições e calculo

	return saida;
} // Fim função define o peso ideal

int main(){

	setlocale(LC_ALL, "Portuguese"); // Habilita os sinais ortograficos PT-BR
	// Aruma os problemas de Strings com caracteres especiais em Windows:
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	printf("---CALCULO PESO IDEAL---\n\n");

	printf("Digite seu sexo (F | M):");
	scanf("%c", &sexo);
	setbuf(stdin, NULL); // Limpa o buffer de entrada
	sexo = tolower(sexo);
	printf("Digite sua altura:");
	scanf("%f", &altura);

	saida_final = peso_ideal(sexo, altura); // Chamada da função calcula peso ideal

	if (saida_final == -1)
		printf("\nO sexo informado não é válido\n");
	else
		printf("\nO seu peso ideal é: %.2f\n", saida_final);

	return 0; // Retorna código 0 ao programa

} // Fim da main
