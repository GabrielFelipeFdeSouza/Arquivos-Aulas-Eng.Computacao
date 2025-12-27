/*   EX 01 - AULA 11 - VETORES:
Faça um programa que leia e armazene dois vetores de 
tamanho 5. Ao final o programa deve calcular e exibir o vetor 
soma; 
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	//Declarando as váriaveis:
	int vetor_1[5], vetor_2[5], vetor_soma[5];
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
	printf("---Somando Vetores---\n\n");
    
	//Entrada e processamento de dados:
	
	//For 1 para entrada de dados do primiro vetor:
	for(int i = 0; i < 5; i++){
		printf("Digite o termo %d do vetor 1:", i);
		scanf("%d", &vetor_1[i]);	
	} //Fim for 1
	
	printf("\n"); //Linha branca
	
	//For 2 para entrada de dados do segundo vetor:
	for(int i = 0; i < 5; i++){
		printf("Digite o termo %d do vetor 2:", i);
		scanf("%d", &vetor_2[i]);	
	} //Fim for 2
	
	printf("\n"); //Linha branca
	
	//For 3 para somar os vetores 1 e 2 e exibi-la:
	for(int i = 0; i < 5; i++){
		vetor_soma[i] = vetor_1[i] + vetor_2[i];
		printf("A soma dos vetores na posição [%d] é: %d + %d = %d\n", i, vetor_1[i], vetor_2[i], vetor_soma[i]);	
	} //Fim for 3
    
        
return 0; //Retorna código 0 ao programa

} //Fim da main

