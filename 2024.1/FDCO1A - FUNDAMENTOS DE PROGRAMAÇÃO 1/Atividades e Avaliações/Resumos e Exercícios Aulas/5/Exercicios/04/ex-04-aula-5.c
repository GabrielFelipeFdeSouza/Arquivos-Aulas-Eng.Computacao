/*   EX 04 - AULA 5 - ENTRADA DE DADOS:
 Calcule a média aritmética de 4 números reais que o usuário 
digitar. Imprima a média na tela apenas com 2 casas decimais.
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

    //Declarando as váriaveis:
	double entrada;
	double soma;
	double media;

int main(){

    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    printf ("---------------------------------------\n");
    printf ("Digite o valor 1:\n");
    scanf ("%lf", &entrada);
    soma = soma + entrada;
    printf ("Digite o valor 2:\n");
    scanf ("%lf", &entrada);
    soma = soma + entrada;
    printf ("Digite o valor 3:\n");
    scanf ("%lf", &entrada);
    soma = soma + entrada;
    printf ("Digite o valor 4:\n");
    scanf ("%lf", &entrada);
    soma = soma + entrada;
    media = soma / 4;
    printf ("---------------------------------------\n");
    printf ("A média final é de: %.2lf\n", media);
    printf ("---------------------------------------\n");
    
system("pause"); //Usado para o terminal windowns pausar 
return 0;

} //Fim da main

