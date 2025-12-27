/*Considerando a estrutura ranking do exercício anterior, 
escreva um programa que leia o arquivo gerado contendo 
os dados dos 5 jogadores*/

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
    arq = fopen("./entrada.txt", "r");

    //Para erros de abertura:
    if(arq == NULL){
        perror("Erro ao abrir arquivo...\n");
        exit(1);
    }

    Ranking jogadores[5];

    for(int s = 0; s < 5; s++){
        fscanf(arq, "%41[^,],%d\n",jogadores[s].nome, &jogadores[s].pontuacao); //Leitura dos dados formatados do arquivo

        printf("\nNome do jogador %d: %s\n", s+1, jogadores[s].nome);
        printf("Digite o ranking dele: %d\n\n", jogadores[s].pontuacao);
    } //Le todos os dados sequencialmentee das linhas do arquivo e salva no struc em suas posições com a formatação adequada

    fclose(arq); //Fechando o arquivo

    return 0;
}