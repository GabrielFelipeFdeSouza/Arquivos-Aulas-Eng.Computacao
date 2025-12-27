/*   EX 05 - Ex. Prova:
Fa�a um programa que receba 2 n�meros referentes ao numerador e denominador
de uma fra��o e informe se � uma fra��o pr�pria, impr�pria, ou aparente
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{

	// Declarando as variaveis:
	int numerador, denominador;

	setlocale(LC_ALL, "Portuguese"); // Habilita os sinais ortograficos PT-BR
	printf("--------FRA��ES--------\n");

	// Entarda de dados usu�rio:
	printf("Digite o numerador da fra��o:");
	scanf("%d", &numerador);
	printf("Digite o denominador da fra��o:");
	scanf("%d", &denominador);
	
	//Verefica��o e categoriza��o:
	
	printf("\n");
	
	if(numerador > denominador)
		printf("A fra��oe � impr�pria!\n");
		
	if(numerador < denominador)
		printf("A fra��oe � pr�pria!\n");
		
	if ((numerador % denominador) == 0) //Verefica o resto da divis�o, sendo que em 0 � uma fra��o aparente
		printf("� uma fra��o Aparente!\n");

	return 0; // Retorna c�digo 0 ao programa

} // Fim da main
