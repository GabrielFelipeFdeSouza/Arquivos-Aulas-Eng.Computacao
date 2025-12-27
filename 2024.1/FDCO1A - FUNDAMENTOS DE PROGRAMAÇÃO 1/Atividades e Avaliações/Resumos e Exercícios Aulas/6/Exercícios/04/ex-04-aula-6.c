/*   EX 04 - AULA 6 - IF E ELSE:
Faça um programa que calcule o imposto de renda a ser 
pago tendo como entrada o salário de um empregado. O 
imposto deve ser calculado da seguinte maneira:
imposto = salário x alíquota – parcela da dedução
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

	
int main(){
	
//Declarando as váriaveis:
	double salario;
	double imposto; 
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    printf ("---------------------------------------\n");
    printf ("CALCULADORA DE IMPOSTO A PAGAR:\n");
    printf ("Digite o salário:\n");
    scanf ("%lf", &salario);
    
    
    if(salario <= 1903.98){
    	printf ("---------------------------------------\n");
    	printf ("O imposto a ser pago é de R$0,00\n");
    	printf ("---------------------------------------\n");	
	} else if(salario <= 2826.65){
		imposto = salario * 0.075 - 142.80; 
		printf ("---------------------------------------\n");
    	printf ("O imposto a ser pago é de R$%.2lf\n", imposto);
    	printf ("---------------------------------------\n");
	} else if(salario <= 3751.05) { 
		imposto = salario * 0.15 - 354.80; 
		printf ("---------------------------------------\n");
    	printf ("O imposto a ser pago é de R$%.2lf\n", imposto);
    	printf ("---------------------------------------\n");
	} else if(salario <= 4664.68) { 
		imposto = salario * 0.225 - 636.13; 
		printf ("---------------------------------------\n");
    	printf ("O imposto a ser pago é de R$%.2lf\n", imposto);
    	printf ("---------------------------------------\n");
	} else { 
		imposto = salario * 0.275 - 869.36; 
		printf ("---------------------------------------\n");
    	printf ("O imposto a ser pago é de R$%.2lf\n", imposto);
    	printf ("---------------------------------------\n");
	}//else final 
    
    
system("pause"); //Usado para o terminal windowns pausar 
return 0;

} //Fim da main

