/*Elabore uma fun��o que receba por par�metro o sexo (caractere) e a
altura de uma pessoa (real), calcule e retorne seu peso ideal. Para isso,
utilize as f�rmulas a seguir.
# Para homens: (72.7 * altura) - 58
# Para mulheres: (62.1 * altura) - 44.7
*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>

// Declarando as v�riaveis:
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

	} // Fim case defini��es e calculo

	return saida;
} // Fim fun��o define o peso ideal

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

	saida_final = peso_ideal(sexo, altura); // Chamada da fun��o calcula peso ideal

	if (saida_final == -1)
		printf("\nO sexo informado n�o � v�lido\n");
	else
		printf("\nO seu peso ideal �: %.2f\n", saida_final);

	return 0; // Retorna c�digo 0 ao programa

} // Fim da main
