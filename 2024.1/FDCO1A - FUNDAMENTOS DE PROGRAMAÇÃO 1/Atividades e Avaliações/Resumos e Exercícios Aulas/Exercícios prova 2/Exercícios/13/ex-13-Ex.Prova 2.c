/*   EX 13 - Ex. Prova 2:
13) Utilizando uma matriz de pontos (cada linha é um ponto contendo as colunas X e Y) faça o que se pede:

a) Em uma função, faça um programa que receba os valores de 10 pontos no espaço cartesiano 2D
b) Receba os dados referentes a 2 pontos (V1 e V2) que representam os vértices de um Retângulo.
c) Em uma função, preencha e exiba um outro vetor de pontos contendo apenas os pontos que estão dentro
do retângulo formado pelos pontos V1 e V2.
d) Faça uma função que exiba os pontos armazenados no vetor2
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <windows.h>
#include <string.h>

// Declarando váriaveis globais:
int quantidade = 0;
void preenche_matriz(int pontos[10][2]);
void verifica_pontos(int vertices[4][2], int pontos[10][2], int pontos_contidos[10][2]);
void exibe(int pontos_contidos[10][2]); // Funções usadas

void preenche_matriz(int pontos[10][2]){

	for (int i = 0; i < 10; i++){

		printf("[Ponto %d] Digite o valor x:", i);
		scanf("%d", &pontos[i][0]);
		printf("[Ponto %d] Digite o valor y:", i);
		scanf("%d", &pontos[i][1]);
		printf("\n");

	} // Fim for de entrada pontos

} // Fim função que preenche a matriz

void verifica_pontos(int vertices[4][2], int pontos[10][2], int pontos_contidos[10][2]){

	int v_maior[2], v_menor[2];

	// Bloco que cria os outros vértices
	vertices[2][0] = vertices[0][0];
	vertices[2][1] = vertices[0][1];
	vertices[3][0] = vertices[1][0];
	vertices[3][1] = vertices[1][1];

	// Seta os valores do maior e menor para usar no for de checagem:
	v_maior[0] = vertices[0][0];
	v_maior[1] = vertices[0][1];
	v_menor[0] = vertices[0][0];
	v_menor[1] = vertices[0][1];

	// For para verificar os vertices maior e menor:
	for (int s = 0; s < 4; s++){

		if (v_maior[0] <= vertices[s][0])
			v_maior[0] = vertices[s][0];
		if (v_maior[1] <= vertices[s][1])
			v_maior[1] = vertices[s][1];

		if (v_menor[0] > vertices[s][0])
			v_menor[0] = vertices[s][0];
		if (v_menor[1] > vertices[s][1])
			v_menor[1] = vertices[s][1];

	} // Fim for que define os vertices principais

	for (int v = 0; v < 10; v++){

		if (pontos[v][0] >= v_menor[0] && pontos[v][1] >= v_menor[1] && pontos[v][0] <= v_maior[0] && pontos[v][1] <= v_maior[1]){
			pontos_contidos[quantidade][0] = pontos[v][0];
			pontos_contidos[quantidade][1] = pontos[v][1];
			quantidade++;
		} // Fim if que checa se o ponto em questão tem as regras para estar dentro do retangulo

	} // Fim for que define se o ponto está dentro do retangulo

} // Fim função que verifica se os pontos digitados contem-se no retangulo

void exibe(int pontos_contidos[10][2]){

	printf("\n"); // Linha branca

	for (int i = 0; i < quantidade; i++){

		printf("O ponto (%d, %d) está contido no tal retangulo!\n", pontos_contidos[i][0], pontos_contidos[i][1]);

	} // Fim for que exibe os pontos contidos

} // Fim função que exibe os pontos contidos

int main(){
	// Declaração de váriaveis:
	int pontos_contidos[10][2], pontos[10][2];
	int vertices[4][2];

	// Entrada de dados:

	setlocale(LC_ALL, "Portuguese"); // Habilita os sinais ortograficos PT-BR
	// Aruma os problemas de Strings com caracteres especiais em Windows:
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	printf("--------PONTO DE RETANGULO--------\n\n");

	preenche_matriz(pontos);

	// Entrada vertices retangulo:
	printf("Digite o vertice 1 do retangulo - Eixo X:");
	scanf("%d", &vertices[0][0]);
	printf("Digite o vertice 1 do retangulo - Eixo Y:");
	scanf("%d", &vertices[0][1]);
	printf("Digite o vertice 2 do retangulo - Eixo X:");
	scanf("%d", &vertices[1][0]);
	printf("Digite o vertice 2 do retangulo - Eixo Y:");
	scanf("%d", &vertices[1][1]);

	verifica_pontos(vertices, pontos, pontos_contidos);

	exibe(pontos_contidos);

	return 0; // Retorna código 0 ao programa

} // Fim da main
