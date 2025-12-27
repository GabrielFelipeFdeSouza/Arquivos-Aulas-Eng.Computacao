/*   EX 02 - AULA 6 - IF E ELSE:
Faça um programa que receba um número e determine 
se ele é um número par ou ímpar.
? Obs.: Utilize o operador % que retorna o resto da divisão
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
	

int main(){
	
	//Declarando as váriaveis:
	int numero;
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    printf ("---------------------------------------\n");
    printf ("Digite um número para saber se é par ou ímpar:\n");
    scanf ("%i", &numero);
    numero = numero % 2;
    if(numero == 1){
    	printf ("---------------------------------------\n");
    	printf ("Número Ímpar\n");
    	printf ("---------------------------------------\n");	
	} else{
		printf ("---------------------------------------\n");
   		printf ("Número Par\n");
    	printf ("---------------------------------------\n");
	}
    
    
system("pause"); //Usado para o terminal windowns pausar 
return 0;

} //Fim da main

