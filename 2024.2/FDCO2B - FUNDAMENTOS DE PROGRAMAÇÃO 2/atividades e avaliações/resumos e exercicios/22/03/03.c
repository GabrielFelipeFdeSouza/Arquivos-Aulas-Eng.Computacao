/*Crie uma estrutura representando um atleta. Essa estrutura 
deve conter o nome do atleta, seu esporte, idade e altura. Agora, 
escreva um programa que leia os dados de cinco atletas e os 
armazene em um arquivo binário*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[31];
    char esporte[21];
    int idade;
    float altura;
} Atleta;

int main(){

    //Abertura do arquivo:
    FILE *arq;
    arq = fopen("./saida.dat", "wb");

    //Para erros de abertura:
    if(arq == NULL){
        perror("Erro ao abrir arquivo...\n");
        exit(1);
    }

    Atleta atletas[5]; //Instanciando os atletas

    for(int t = 0; t < 5; t++){
        //Entrada de dados do usuario:
        printf("\nATLETA %d:\n\nDigite o nome:", t+1);
        fgets(atletas[t].nome, 31, stdin);
        atletas[t].nome[strcspn(atletas[t].nome, "\n")]  = '\0';
        setbuf(stdin, NULL);

        printf("\nDigite o esporte:");
        fgets(atletas[t].esporte, 21, stdin);
        atletas[t].esporte[strcspn(atletas[t].esporte, "\n")]  = '\0';
        setbuf(stdin, NULL);

        printf("\nDigite a idade:");
        scanf("%d", &atletas[t].idade);
        printf("\nDigite a altura:");
        scanf("%f", &atletas[t].altura);
        setbuf(stdin, NULL);
    }

    //Escrita no arquivo, colocando o struct todo:
    fwrite(atletas, sizeof(atletas), 5, arq);

    fclose(arq); //Fechando o arquivo

    return 0;
}