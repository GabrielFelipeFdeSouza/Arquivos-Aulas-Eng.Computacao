/*   EX 04 - Ex. Prova:
Faça um programa que receba 3 idades distintas e mostre: a idade da pessoa mais velha; 
a idade da pessoa mais nova e a média das 3 idades . O programa deve considerar e
informar o caso de 2 ou 3 pessoas terem a mesma idade
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{

	// Declarando as variaveis:
	int idade_1, idade_2, idade_3, media_idades, maior_idade, menor_idade;

	setlocale(LC_ALL, "Portuguese"); // Habilita os sinais ortograficos PT-BR
	printf("--------PROGRAMA DAS IDADES--------\n");

	// Entarda de dados usuário:
	do{
		printf("Digite a idade da pessoa 1:");
		scanf("%i", &idade_1); 
	} while(idade_1 < 0);
 
	do{
		printf("Digite a idade da pessoa 2:");
		scanf("%i", &idade_2); 
	} while(idade_2 < 0);
	
	do{
		printf("Digite a idade da pessoa 3:");
		scanf("%i", &idade_3); 
	} while(idade_3 < 0);

	// Vereficando idades maior e menor:
	
	maior_idade = idade_1;
	menor_idade = idade_1;
	
	if(idade_2 > maior_idade) maior_idade = idade_2;
	if(idade_3 > maior_idade) maior_idade = idade_3;
	
	if(idade_2 < menor_idade) menor_idade = idade_2;
	if(idade_2 < menor_idade) menor_idade = idade_3;
	
	//Calculando Média de idades:	
	
	media_idades = (idade_1 + idade_2 + idade_3) / 3;
	
	//Exibindo a maior, menor e média:
	
	printf("\nA maior idade é: %d\n", maior_idade);
	printf("A menor idade é: %d\n", menor_idade);
	printf("A média de idades é aproximadamente: %d\n", media_idades);
	
	//Vereficando idades iguais 
	
	if(idade_1 == idade_2 && idade_1 == idade_3){
		printf("As tres pessoas tem idades iguais\n");
	} else {
		if(idade_1 == idade_2 || idade_2 == idade_3 || idade_1 == idade_3) 
		printf("Duas pessoas tem idades iguais\n");
	}
		

	return 0; // Retorna código 0 ao programa

} // Fim da main
