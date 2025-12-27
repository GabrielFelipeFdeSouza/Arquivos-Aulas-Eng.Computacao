/*   EX 06 - AULA 11 - VETORES:
Faça um programa que receba e armazene 20 números em 
um vetor. Em seguida exiba:
Quantos números são iguais a 30;
Quantos números são maior que a média;
Quantos números são iguais à media;
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	//Declarando as váriaveis:
	int vetor[20], iguais_trinta = 0, maiores_media = 0, iguais_media = 0;
	float media = 0;
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
	printf("---Comparação de valores de vetor---\n");
    
	//Entrada e processamento de dados:
	
	for(int i = 0; i < 20; i++){
		
		printf("Digite o valor da posição %d do vetor:", i);
		scanf("%d", &vetor[i]);
		
		media += vetor[i]; //Incrementa as entardas para fazer a média
				
	} //Fim for entrada
	
	media /= 20; //Faz a media final
	
	for(int i = 0; i <20; i++){
		
		if(vetor[i] == 30)	iguais_trinta++; //Se o vetor em i for igual a 30 incrementa 1 no acumulador
			
		if(fabs(vetor[i] - media) < 0.01) iguais_media++; //Se o vetor em i for igual a media com uma aproximação de uma casa, incrementa 1 no acumulador
		
		if(vetor[i] > media) maiores_media++; //Se o vetor em i for maior que a media incrementa 1 no acumulador
		
	} //Fim for que percorre e faz as verificalções
	
	//Imprimindo a saida dos acumuladores>
	printf("\n"); //Linha branca
	printf("A media dos valores do vetor é: %.2f\n", media);
	printf("O número de valores iguais a 30 é de: %d\n", iguais_trinta);
	printf("O número de valores maiores que a média é: %d\n", maiores_media);
	printf("A número de valores iguais a média é: %d\n", iguais_media);

           
return 0; //Retorna código 0 ao programa

} //Fim da main

