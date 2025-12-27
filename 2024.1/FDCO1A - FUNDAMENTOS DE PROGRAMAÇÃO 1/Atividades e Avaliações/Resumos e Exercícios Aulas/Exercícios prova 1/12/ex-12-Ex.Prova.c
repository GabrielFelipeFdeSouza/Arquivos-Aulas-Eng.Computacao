/*   EX 12 - Ex. Prova:
Técnicos analisam a perda da massa do Xenônio-135 e descobriram que
o tempo de meia vida desse radioisótopo é de 9h. Crie um algoritmo
para receber a massa inicial em gramas e retorne o tempo necessário
para que a massa deste material seja menor que 1 grama. Caso o tempo
exceda 24h a resposta deve ser dada em dias (Ex.: 2 dias e 6 horas)

Obs.: O algoritmo deve calcular o tempo para várias massas, finalizando 
ao receber uma massa igual a zero ou negativa.
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//OBS: Usei uma aproximação do tempo para int, para facilitar o cógigo

int main()
{

	// Declarando as variaveis:
	float massa_inicial;
	int tempo, dias, horas;

	setlocale(LC_ALL, "Portuguese"); // Habilita os sinais ortograficos PT-BR
	printf("--------CALCULO DE MASSA Xeonio-153--------\n\n");

	// Entarda de dados pelo usuário:
	
	printf("Digite a massa inicial atual do Xeonio-135:");
	scanf("%f", &massa_inicial);

	//Calculo do tempo para chegar em 1g:
	
	tempo = 9 * log(massa_inicial) / log(2); 
	
	if(tempo <= 24){
		
		printf("\n\nO tempo para o decaimento da massa incial até 1g é de: %d horas\n", tempo);	
		
	} else {
		
		dias = tempo / 24;
		horas = tempo % 24;
		
		printf("\n\nO tempo para o decaimento da massa incial até 1g é de: %d dias e %d horas\n", dias, horas);	
		
	} //If que verefica se o tempo é maior doque 24 hrs e ajusta ao formato de dias
		
	
	return 0; // Retorna código 0 ao programa

} // Fim da main
