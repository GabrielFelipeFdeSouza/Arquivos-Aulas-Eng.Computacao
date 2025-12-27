/*Faça uma função recursiva que calcule o valor da série S descrita a seguir para um valor n maior
do que zero a ser fornecido como parâmetro para ela:
S = 2 + 5/2 + 10/3 + 1+n^2 / n
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calcula_serie(int numero)
{

    if (numero == 1)
    {
        return 2;
    }

    return (1 + pow(numero, 2)) / numero + calcula_serie(numero - 1);
};

int main()
{
    int n = 0;
    float saida;

    printf("Digite o N para calcular o resultado da série:");
    scanf("%d", &n);

    saida = calcula_serie(n);
    printf("\nA saida é: %.2f", saida);

    return 0;
}