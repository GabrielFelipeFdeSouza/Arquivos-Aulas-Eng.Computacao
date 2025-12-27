/* Crie um programa de cadastro que receba, armazene, e
em seguida, exiba os dados de 5 pessoas.
> Cada pessoa possui: nome, idade, peso, data de nascimento,
brasileiro ou estrangeiro. Caso seja Brasileiro, armazene o CPF,
caso estrangeiro, armazene o passaporte.
> Regra: Utilize structs, typedef, union e enum.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <locale.h>

// Estruturas:

typedef union
{
    char cpf[12];
    char passaporte[14];
} Dado;

typedef enum
{
    CPF,
    PASSAPORTE
} Documento;

typedef struct
{
    char nome[31], data_nascimento[11];
    int idade, peso;
    float altura;
    Dado dado;
    Documento documento;
} Pessoa;

int main()
{
    Pessoa pessoa[5]; // Criação das 5 pessoas na memória

    setlocale(LC_ALL, "Portuguese"); // Habilita os sinais ortograficos PT-BR
    // Aruma os problemas de Strings com caracteres especiais em Windows:
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    // Entrada de dados:

    for (int s = 0; s < 5; s++)
    {
        printf("\nDados da pessoa %d:\nDigite o nome da pessoa:", s);
        fgets(pessoa[s].nome, 31, stdin);
        pessoa[s].nome[strcspn(pessoa[s].nome, "\n")] = '\0';
        setbuf(stdin, NULL);
        printf("Digite a idade:");
        scanf("%d", &pessoa[s].idade);
        printf("Digite o peso:");
        scanf("%d", &pessoa[s].peso);
        printf("Digite a altura:");
        scanf("%f", &pessoa[s].altura);
        setbuf(stdin, NULL);
        printf("Digite 0 se for brasileiro e 1 se for extrangeiro:");
        scanf("%d", &pessoa[s].documento);
        setbuf(stdin, NULL);
        if (pessoa[s].documento == CPF)
        {
            printf("Digite o seu cpf sem caracteres:");
            fgets(pessoa[s].dado.cpf, 12, stdin);
            pessoa[s].dado.cpf[strcspn(pessoa[s].dado.cpf, "\n")] = '\0';
            setbuf(stdin, NULL);
        }
        else
        {
            printf("Digite o seu passaporte:");
            fgets(pessoa[s].dado.passaporte, 14, stdin);
            pessoa[s].dado.passaporte[strcspn(pessoa[s].dado.passaporte, "\n")] = '\0';
            setbuf(stdin, NULL);
        } // If else para entrada do documento especifico
    }

    // Exibindo:

    printf("\nEXIBINDO:\n");
    printf("             NOME:             |  IDADE: |  PESO: |  ALTURA: |  DOCUMENTO: \n");
    for (int t = 0; t < 5; t++)
    {
        printf("%-30s |", pessoa[t].nome);
        printf("%8d |", pessoa[t].idade);
        printf("%7d |", pessoa[t].peso);
        printf("%9.2f |", pessoa[t].altura);
        if (pessoa[t].documento == CPF)
        {
            printf("CPF/%-15s\n", pessoa[t].dado.cpf);
        }
        else
        {
            printf("PSS/%-15s\n", pessoa[t].dado.passaporte);
        }
    }

    return 0;
}