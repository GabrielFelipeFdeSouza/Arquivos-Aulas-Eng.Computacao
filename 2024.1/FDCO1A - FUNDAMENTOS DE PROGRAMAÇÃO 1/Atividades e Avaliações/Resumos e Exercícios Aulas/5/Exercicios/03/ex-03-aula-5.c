/*   EX 03 - AULA 5 - ENTRADA DE DADOS:
Tendo como entrada de dados o total vendido por um 
funcionário no mês, calcule a sua comissão e o salário bruto no 
mês. Para isso, considere um salário base de R$1.200,00 e 
comissão de 10% sobre o total vendido.
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

    //Declarando as váriaveis:
	double salario;
	double vendas;
	double comicao;

int main(){

    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    printf ("---------------------------------------\n");
    printf ("Digite o valor vendido no mês:\n");
    scanf ("%lf", &vendas);
    salario = 1200 + (vendas * 0.1);
    comicao = vendas * 0.1;
    printf ("---------------------------------------\n");
    printf ("O salário final é de: R$%.2lf, a comição é de: R$%.2lf \n", salario, comicao);
    printf ("---------------------------------------\n");
    
system("pause"); //Usado para o terminal windowns pausar 
return 0;

} //Fim da main

