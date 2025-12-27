/*   EX 09 - Ex. Prova:
Faça um programa que receba o dia, mês e ano de uma data e informe se é uma data válida ou não
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{

	// Declarando as variaveis:
	int dia, mes, ano, validade = 0;

	setlocale(LC_ALL, "Portuguese"); // Habilita os sinais ortograficos PT-BR
	printf("--------VEREFICAÇÃO DAS HORAS--------\n");

	// Entarda de dados pelo usuário:
	printf("\n*Digite uma data (EX: 20/09/2024):");
	scanf("%d/%d/%d", &dia, &mes, &ano);

//Vereficando se a data é valida:

//Criei blocos de vereficação, camada por camada afim de eliminar os casos até a1 veracidade!

if(ano < 0 || mes <= 0 || dia <= 0 || dia >= 32 || mes > 12){
	
	printf("\nData inválida!\n");
	validade = 1;
	
} else {
	
	if(mes == 4 || mes == 6 || mes == 9 || mes == 11 ){
		
		if(dia >= 31){
			
			printf("\nData inválida!\n");
			validade = 1;
			
		}			
		
	} else {
		
		if(mes == 2){
			
			if((ano % 4) == 0 && dia >= 30){
				
				printf("\nData inválida!\n");
				validade = 1;
				
			} else {
				
				if((ano % 4) != 0 && dia >= 29){
					
					printf("\nData inválida!\n");
					validade = 1;
					
				} //If checa em anos não bicestos o dia 29/02
					
			} //Else checa em anos bicestos o dia 29/02
			
		} //If checa mes 2
			
	} //Else checa mes 2
	
	
} //Else checa meses de dias 30 apenas
	
	if(validade == 0){
		
		printf("\nData Válida!\n");
		
	}

	return 0; // Retorna código 0 ao programa

} // Fim da main
