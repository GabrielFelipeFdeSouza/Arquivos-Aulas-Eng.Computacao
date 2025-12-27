/*   EX 04 - Ex. Prova 2:
4) Faça um programa que leia e armazene um vetor (VetorA)
de inteiros e tamanho 10. Crie um VetorB, de mesmo tamanho, 
gerado a partir do Vetor A invertido (de trás para frente). 
Em seguida, calcule o VetorC que deverá ser o resultado do VetorA 
multiplicado pelo escalar 3 e em seguida subtraído do Vetor B.
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
//Declarando as váriaveis:
	int vetor_A[10], vetor_B[10], vetor_C[10];
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    printf("--------OPERAÇÃO DE VETORES--------\n\n");
    
//Lendo vetor A:

	for(int i = 0; i < 10; i++){
		
		printf("Digite o elemento %d do vetor A:", i);
		scanf("%d", &vetor_A[i]);
		
	} //Fim for que recebe o vetor A
	
	for(int i = 0; i < 10; i++){
		
		vetor_B[i] = vetor_A[9 - i];
		
	} //Fim for que inverte o vetor A e armazena em B
	
	for(int i = 0; i <10; i++){
		
		vetor_C[i] = 3 * vetor_A[i] - vetor_B[i];
		
	} //Fim for criação vetor C
	
	printf("\n"); //Linha branca
	printf("Vetor B:\n");
	
	for(int i = 0; i < 10; i++){
		
		printf("Elemento %d do vetor B: %d\n", i, vetor_B[i]);
		
	} //Fim for que exibe o vetor B
	
	printf("\n"); //Linha branca
	printf("Vetor C:\n");
	
	for(int i = 0; i < 10; i++){
		
		printf("Elemento %d do vetor C: %d\n", i, vetor_C[i]);
		
	} //Fim for que exibe o vetor C
    
return 0; //Retorna código 0 ao programa

} //Fim da main

