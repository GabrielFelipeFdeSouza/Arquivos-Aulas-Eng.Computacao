/*   EX 07 - Ex. Prova 2:
7) Faça um programa que receba duas matrizes de números inteiros A e B, ambas 2x3.
Em seguida calcule uma matriz C segundo a fórmula C = (A + B) * 2. Mostre a matriz C resultante.
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main(){
	
//Declarando as váriaveis:
	int matriz_a[2][3], matriz_b[2][3], matriz_saida[2][3];
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    printf("--------CALCULO SOMA DE MATRIZ--------\n\n");
    
//Lendo as matrizez a e b:

	for(int i = 0; i < 2; i++){

		for(int d = 0; d < 3; d++){

			printf("Digite o elemento [%d][%d] da matriz A:", i, d);
			scanf("%d", &matriz_a[i][d]);

 		}

	} //Fim for alinhado que recebe a matriz a

	for(int i = 0; i < 2; i++){

		for(int d = 0; d < 3; d++){

			printf("Digite o elemento [%d][%d] da matriz B:", i, d);
			scanf("%d", &matriz_b[i][d]);

 		}

	} //Fim for alinhado que recebe a matriz b
	
	printf("\n"); //Linha branca

	for(int i = 0; i < 2; i++){

		for(int d = 0; d < 3; d++){

			matriz_saida[i][d] = (matriz_a[i][d] + matriz_b[i][d]) *2;

 		}

	} //Fim for alinhado que calcula a matriz de saida c
	
	printf("\n"); //Linha branca
	
	//Exibição:

	printf("Matriz de saida:\n\n");

	for(int i = 0; i < 2; i++){

		for(int d = 0; d < 3; d++){

			printf("%2d ", matriz_saida[i][d]);

 		}

		printf("\n"); //Linha branca

	} //Fim for alinhado que exibe a matriz de saida c
		
return 0; //Retorna código 0 ao programa

} //Fim da main

