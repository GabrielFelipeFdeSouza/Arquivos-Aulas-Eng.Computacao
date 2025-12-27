/* Faça um programa contendo duas funções: uma que receba o nome de um arquivo de
texto contendo uma sequencia de números separados por espaços, o primeiro valor
representa o tamanho da sequencia (quantidade de elementos) e salve os dados em
um vetor alocado dinamicamente e retorne esse vetor. A segunda deve receber um vetor
de inteiros e um inteiro contendo seu tamanho, ela deve calcular e retornar a
soma dos elementos do vetor.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int somador(int quantidade, int *entrada)
{
    int saida = 0;

    for (int u = 0; u < quantidade; u++)
    {
        saida += entrada[u];
    }

    return saida;
}

int main()
{

    FILE *arq_txt;
    char nome_arq[31];
    int quantidade, *entrada, soma;

    printf("Digite o nome do arquivo a ser aberto:");
    fgets(nome_arq, 31, stdin);
    nome_arq[strcspn(nome_arq, "\n")] = '\0';
    setbuf(stdin, NULL);

    arq_txt = fopen(nome_arq, "r");

    if (arq_txt == NULL)
    {
        perror("Erro ao ler o arquivo!\n");
        exit(1);
    }

    // Leitura do arquivo:
    fscanf(arq_txt, "%d ", &quantidade);

    // Alocando o vetor:
    entrada = malloc(quantidade * sizeof(int));

    for (int t = 0; t < quantidade; t++)
    {
        fscanf(arq_txt, "%d ", &entrada[t]);
    }

    soma = somador(quantidade, entrada);

    // Exibição:
    printf("As entradas são:\n");

    for (int v = 0; v < quantidade; v++)
    {
        printf("[%d] = %d\n", v, entrada[v]);
    }

    printf("\nA soma é de: %d\n", soma);

    fclose(arq_txt);
    free(entrada);
    return 0;
}