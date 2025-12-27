/*   EX 05 - AULA 14 - FUNÇÕES:
Crie uma função que que receba o valor de um inteiro
positivo N, calcule e retorne o fatorial desse número
*/

// Para fins didáticos o código usa de recursos desnecesários, porém, para grandes aplicações ele funcionaria bem!

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>

// Declarando as váriaveis:
int calc_fatorial(int numero);
int entrada;

int calc_fatorial(int numero){
	int saida = 1; // Definindo saida

	while (numero > 0){

		saida = saida * numero;
		numero--;

	} // Fim while calcula fatorial

	return saida;
} // Fim função define os conceitos de saida

int main(){

	setlocale(LC_ALL, "Portuguese"); // Habilita os sinais ortograficos PT-BR
	// Aruma os problemas de Strings com caracteres especiais em Windows:
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	printf("---CALCULO FATORIAL - FUNÇÃO---\n\n");

	printf("Digite o número para calcular seu fatorial:");
	scanf("%d", &entrada);

	int saida_final = calc_fatorial(entrada); // Chamada da função calcula conceitos com retorno em sadia_final
	printf("O fatorial de %d é %d\n\n", entrada, saida_final);

	return 0; // Retorna código 0 ao programa

} // Fim da main