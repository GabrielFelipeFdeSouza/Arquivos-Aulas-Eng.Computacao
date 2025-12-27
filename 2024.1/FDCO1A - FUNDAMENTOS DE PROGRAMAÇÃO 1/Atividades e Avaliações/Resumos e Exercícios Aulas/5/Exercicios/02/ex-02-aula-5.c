/*   EX 02 - AULA 5 - ENTRADA DE DADOS:
Faça um programa que calcule e mostre a idade de uma 
pessoa a partir do ano em que a pessoa nasceu e do ano atual. 
Os valores serão digitados pelo usuário.
Obs.:Considere que ela já fez aniversário neste ano.

 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

    //Declarando as váriaveis:
	int anoatual;
	int anonacimento;
	int idade;

int main(){

    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    printf ("---------------------------------------\n");
    printf ("Digite o Ano atual:\n");
    scanf ("%i", &anoatual);
    printf ("---------------------------------------\n");
    printf ("Digite o Ano de nascimento:\n");
    scanf ("%i", &anonacimento);
    idade = anoatual - anonacimento;
    printf ("---------------------------------------\n");
    printf ("A sua idade é de: %i\n", idade);
    printf ("---------------------------------------\n");
    
system("pause"); //Usado para o terminal windowns pausar 
return 0;

} //Fim da main

