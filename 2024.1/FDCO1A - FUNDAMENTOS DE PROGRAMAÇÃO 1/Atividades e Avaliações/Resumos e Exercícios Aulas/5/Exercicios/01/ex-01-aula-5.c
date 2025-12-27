/*   EX 01 - AULA 5 - ENTRADA DE DADOS:
Faça um programa que receba a altura de uma pessoa e 
calcule e exiba seu peso ideal utilizando a seguinte:
peso ideal = 72.7 x altura – 58
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

    //Declarando as váriaveis:
	double peso;
	double altura;

int main(){

    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    printf ("---------------------------------------\n");
    printf ("Digite a sua altura para calcularmos o peso\n");
    scanf ("%lf", &altura);
    peso = 72.7 * altura - 58.0;
    printf ("---------------------------------------\n");
    printf ("O seu peso deve ser de: %.2lfKg para sua altura de: %.2fM\n", peso, altura);
    printf ("---------------------------------------\n");
    
system("pause"); //Usado para o terminal windowns pausar 
return 0;

} //Fim da main

