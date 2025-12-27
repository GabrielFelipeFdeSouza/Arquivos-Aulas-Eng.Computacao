/*   EX 03 - AULA 11 - VETORES:
Leia um vetor A com 10 elementos inteiros correspondentes 
as idades de um grupo de pessoas. Escreva um programa que 
conte e exiba a quantidade de pessoas que possuem idade 
superior a 35 anos
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	//Declarando as váriaveis:
	int vetor_1[10], pessoas_idade35 = 0;
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
	printf("---Contagem de idade---\n\n");
    
	//Entrada e processamento de dados:
	
	//For 1 para entrada de dados do vetor de entrada das idades:
	for(int i = 0; i < 10; i++){
		
		do{
			
			printf("Digite a idade %d do vetor idades:", i);
			scanf("%d", &vetor_1[i]);
				
			if(vetor_1[i] > 35){
			pessoas_idade35 ++;
			} //Fim if contagem
		
		} while(vetor_1[i < 0]); //Laço do-while que evita entradas de idade negativa
	
	} //Fim for 1
	
	printf("\n"); //Linha branca
	printf("O número de pessoas com idade maior de 35 anos é: %d", pessoas_idade35);
    
        
return 0; //Retorna código 0 ao programa

} //Fim da main

