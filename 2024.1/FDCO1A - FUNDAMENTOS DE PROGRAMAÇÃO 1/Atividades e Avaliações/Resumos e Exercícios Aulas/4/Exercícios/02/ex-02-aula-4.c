/*   EX 02 - AULA 4 - OPERADORES ARITIMÉTICOS:
Uma conta de caderneta de poupança foi aberta com um 
depósito de R$ 500,00. Imagine que esta conta é remunerada 
em 1% de juros ao mês. Qual será o valor da conta após três 
meses?*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

//Considerando que a conta bancaria do enunciado está como conta de juros compostos:

int main(){
	//Declarando as váriaveis + calculo (poupar linhas):
	float taxa = 1.0 / 100.0;
	int tempo = 3; //em meses
	float valorfinal = 500 * pow(1+taxa,tempo);


    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    printf ("O tempo de rendimento foi de: %i meses\nA taxa foi de: 1%%\nO Valor final após o período foi de: %.2f Reais\n", tempo, valorfinal);

    
system("pause"); //Usado para o terminal windowns pausar 
return 0;

} //Fim da main

