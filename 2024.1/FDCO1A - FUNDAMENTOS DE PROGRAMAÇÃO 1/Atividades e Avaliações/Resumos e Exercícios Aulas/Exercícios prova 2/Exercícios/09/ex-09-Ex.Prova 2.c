/*   EX 09 - Ex. Prova 2:
9) Faça um programa que receba e armazene uma matriz de números inteiros de tamanho 4x3
em seguida o programa deverá exibir:
   a) A soma de todos os elementos pares positivos da matriz;
   b) A média de todos os elementos da matriz;
   c) A quantidade de todos os elementos impares da matriz;
   d) A soma dos elementos da segunda linha da matriz;
   e) O maior elemento da terceira coluna da matriz;
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <windows.h>


int main(){
	
//Declarando as váriaveis:
	int matriz[4][3], soma_pares = 0, media = 0, numeros_impares = 0, soma_segundalinha = 0, maior_terceiracoluna = 0;

	//Entrada de dados:
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
	// Aruma os problemas de Strings com caracteres especiais em Windows:
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

    printf("--------MATRIZ 4X3 E SUAS CARACTERISTCIAS--------\n\n");
    
	for(int i = 0; i < 4; i++){

		for(int s = 0; s < 3; s++){

			printf("Digite o elemento [%d][%d] da matriz:", i, s);
			scanf("%d", &matriz[i][s]);

			if((matriz[i][s] % 2 == 0) && matriz[i][s] > 0)
				soma_pares += matriz[i][s]; //Checa se é par positivo e conta

			media += matriz[i][s]; //Faz a media de todos os elementos da matriz

			if(matriz[i][s] % 2 != 0)
				numeros_impares++; //Checa se é impar e acumula contador
			
			if(i == 1)
				soma_segundalinha += matriz[i][s]; //Checa se está na linha 2 e soma 

			if(s == 2){
				if(i == 0)
					maior_terceiracoluna == matriz[i][s];

				if(matriz[i][s] > maior_terceiracoluna)
					maior_terceiracoluna = matriz[i][s]; 

			} //Checa e retorna o maior elemento da matriz da coluna 3
		}

	} //Fim for que recebe a matriz e faz as aculuções e testes pedidos

	printf("\n"); //Linha braca

	for(int i = 0; i < 4; i++){

		for(int s = 0; s < 3; s++){

			printf("%3d", matriz[i][s]);

		}

		printf("\n"); //Linha branca

	} //For de exibição da matriz
		
	//Exibição: 
	printf("\nRESULTADOS:\n");
	printf("A soma de pares positivos é: %d\n", soma_pares);
	printf("A média da matriz é de: %d\n", media/12);
	printf("A quantidade de números impares é de: %d\n", numeros_impares);
	printf("A soma dos elementos da segunda linha é de: %d\n", soma_segundalinha);
	printf("O maior elemento da terceira coluna é: %d\n", maior_terceiracoluna);
	
		
return 0; //Retorna código 0 ao programa

} //Fim da main

