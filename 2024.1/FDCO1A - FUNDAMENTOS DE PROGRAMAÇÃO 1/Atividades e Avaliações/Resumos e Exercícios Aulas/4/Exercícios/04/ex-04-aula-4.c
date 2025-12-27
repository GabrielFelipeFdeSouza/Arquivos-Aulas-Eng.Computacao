/*    EX 04 - AULA 4 - OPERADORES ARITIMÉTICOS:
Tendo a Altura da pessoa definida como uma constante, 
calcule seu peso ideal utilizando a seguinte fórmula:
peso ideal = 72.7 x altura – 58 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

    //Declarando as váriaveis:
	#define altura 1.81
	float peso;

int main(){

    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    peso = 72.7 * altura - 58.0;
    printf ("---------------------------------------\n");
    printf ("O seu peso deve ser de: %.2fKg para sua altura de: %.2fM\n", peso, altura);
    printf ("---------------------------------------\n");
    
system("pause"); //Usado para o terminal windowns pausar 
return 0;

} //Fim da main

