/*Considerando a estrutura atleta do exercício anterior, escreva
um programa que leia um arquivo binário contendo os dados de
cinco atletas. Calcule e exiba o nome do atleta mais alto e do
mais velho.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[31];
    char esporte[21];
    int idade;
    float altura;
} Atleta;

int main()
{

    //Abertura do arquivo:
    FILE *arq;
    arq = fopen("./entrada.dat", "rb");

    //Para erros de abertura:
    if (arq == NULL){
        perror("Erro ao abrir arquivo...\n");
        exit(1);
    }

    //Variaveis:
    Atleta atletas[5];
    int maior_idade = 0;
    float maior_altura = 0;
    int id_idade, id_altura;

    fread(atletas, sizeof(Atleta), 5, arq); //Leitura dos dados e colocando no struct

    for (int t = 0; t < 5; t++)
    {
        if (atletas[t].idade > maior_idade)
        {
            maior_idade = atletas[t].idade;
            id_idade = t;
        }  //Idade

        if (atletas[t].altura > maior_altura)
        {
            maior_altura = atletas[t].altura;
            id_altura = t;
        } //Altura
    } //Checando caso a caso

    printf("\nO Mais alto é: %s\nO Mais velho é: %s\n", atletas[id_altura].nome, atletas[id_idade].nome);

    fclose(arq); //Fechando o arquivo

    return 0;
}