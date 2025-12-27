/*   EX 03 - AULA 14 - FUNÇÕES:
Escreva um procedimento que recebe por parâmetro as 3 notas de um
aluno e uma letra. Se a letra for A, o procedimento calcula a média
aritm?tica das notas do aluno, se for P, a sua média ponderada (pesos: 5, 3
e 2) e se for S, a soma das notas. O valor calculado também deve ser
retornado e exibido na função main.
*/

// Para fins didáticos o código usa de recursos desnecesários, porém, para grandes aplicações ele funcionaria bem!

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>

// Declarando as váriaveis:
int calc_notas(char letra, int notas[3]);
int notas[3], saida_final;
char letra;

int calc_notas(char letra, int notas[3]){
	int saida; // Definindo saida

	switch (letra){

	case 'a':
		saida = (notas[0] + notas[1] + notas[2]) / 3;
		break;

	case 'p':
		saida = (notas[0] * 5 + notas[1] * 3 + notas[2] * 2) / 10;
		break;

	case 's':
		saida = notas[0] + notas[1] + notas[2];
		break;

	default:
		break;

	} // Fim case defini??es e calculo

	return saida;
} // Fim fun??o define as notas de saida

int main(){

	setlocale(LC_ALL, "Portuguese"); // Habilita os sinais ortograficos PT-BR
	// Aruma os problemas de Strings com caracteres especiais em Windows:
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	printf("---CALCULO E OPERA??ES NOTAS---\n\n");

	printf("Digite a opera??o:\n");
	printf("S - Somar, A - m?dia aritim?tica, P - M?dia Ponderada:");
	scanf("%c", &letra);
	setbuf(stdin, NULL); // Limpa o buffer de entrada
	letra = tolower(letra);

	for (int i = 0; i < 3; i++){

		printf("Digite a nota %d:", i + 1);
		scanf("%d", &notas[i]);

	} // Fim for entrada das 3 notas

	saida_final = calc_notas(letra, notas); // Chamada da fun??o calcula notas

	switch (letra){

	case 'a':
		printf("A m?dia aritim?tica ?: %d", saida_final);
		break;

	case 'p':
		printf("A m?dia ponderada ?: %d", saida_final);
		break;

	case 's':
		printf("A soma ?: %d", saida_final);
		break;

	default:
		printf("A letra informada ? inv?lida");
		break;

	} // Fim case exibi??es

	return 0; // Retorna c?digo 0 ao programa

} // Fim da main
