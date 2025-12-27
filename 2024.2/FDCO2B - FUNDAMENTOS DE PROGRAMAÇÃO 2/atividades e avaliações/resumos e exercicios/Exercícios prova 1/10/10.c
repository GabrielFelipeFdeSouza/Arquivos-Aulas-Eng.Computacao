/*Em matemática, o número harmônico designado por Hn define-se como o enésimo termo da série harmônica. Ou seja:
Hn = 1 + 1/2 + 1/3 + 1/4 ...+1/n
Escreva uma função recursiva que calcule o valor de qualquer Hn.*/

#include <stdio.h>
#include <stdlib.h>

float calculo_harmonico(int numero)
{

    if (numero == 1)
    {
        return 1.0;
    } // Caso base

    return (float)1 / numero + calculo_harmonico(numero - 1); // Cauda recursiva com casting para evitar conflitos
} // Retorna o numero harmonico baseado na entrada

int main()
{

    int numero;
    float saida;

    printf("Digite um numero para realizar o calculo do número hramonico:");
    scanf("%d", &numero); // Entrdada de dados

    saida = calculo_harmonico(numero);
    printf("O resultado é: %.2f", saida); // Saida

    return 0;
}