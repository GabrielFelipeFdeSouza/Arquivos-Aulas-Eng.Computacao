/*   EX 01 - Ex. Prova:
1) Sabendo-se que 200 quilowatts de energia custa um quarto do salário mínimo, 
faça um programa que receba o valor do salário mínimo e a quantidade de quilowatts
 gasta por uma residência e mostre:
a) O valor em reais de cada quilowatt;
b) O valor em reais a ser pago pelos quilowatts gasto;
c) O novo valor a ser pago por essa residência com um desconto de 12%;
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
//Declarando as váriaveis:
	float salario_min, energia_usada, valor_quilowatt, valor_pagar;
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    printf("--------CALCULO CONTA ENERGIA--------\n");
    
//Entarda de dados usuário:
    printf("Digite o valor do salário mínimo:");
    scanf("%f", &salario_min);
    printf("Digite o valor total do gasto de energia em kW:");
    scanf("%f", &energia_usada);
    
//Calculo e exeibição dos dados:
	printf("\n"); //Linha branca
	valor_quilowatt = salario_min / 800; //Calculo do valor de 1 kW
	printf("O valor do Quilowatt é de: %.2fR$\n", valor_quilowatt);
	
	valor_pagar = valor_quilowatt * energia_usada; //Calculo do valor do total a pagar 
	printf("O valor total a pagar é de: %.2fR$\n", valor_pagar);
	
	valor_pagar = valor_pagar * 0.88; //Calculo do valor do total a pagar com 12% de desconto
	printf("O valor a pagar com 12%% de desconto é: %.2fR$", valor_pagar);
    
    
return 0; //Retorna código 0 ao programa

} //Fim da main

