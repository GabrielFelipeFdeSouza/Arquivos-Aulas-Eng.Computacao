/*   EX 03 - AULA 6 - IF E ELSE:
Faça um programa que receba os coeficientes a, b e c
de uma equação do segundo grau e retorne as raízes da 
equação (se existirem).
? Para isso, lembre-se da fórmula de Báskara
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

    	
	//Para se ter raizes nos números reais, deve-se ter o delta >= 0, pois não há raiz quadrada de números negativos!
	
int main(){
	
//Declarando as váriaveis:
	double r1; //raiz 1
	double r2; //raiz 2
	double a; //coeficiente a
	double b; //coeficiente b
	double c; //coeficiente c
	double delta; //delta da equação
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    printf ("---------------------------------------\n");
    printf ("CALCULADORA DAS RAÍZES DA EQUAÇÃO DE SEGUNDO GRAU:\n");
    printf ("Digite o coeficiente a:\n");
    scanf ("%lf", &a);
    
    if(a == 0){ 
    	printf ("Se a = 0, não é uma equação de segundo grau!\n");
    } else { 
    	printf ("Digite o coeficiente b:\n");
    	scanf ("%lf", &b);
    	printf ("Digite o coeficiente c:\n");
    	scanf ("%lf", &c);
    	delta = pow(b, 2) - 4*a*c;
    
    if(delta == 0){
    	r1 = -b / (2*a);
    	printf ("---------------------------------------\n");
    	printf ("Como delta é 0,00 a única raíz é: %.2lf\n", r1);
    	printf ("---------------------------------------\n");	
	} else if(delta < 0){
		printf ("---------------------------------------\n");
   		printf ("Como delta é menor que 0,00 não há raízes nos reais\n");
    	printf ("---------------------------------------\n");
	} else{ 
		r1 = (-b + sqrt(delta))/ (2*a);
		r2 = (-b - sqrt(delta))/ (2*a);
		printf ("---------------------------------------\n");
   		printf ("Como delta é maior que 0,00 as raízes são R1 = %.2lf e R2 = %.2lf\n", r1, r2);
    	printf ("---------------------------------------\n");
	}
    }
    
system("pause"); //Usado para o terminal windowns pausar 
return 0;

} //Fim da main

