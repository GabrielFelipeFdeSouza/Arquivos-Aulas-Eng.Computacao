/*  EX 03 - AULA 4 - OPERADORES ARITIMÉTICOS:
 Faça um programa com 2 variáveis, A e B, onde A terá 
o valor 40 e B terá o valor -1. Imprima o valor de A+B, A-B, 
AxB e A/B. Em seguida, faça B incrementar de uma 
unidade e repita as 4 operações.*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

//Usei os comandos condicionais if e else, para contornar os problemas de divisão por 0!

int main(){
	//Declarando as váriaveis:
	int A = 40;
	int B = 0;
	int sum = A + B;
	int sub = A - B;
	int mul = A * B;
	int div;
	if(B != 0){ div = A / B;
	} //Para evitar problemas de divisão por 0, independente do b declarado

	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    printf("1ºParte:\nO valor de A é: %i\nO de B é: %i\n-----------------\n", A, B);
    printf ("O valor de A+B: %i \nO valor de A-B: %i \nO valor de A*B: %i \n", sum, sub, mul);
    if(B != 0){ printf("O valor de A/B: %i \n\n", div);
	} else { printf("O valor de A/B: Não existe divisão por 0\n\n");
	}
    
    B = ++B;
    sum = A + B;
	sub = A - B;
	mul = A * B;
	if(B != 0){ div = A / B;
	} //Para evitar problemas de divisão por 0, independente do b declarado
	
	printf("2ºParte:\nO valor de A é: %i\nO de B é: %i\n-----------------\n", A, B);
        printf ("O valor de A+B: %i \nO valor de A-B: %i \nO valor de A*B: %i \n", sum, sub, mul);
    if(B != 0){ printf("O valor de A/B: %i \n", div);
	} else { printf("O valor de A/B: Não existe divisão por 0\n");
	}
    
system("pause"); //Usado para o terminal windowns pausar 
return 0;

} //Fim da main

