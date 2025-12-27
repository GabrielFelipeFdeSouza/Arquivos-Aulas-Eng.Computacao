/*   EX 03 - Ex. Prova:
Faça um programa que tenha como entrada: o número de horas, minutos e
segundos atuais, informe quantos segundos faltam para chegar terminar o dia.
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{

	// Declarando as variaveis:
	int hora, min, seg, tempo_somado, tempo_falta;

	setlocale(LC_ALL, "Portuguese"); // Habilita os sinais ortograficos PT-BR
	printf("--------HORÁRIO DO DIA--------\n");

	// Entarda de dados usuário:
	printf("Digite a hora, os minutos e segundos atuais (EX: 16:25:45):");
	scanf("%d:%d:%d",&hora,&min,&seg); //Entrada da hora atual pelo usuário

	// Calculo e exeibição dos dados:
	printf("\n");  // Linha branca
	
	tempo_somado = (hora * 3600) + (min * 60) + seg; //Somando a hora digitado para segundos
	tempo_falta = 86400 - tempo_somado; //Tempo em segundos que falta para acabar o dia
	
	printf("A quantidade de segundos que falta é de: %d", tempo_falta);

	return 0; // Retorna código 0 ao programa

} // Fim da main
