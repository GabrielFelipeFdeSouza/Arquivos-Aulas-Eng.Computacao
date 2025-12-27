/*Crie uma estrutura representando um ranking. Essa 
estrutura deve conter o nome do jogador e sua pontuação. 
Em seguida, escreva um programa que leia os dados de 5 
jogadores e os armazene em um arquivo utilizando a 
técnica de Dados formatados*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[41];
    int pontuacao;
} Ranking;

int main(){

    //Abertura do arquivo:
    FILE *arq;
    arq = fopen("./saida.txt", "w");

    //Para erros de abertura:
    if(arq == NULL){
        perror("Erro ao abrir arquivo...\n");
        exit(1);
    }

    Ranking jogadores[5];

    for(int s = 0; s < 5; s++){
        printf("\nDigite o nome do jogador %d:", s+1);
        fgets(jogadores[s].nome, 41, stdin);
        jogadores[s].nome[strcspn(jogadores[s].nome, "\n")] = '\0';
        setbuf(stdin, NULL);

        printf("Digite o ranking dele:");
        scanf("%d", &jogadores[s].pontuacao);
        setbuf(stdin, NULL);

        fprintf(arq, "%s,%d\n",jogadores[s].nome, jogadores[s].pontuacao); //Escrita dos dados formatados no arquivo
    } //Lendo os dados do usuário e salvando no arquivo sequencialmente

    fclose(arq); //Fechando o arquivo


    return 0;
}