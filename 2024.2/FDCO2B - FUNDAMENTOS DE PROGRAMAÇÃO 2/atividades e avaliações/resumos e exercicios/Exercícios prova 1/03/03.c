/*3) Elabore uma função que receba como parâmetro um valor inteiro n e gere como
saída um triângulo lateral formado por asteriscos conforme o exemplo a seguir, em que usamos n = 4:
*
**
***
****
***
**
*
*/

#include <stdio.h>
#include <stdlib.h>

void triangulo(int numero){

    for (int y = 0; y < numero * 2; y++) {
        if (y < numero)
        {
            for (int t = 0; t < y + 1; t++)
            {
                printf("*");
            } //Vai aumentando conforme y aumenta
            printf("\n");
        } //Metade de cima

        if (y > numero)
        {
            for (int t = numero; t > y - numero; t--)
            {
                printf("*");
            } //Vai diminuindo conforme y aumenta
            printf("\n");
        } //Metade de baixo
    } //percorre a parte de cima e de baixo, n*2

    return;
}

int main(){
    int numero;

    printf("Digite o numero para gerar o triangulo:");
    scanf("%d", &numero); //Entrada do numero

    triangulo(numero); //Chamando a função

    return 0;
}