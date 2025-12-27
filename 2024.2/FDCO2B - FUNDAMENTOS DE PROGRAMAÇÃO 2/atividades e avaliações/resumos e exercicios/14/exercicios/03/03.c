/*Construa uma estrutura aluno com nome, curso e 4 notas,
média e situação. Leia as informações nome, curso e notas do
teclado, calcule a média e armazene a situação do aluno.
# media ? 7 ? Aprovado;
# 3 ? media < 7 ? Exame;
# media < 3 ? Reprovado;*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <locale.h>

// Definindo a struct usada:
typedef struct
{
    char nome[31], curso[31], situacao[16];
    int media, notas[4];
} Aluno;

int main(){

    setlocale(LC_ALL, "Portuguese"); // Habilita os sinais ortograficos PT-BR
    // Aruma os problemas de Strings com caracteres especiais em Windows:
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    Aluno aluno; //Define uma váriavel no formato da struct Aluno

    //Entrada de dados: 
    printf("\nDigite o nome do aluno:");
    fgets(aluno.nome, 31, stdin);
    aluno.nome[strcspn(aluno.nome, "\n")] = '\0';
    setbuf(stdin, NULL);

    printf("\nDigite o curso:");
    fgets(aluno.nome, 31, stdin);
    aluno.curso[strcspn(aluno.curso, "\n")] = '\0';
    setbuf(stdin, NULL);

    for (int s = 0; s < 4; s++){
        printf("Digite a nota %d:", s);
        scanf("%d", &aluno.notas[s]);
        aluno.media += aluno.notas[s]; //Calculo da média
    }
    aluno.media = aluno.media / 4;

    if (aluno.media >= 7){
        strcpy(aluno.situacao, "Aprovado");
    }else if (aluno.media >= 3){
        strcpy(aluno.situacao, "Exame");
    }else if (aluno.media < 3){
        strcpy(aluno.situacao, "Reprovado");
    }

    printf("\nMédia de: %d está %s\n", aluno.media, aluno.situacao); //Teste de saida

    return 0;
}