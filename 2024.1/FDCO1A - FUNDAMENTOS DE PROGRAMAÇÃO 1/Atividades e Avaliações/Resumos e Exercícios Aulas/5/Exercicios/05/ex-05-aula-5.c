/*   EX 05 - AULA 5 - ENTRADA DE DADOS:
Sabendo que a função sqrt(valor), que está na biblioteca 
math.h retorna a raiz quadrada do valor, calcule a raiz 
quadrada de um número que o usuário digitar.

 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

    //Declarando as váriaveis:
	double entrada;
	double saida;

int main(){

    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    printf ("---------------------------------------\n");
    printf ("Digite o valor para calcular a raiz quadrada:\n");
    scanf ("%lf", &entrada);
    saida = sqrt(entrada);
    printf ("---------------------------------------\n");
    printf ("A raiz do número digitado é: %.2lf\n", saida);
    printf ("---------------------------------------\n");
    
system("pause"); //Usado para o terminal windowns pausar 
return 0;

} //Fim da main

