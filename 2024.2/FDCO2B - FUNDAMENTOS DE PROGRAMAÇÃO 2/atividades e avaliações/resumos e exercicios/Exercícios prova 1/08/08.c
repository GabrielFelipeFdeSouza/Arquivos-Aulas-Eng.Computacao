/*Elabore uma função que receba por parâmetros os coeficientes de uma equação do segundo grau.
Em seguida, calcule e mostre as raízes dessa equação.
Em que ? = b² ? 4 * a * c e ax² +bx + c= 0 representa uma equação do segundo grau.
A variável a tem de ser diferente de zero. Caso seja igual, imprima a mensagem
?Não é equação de segundo grau? e retorne o valor ?1.
Do contrário, retorne o número de raízes e as raízes (por referência) se elas existirem:
    ? Se ? < 0, não existe real. Número de raízes: 0.
    ? Se ? = 0, existe uma raiz real. Número de raízes: 1.
    ? Se ? > 0, existem duas raízes reais. Número de raízes: 2*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int segundo_grau(int a, int b, int c, float *x1, float *x2)
{
    int raizes = 2;
    float delta = 0;

    if (a == 0)
    {
        return -1;
    }
    else
    {
        delta = pow(b, 2) - 4 * a * c;
        if (delta == 0)
            raizes = 1;

        if (delta < 0)
            raizes = -2;

        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
    }

    return raizes; //Por padrão manda 2
}

int main()
{

    int a, b, c, saida;
    float x1 = 0, x2 = 0;

    printf("Digite o coeficiente a duma equação de 2º Grau:");
    scanf("%d", &a);
    setbuf(stdin, NULL);
    printf("Digite o coeficiente b duma equação de 2º Grau:");
    scanf("%d", &b);
    setbuf(stdin, NULL);
    printf("Digite o coeficiente c duma equação de 2º Grau:");
    scanf("%d", &c);
    setbuf(stdin, NULL); // Entrada de dados

    saida = segundo_grau(a, b, c, &x1, &x2); //Chama a função e a saida refere-se ao que fazer com a saida, -1 não é de 2º grau, -2 não é real, e 1 e 2 são os resultados

    //Exibições:
    if (saida == -1)
    {
        printf("A Função não é de segundo grau!\n");
    }
    else
    { // Se retornou -1

        if (saida == -2)
            printf("Não há raizes, numero não real!\n");
        if (saida == 1)
            printf("A raiz unica é %.2f\n", x1);
        if (saida == 2)
            printf("As raizes são %.2f e %.2f\n", x1, x2);

    } // Se retornou diferente

    return 0;
}