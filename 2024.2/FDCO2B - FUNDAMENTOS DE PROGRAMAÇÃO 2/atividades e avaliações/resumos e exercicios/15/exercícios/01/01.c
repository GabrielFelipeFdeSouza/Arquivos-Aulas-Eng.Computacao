/*  Crie uma enumeração representando os meses do ano.
Agora, escreva um programa que leia um valor inteiro do
teclado e exiba o nome do mês correspondente e a
quantidade de dias que ele possui
*/

// Não encontrei solução que usase apenas a enum ou parte dela, afinal ela é interpretada com int e não resulta numa saida de string

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <locale.h>

typedef enum
{
    JANEIRO,
    FEVEREIRO,
    MARCO,
    ABRIL,
    MAIO,
    JUNHO,
    JULHO,
    AGOSTO,
    SETEMBRO,
    OUTUBRO,
    NOVEMBRO,
    DEZEMBRO
} Meses; // Estrutura de meses

int main()
{

    Meses meses;

    setlocale(LC_ALL, "Portuguese"); // Habilita os sinais ortograficos PT-BR
    // Aruma os problemas de Strings com caracteres especiais em Windows:
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    printf("Digite o mes que você deseja saber o numero de dias:");
    scanf("%d", &meses); // Entrada de dados

    switch (meses)
    {
    case JANEIRO:
        printf("O mes é janeiro e tem 31 dias\n");
        break;
    case FEVEREIRO:
        printf("O mes é fevereiro e tem 29 dias\n");
        break;
    case MARCO:
        printf("O mes é março e tem 31 dias\n");
        break;
    case ABRIL:
        printf("O mes é abril e tem 30 dias\n");
        break;
    case MAIO:
        printf("O mes é maio e tem 31 dias\n");
        break;
    case JUNHO:
        printf("O mes é junho e tem 30 dias\n");
        break;
    case JULHO:
        printf("O mes é julho e tem 31 dias\n");
        break;
    case AGOSTO:
        printf("O mes é agosto e tem 31 dias\n");
        break;
    case SETEMBRO:
        printf("O mes é setembro e tem 30 dias\n");
        break;
    case OUTUBRO:
        printf("O mes é outubro e tem 31 dias\n");
        break;
    case NOVEMBRO:
        printf("O mes é novembro e tem 30 dias\n");
        break;
    case DEZEMBRO:
        printf("O mes é dezembro e tem 31 dias\n");
        break;

    default:
        printf("O mes não existe\n");
        break;
    }

    return 0;
}