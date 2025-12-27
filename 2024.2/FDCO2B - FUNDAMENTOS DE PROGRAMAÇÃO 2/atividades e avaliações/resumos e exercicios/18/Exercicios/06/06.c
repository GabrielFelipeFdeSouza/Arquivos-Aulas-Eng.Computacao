/*Considere a funcaox abaixo. O que essa função faz? Escreva
uma função não-recursiva que resolve o mesmo problema
int funcaox(int a){
 if(a <= 0) return 0;
 else return a + funcaox(a-1);
}//funcaox*/

#include <stdio.h>
#include <stdlib.h>

float funcaosoma(float numero)
{
    if (numero <= 0)
    {
        return 0; // Caso 0 ou negativo
    }
    else
    {
        return (numero + 1) * numero / 2;
    } // Trabalhando com float, embora aceite somente int (arredondando se entrada for float)
}

int main()
{

    float numero;

    printf("Digite um número:");
    scanf("%f", &numero); // Entrada do numero para a soma

    printf("%.0f\n", funcaosoma(numero)); // Chamada da função

    return 0;
}