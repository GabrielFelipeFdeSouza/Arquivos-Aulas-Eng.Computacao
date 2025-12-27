/*   EX 07 - Ex. Prova:
Considerando uma aplicação de renda fixa, faça um programa que receba o capital investido,
a taxa (em %) e a quantidade de meses. O programa deverá retornar o montante final
considerando o desconto do imposto de renda segundo regras abaixo:

22,5% - prazo inferior a 6 meses
20% - de 6 a 12 meses
17,5% - de 12 a 24 meses
15% - igual ou superior a 24 meses
Obs: O imposto é calculado apenas sobre o lucro da aplicação.
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{

	// Declarando as variaveis:
	float capital, taxa, saida_final, lucro;
	int tempo;

	setlocale(LC_ALL, "Portuguese"); // Habilita os sinais ortograficos PT-BR
	printf("--------CÁLCULO APLICAÇÕES MONETÁRIAS--------\n");

	// Entarda de dados pelo usuário:
	printf("\n*Digite o capital investido:*\n");
	scanf("%f", &capital);
	printf("\n*Digite a taxa em %:*\n");
	scanf("%f", &taxa);	
	setbuf(stdin, NULL); //Limpa o buffer de teclado caso haja o % na entrada do usuário 
	printf("\n*Digite o tempo da aplicalção:*\n");
	scanf("%d", &tempo);

//Vereficando quanto deve ser debitado de imposto em cada caso de tempo:

	if(tempo < 6)
		saida_final = capital + (capital * taxa * tempo / 100) * 0.775;	
	
	if(tempo >= 6 && tempo < 12)
		saida_final = capital + (capital * taxa * tempo / 100) * 0.80;
	
	if(tempo >= 12 && tempo < 24)
		saida_final = capital + (capital * taxa * tempo / 100) * 0.825;	
	
	if(tempo >= 24)
		saida_final = capital + (capital * taxa * tempo / 100) * 0.85;	
	
	printf("\nO resultado da aplicação após %d meses foi de %.2f", tempo, saida_final);
	

	return 0; // Retorna código 0 ao programa

} // Fim da main
