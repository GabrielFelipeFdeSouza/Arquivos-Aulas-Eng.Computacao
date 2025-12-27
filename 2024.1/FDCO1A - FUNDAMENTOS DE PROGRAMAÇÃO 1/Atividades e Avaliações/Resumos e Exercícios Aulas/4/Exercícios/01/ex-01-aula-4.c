/*   EX 01 - AULA 4 - OPERADORES ARITIMÉTICOS:
Escreva um programa para determinar a quantidade de litros 
de combustível gastos em uma viagem por um automóvel que 
faz 12 km/litro. Para isso, sabe-se que o tempo gasto na viagem 
é de 35 min e a velocidade média do automóvel é 80 km/h */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	//Declarando as váriaveis + calculo (poupar linhas):
	float tempo = 35 / 60.0;
	float distancia = tempo * 80.0;
    float gasto = distancia / 12.0;

    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    printf ("O tempo de viagem foi de: 35 minutos\nA distancia percorida foi de: %.2fKm\nO gasto foi de: %.2f Litros\n", distancia, gasto);

    
system("pause"); //Usado para o terminal windowns pausar 
return 0;

} //Fim da main
