/*4)Faça um programa, em assembly do mips, para somar dois vetores (V1 e V2) onde:

        v1 = {10,20,30,40,50,60}
        v2 = {0,10,-15, 16, 20, 30}

    O programa deverá percorrer os dois vetores, de tamanho 6, somando cada elemento e
    colocando os mesmos no vetor resultante.

    A saída desejada é apresentada a seguir:

    A soma dos vetores v0 e v1 é:

          10, 30, 15, 56, 70, 90

    OBS: Modele primeiro a solução em C depois traduza para assembly */

    #include <stdio.h>
    #include <stdlib.h>

int main()
{
    int vetor1[6] = {10, 20, 30, 40, 50, 60};
    int vetor2[6] = {0, 10, -15, 16, 20, 30};
    int vetor3[6] = {0, 0, 0, 0, 0, 0};

    for (int s = 0; s < 6; s++)
    {
        vetor3[s] = vetor1[s] + vetor2[s];

        printf("%d ", vetor3[s]);
    }

    return 0;
}
