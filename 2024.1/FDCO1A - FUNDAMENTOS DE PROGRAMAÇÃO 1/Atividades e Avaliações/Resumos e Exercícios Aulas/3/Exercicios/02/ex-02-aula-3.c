/*   EX 02 - AULA 3 - VARIAVEIS:
Declare duas variáveis inteiras A e B e atribua valores 
diferentes. Em seguida, efetue a troca dos valores de forma 
que, a variável A passe a possuir o valor da variável B, e que a 
variável B passe a possuir o valor da variável A. Apresente os 
valores iniciais e finais de A e B */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	//Declarando as váriaveis:
	int a = 10;
	int b = 20;


    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    printf ("Os números originais são: \nNúmero 1: %i\nNúmero 2: %i\n", a, b);
    //Alterando os valores por meio de operadores XOR, assim sem precisar declarar váriavel intermediária
    a ^= b;
	b ^= a;
	a ^= b;
	printf ("Os números alterados são: \nNúmero 1: %i\nNúmero 2: %i\n", a, b);
    
system("pause"); //Usado para o terminal windowns pausar 
return 0;

} //Fim da main

