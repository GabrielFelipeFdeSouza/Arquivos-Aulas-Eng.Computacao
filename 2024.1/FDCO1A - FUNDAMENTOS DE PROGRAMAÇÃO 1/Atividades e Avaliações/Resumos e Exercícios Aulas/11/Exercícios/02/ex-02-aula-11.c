/*   EX 02 - AULA 11 - VETORES:
Crie um algoritmo que receba 10 números e os armazene em 
um vetor A. Em seguida, gere o vetor B onde cada elemento é o 
quadrado do valor da mesma posição no vetor A  
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	//Declarando as váriaveis:
	int vetor_1[10], vetor_saida[10];
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
	printf("---Quadrado de Vetores---\n\n");
    
	//Entrada e processamento de dados:
	
	//For 1 para entrada de dados do vetor de entrada:
	for(int i = 0; i < 10; i++){
		printf("Digite o termo %d do vetor 1:", i);
		scanf("%d", &vetor_1[i]);	
	} //Fim for 1
	
	printf("\n"); //Linha branca
	
	//For 2 para fazer o quadrado e exibi-lo:
	for(int i = 0; i < 10; i++){
		vetor_saida[i] = pow(vetor_1[i], 2);
		printf("[%d] O quadrado de %d é %d\n", i, vetor_1[i], vetor_saida[i]);	
	} //Fim for 3
    
        
return 0; //Retorna código 0 ao programa

} //Fim da main

