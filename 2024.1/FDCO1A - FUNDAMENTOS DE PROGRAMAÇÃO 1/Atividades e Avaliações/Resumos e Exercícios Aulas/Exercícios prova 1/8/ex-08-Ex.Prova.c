/*   EX 08 - Ex. Prova:
 Crie um programa que, ao receber três números, verifique se podem ser
lados de um triângulo e nesse caso mostre se o triângulo é equilátero,
isosceles ou escaleno. Caso seja um triângulo retângulo, o programa deve também informar

OBS: Para a existencia de um triangulo qualquer dado seus lados da forma a, b, c 
as seguintes desigualdades devem ser cumpridas:

a < b + c
b < a + c
c < a + b
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{

	// Declarando as variaveis:
	float lado_a, lado_b, lado_c;

	setlocale(LC_ALL, "Portuguese"); // Habilita os sinais ortograficos PT-BR
	printf("--------CÁLCULO DOS TRIANGULOS--------\n");

	// Entarda de dados pelo usuário:
	printf("\n*Digite o lado a do triangulo:");
	scanf("%f", &lado_a);
	printf("\n*Digite o lado b do triangulo:");
	scanf("%f", &lado_b);	
	printf("\n*Digite o lado c do triangulo:");
	scanf("%f", &lado_c);

//Vereficando as regras de exitencia do triangulo e sua classificação:


if(lado_a < lado_b + lado_c && lado_b < lado_a + lado_c && lado_c < lado_a + lado_b){
	
	printf("\nUm triangulo é possivel com os lados digitados!\n");
	
	if(lado_a == lado_b && lado_a == lado_c){
		
		printf("\nÉ um triangulo equilátero!\n");
		
	} else {
		
		if(lado_a == lado_b || lado_a == lado_c || lado_b == lado_c){
			
		printf("\nÉ um triangulo Isócles!\n");	
		
			} else {
				
				printf("\nÉ um triangulo Escaleno!\n");	
			} //Fim else triangulo escaleno
	} //Fim else triangulo isóceles
	
	
	if((pow(lado_a, 2) == pow(lado_b, 2) + pow(lado_c, 2)) || 
	(pow(lado_b, 2) == pow(lado_a, 2) + pow(lado_c, 2)) || 
	(pow(lado_c, 2) == pow(lado_a, 2) + pow(lado_b, 2))){
		
		printf("\nÉ um triangulo Retangulo!\n");	
	} //If que verifica se é retangulo
	
	
} else{
	
	printf("\nNão é possivel formar um triangulo com os lados digitados!\n");
	
} //Fim else da vereficação de existencia do triangulo
	

	return 0; // Retorna código 0 ao programa

} // Fim da main
