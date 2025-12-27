/*Faça um programa que receba valores enquanto forem positivos. Para isso:

Inicialmente, aloque dinamicamente um vetor de 5 números inteiros.
A cada vez que preencher as posições disponíveis, realoque o vetor aumentando o seu tamanho em 5 posições.
Ao receber um valor negativo, pare de solicitar novos valores e realoque o vetor para o tamanho exato da
 quantidade de elementos válidos digitados.
Ao finalizar, exiba os valores recebidos e Libere a memória alocada.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int entrada, contador = 0, *armazem;

    armazem = malloc(5 * sizeof(int));

    do
    {

        if ((contador % 5) == 0 && contador != 0)
        {
            armazem = realloc(armazem, contador * sizeof(int));
        } //Realoca de 5 em 5 o vetor de saida

        //Entrada pelo usuário:
        printf("Digite o %d numero:", contador);
        scanf("%d", &entrada);

        if (entrada >= 0)
        {
            armazem[contador] = entrada;
            contador++;
        } //Se for um positivo, salva no vetor e conta para o próximo

    } while (entrada >= 0); //Condição de entrada

    armazem = realloc(armazem, contador * sizeof(int)); //Realoca para o tamanho exato

    //Exibição de saida
    printf("\nENTRADAS:\n");
    for (int u = 0; u < contador; u++)
    {
        printf("[%d] = %d\n", u, armazem[u]);
    }

    free(armazem);
    return 0;
}