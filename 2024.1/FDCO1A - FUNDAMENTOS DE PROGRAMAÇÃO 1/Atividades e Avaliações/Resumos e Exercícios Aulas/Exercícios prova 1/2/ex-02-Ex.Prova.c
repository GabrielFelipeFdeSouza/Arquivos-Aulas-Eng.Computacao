/*   EX 02 - Ex. Prova:
 Fazer um programa para ler as coordenadas x e y de dois pontos e calcular
a distancia entre os dois pontos no plano, através da seguinte fórmula:

d= RAIZ QUADRADA( (x2-x1)2+(y2-y1)2 )
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{

	// Declarando as variaveis:
	float coordenada_x1, coordenada_y1, coordenada_x2, coordenada_y2, distancia;

	setlocale(LC_ALL, "Portuguese"); // Habilita os sinais ortograficos PT-BR
	printf("--------CALCULO DISTANCIA 2 PONTOS--------\n");

	// Entarda de dados usuário:
	printf("Digite a coordenada X do ponto A:");
	scanf("%f", &coordenada_x1);
	printf("Digite a coordenada Y do ponto A:");
	scanf("%f", &coordenada_y1);
	printf("Digite a coordenada X do ponto B:");
	scanf("%f", &coordenada_x2);
	printf("Digite a coordenada Y do ponto B:");
	scanf("%f", &coordenada_y2);

	// Calculo e exeibição dos dados:
	printf("\n"); // Linha branca
	
	distancia = sqrt( pow((coordenada_x2 - coordenada_x1), 2) + pow((coordenada_y2 - coordenada_y1), 2)); //É a fórmula matemática que realiza o calculo da distancia
	printf("A distancia entre os pontos A e B é de: %.2f", distancia); //Exibe a respota ao usuário

	return 0; // Retorna código 0 ao programa

} // Fim da main
