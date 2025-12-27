/*Usando a estrutura ?atleta? do exercício anterior, escreva um programa que leia
os dados de cinco atletas e os exiba por ordem de idade, do mais velho para o mais novo.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int idades[5] = {0}, posicoes[5] = {0}; // Var com as idades global para uso na função do bubblesort e posicoes refere-se aos atletas relacionados com suas idades, para exibição no for

typedef struct
{
    char nome[30], esporte[30];
    int idade;
    float altura;
} Atleta; // Estrutura atleta

void leitura(char *string)
{
    fgets(string, 30, stdin);
    string[strcspn(string, "\n")] = '\0';
    setbuf(stdin, NULL);

    return;
} // Le as entradas de string

void bubblesort(int idade, int enter)
{
    for (int k = 0; k < 5; k++)
    {
        if (idades[k] < idade)
        {
            for (int r = 5; r >= k; r--)
            {
                idades[r] = idades[r - 1];
                posicoes[r] = posicoes[r - 1];
            }

            idades[k] = idade;
            posicoes[k] = enter;
            return; // Sai quando escrever no local que deveria
        } // If que se a idade no k for menor que idade para entrada, ele desloca todas as idades uma casa para a direita e salva em k a idade
    } // For que percoorre todo o vetor até achar a posição exata

    return;
} // Função bubblesort que deixa o vetor idade do maior para o menor

int main()
{

    Atleta atletas[5];

    for (int s = 0; s < 5; s++)
    {
        printf("Digite o nome do atleta %d:", s);
        leitura(atletas[s].nome);
        // printf("Digite o esporte do atleta %d:", s);
        // leitura(atletas[s].esporte);
        // printf("Digite a altura do atleta %d:", s);
        // scanf("%f", &atletas[s].altura);
        // setbuf(stdin, NULL);
        printf("Digite a idade do atleta %d:", s);
        scanf("%d", &atletas[s].idade);
        setbuf(stdin, NULL); // Entrada de dados

        bubblesort(atletas[s].idade, s); // Chama a função de organização de idades e posições respectivas

    } // For para entrada de dados

    printf("Os nomes em ordem de idade, menor ao maior são:\n");

    for (int t = 0; t < 5; t++)
    {
        printf("%s\n", atletas[posicoes[t]].nome);
    } // Exibição dos nomes

    return 0;
}