/*Crie um Sistema de Gerenciamento de Bandas seguindo os seguintes
passos:
 a) Defina uma estrutura que irá representar bandas de música. Essa estrutura deve
ter o nome da banda, que tipo de música ela toca, o número de integrantes e em que
posição do ranking essa banda está dentre as suas 5 bandas favoritas;
 b) Crie uma função para preencher as 5 estruturas de bandas criadas no exemplo
passado. Após criar e preencher, exiba todas as informações das bandas/estruturas.
 c) Crie uma função que peça ao usuário um número de 1 até 5. Em seguida, seu
programa deve exibir informações da banda cuja posição no seu ranking é a que foi
solicitada pelo usuário;
 d) Crie uma função que peça ao usuário um tipo de música e exiba as bandas com
esse tipo de música no seu ranking.
 e) Crie uma função que peça o nome de uma banda ao usuário e diga se ela está
entre suas bandas favoritas ou não;
 f) Agora junte tudo e crie um menu com as opções de preencher as estruturas e
todas as opções das questões passadas*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct{
    char nome[31], genero[16];
    int itegrantes, rank;
} Bandas;

void entrada_str(char *entrada, int tamanho_str){
    fgets(entrada, tamanho_str, stdin);
    setbuf(stdin, NULL);
    entrada[strcspn(entrada, "\n")] = '\0';
    return;
}

void preencher(Bandas bandas[], int tamanho){

    for (int s = 0; s < tamanho; s++)
    {
        printf("Digite o nome da banda %d:", s + 1);
        entrada_str(bandas[s].nome, 31);

        printf("Digite o genero da banda %d:", s + 1);
        entrada_str(bandas[s].genero, 16);

        printf("Digite o número de integrantes da banda %d:", s + 1);
        scanf("%d", &bandas[s].itegrantes);
        setbuf(stdin, NULL);

        printf("Digite o rank (1-5) da banda %d:", s + 1);
        scanf("%d", &bandas[s].rank);
        setbuf(stdin, NULL);
    } // Entrada dos dados para a struct

    for (int i = 0; i < tamanho; i++)
    {
        printf("     \nINFORMAÇÕES DA BANDA %d:\n", i + 1);
        printf("Nome da banda: %s\n", bandas[i].nome);
        printf("Genero da banda: %s\n", bandas[i].genero);
        printf("Numero de integranmtes da banda: %d\n", bandas[i].itegrantes);
        printf("Rank da banda: %d\n", bandas[i].rank);
    } // Exibição dos dados digitados

    return;
}

void numero(Bandas bandas[]){
    int banda;
    printf("\nDigite o numero da banda (1-5):");
    scanf("%d", &banda);
    setbuf(stdin, NULL);

    if (banda > 5 || banda < 1)
    {
        printf("Numero digitado esta fora da faixa!\n");
    }
    else
    {
        printf("     \nINFORMAÇÕES DA BANDA DE RANK %d:\n", banda);
        for (int v = 0; v < 5; v++)
        {
            if (bandas[v].rank == banda)
                banda = v;
        }
        printf("Nome da banda: %s\n", bandas[banda].nome);
        printf("Genero da banda: %s\n", bandas[banda].genero);
        printf("Numero de integranmtes da banda: %d\n", bandas[banda].itegrantes);
    }

    return;
}

void genero(Bandas bandas[]){

    char entrada_genero[16];
    printf("\nDigite o Genero da banda para exibir as bandas com esse genro:\n");
    entrada_str(entrada_genero, 16);

    for (int n = 0; n < 5; n++){
        if (strcmp(entrada_genero, bandas[n].genero) == 0){
            printf("A banda %s esta esta na lista das bandas com o genero digitado!\n", bandas[n].nome);
        }
    }

    return;
}

void nome(Bandas bandas[]){

    char entrada_nome[31];
    bool achado = false;
    printf("\nDigite o Nome da banda para exibir se esta na lista de bandas:\n");
    entrada_str(entrada_nome, 31);
    for (int n = 0; n < 5; n++){
        if (strcmp(entrada_nome, bandas[n].nome) == 0){
            achado = true;
            printf("A banda %s esta esta na lista das bandas!\n", bandas[n].nome);
            break;
        }
    }
    if (achado == false){
        printf("Banda não encontrada na base de dados!\n");
    }
    return;
}

int main(){

    bool saida = true; // Quando for false sai do programa
    int menu;
    Bandas bandas[5];

    printf("\nModo de gravação inicial:\n");
    preencher(bandas, 5); // Chama a função 1 de preencher os dados

    while (saida){
        printf("\nMENU:\n1 - Digitar Numero e saida associada\n 2 - Digitar Genero da banda e verificar\n 3 - Digitar Nome da banda e saida se esta na lista\n 0 - Encerrar programa!\n");
        printf("Digite qual função deseja executar:");
        scanf("%d", &menu);
        setbuf(stdin, NULL);

        switch (menu){
        case 0:
            saida = false;
            break;

        case 1:
            numero(bandas);
            break;

        case 2:
            genero(bandas);
            break;

        case 3:
            nome(bandas);
            break;

        default:
            printf("\nNumero do menu invalido!\n");
            break;
        }
    }

    return 0;
}
