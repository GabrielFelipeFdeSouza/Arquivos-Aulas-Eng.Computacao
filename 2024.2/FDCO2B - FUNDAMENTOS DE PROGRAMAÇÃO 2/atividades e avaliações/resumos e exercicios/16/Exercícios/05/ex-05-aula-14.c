/*Crie uma fun��o que que receba o valor de um inteiro
positivo N, calcule e retorne o fatorial desse n�mero
*/

// Para fins did�ticos o c�digo usa de recursos desneces�rios, por�m, para grandes aplica��es ele funcionaria bem!

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>

// Declarando as v�riaveis:
int calc_fatorial(int numero);
int entrada;

int calc_fatorial(int numero){
	int saida = 1; // Definindo saida

	while (numero > 0){

		saida = saida * numero;
		numero--;

	} // Fim while calcula fatorial

	return saida;
} // Fim fun��o define os conceitos de saida

int main(){

	setlocale(LC_ALL, "Portuguese"); // Habilita os sinais ortograficos PT-BR
	// Aruma os problemas de Strings com caracteres especiais em Windows:
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	printf("---CALCULO FATORIAL - FUN��O---\n\n");

	printf("Digite o n�mero para calcular seu fatorial:");
	scanf("%d", &entrada);

	int saida_final = calc_fatorial(entrada); // Chamada da fun��o calcula conceitos com retorno em sadia_final
	printf("O fatorial de %d � %d\n\n", entrada, saida_final);

	return 0; // Retorna c�digo 0 ao programa

} // Fim da main