/*Considere a seguinte declaração:
 int a, *b, **c, ***d;
 Escreva um programa que receba o valor de a, calcule e exiba:
 - O dobro do valor a, utilizando o ponteiro b
 - O triplo do valor a, utilizando o ponteiro c
 - O quadruplo do valor a, utilizando o ponteiro d*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, *b, **c, ***d;

    printf("Digite um numero:");
    scanf("%d", &a); //Entrada do usuario

    b = &a;
    c = &b;
    d = &c; //Cada ponteiro recebe o enderço de cada ponteiro em cascata, todos apontam para a!

    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", *b * 2);
    printf("Valor de c: %d\n", **c * 3);
    printf("Valor de d: %d\n", ***d * 4); //Printando os valores de a desreferenciado e multiplicado!

    return 0;
}