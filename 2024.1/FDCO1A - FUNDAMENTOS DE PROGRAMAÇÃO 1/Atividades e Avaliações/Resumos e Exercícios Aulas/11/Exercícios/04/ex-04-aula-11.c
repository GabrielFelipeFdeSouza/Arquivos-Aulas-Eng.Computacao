/*   EX 04 - AULA 11 - VETORES:
Crie e inicialize um vetor de inteiros de tamanho 8. Faça a 
soma dos seus elementos, e apresente o resultado
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	//Declarando as váriaveis:
	int vetor_1[8] = {128, 29, 63, -50, 50, 76, -30, 11}, soma_vetor = 0;
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
	printf("---Soma do vetor---\n");
    
	//Entrada e processamento de dados:
	
	printf("O vetor de entrada é:\n");
	//For 1 para exibição dos dados e soma:
	for(int i = 0; i < 8; i++){
		
		printf("Valor %d: %d  ", i, vetor_1[i]);
		soma_vetor += vetor_1[i]; //Soma os n valores do vetor
	
	} //Fim for 1
	
	printf("\n"); //Linha branca
	printf("A soma do vetor é: %d", soma_vetor);
    
        
return 0; //Retorna código 0 ao programa

} //Fim da main

