#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 10
struct aluno_t
{
    char nome[30];
    int idade;
    struct aluno_t *prox;
};
typedef struct aluno_t aluno;

int hash(char *str, int tamanho)
{
    int soma = 0;
    for (int i = 0; str[i] != '\0'; i++)
        soma += str[i];
    return soma % tamanho;
}

// Função auxiliar para criar um novo aluno
aluno *novo_aluno(char *nome, int idade)
{
    aluno *a = (aluno *)malloc(sizeof(aluno));
    strcpy(a->nome, nome);
    a->idade = idade;
    a->prox = NULL;
    return a;
}

    int conta_menores_18(aluno *tabela[])
    {

        //Variaveis auxiliares:
        int menores = 0;
        aluno *aux;

        //Percorre todos as linhas validas da tabela:
        for (int s = 0; s < MAX; s++)
        {

            aux = tabela[s]; //Começa com o primeiro elemento

            while (aux != NULL)
            {
                if (aux->idade < 18)
                {
                    menores++;
                }
                aux = aux->prox;
            } //Percorre todos os elementos das colunas até ser nulo
        }

        return menores;
    }

int main()
{
    aluno *tabela[MAX] = {0}; // Inicializa todos os ponteiros com NULL

    // Inserção manual de alguns alunos
    aluno *a1 = novo_aluno("Ana", 17);
    aluno *a2 = novo_aluno("Bruno", 19);
    aluno *a3 = novo_aluno("Carla", 16);

    int idx1 = hash(a1->nome, MAX);
    int idx2 = hash(a2->nome, MAX);
    int idx3 = hash(a3->nome, MAX);

    a1->prox = tabela[idx1];
    tabela[idx1] = a1;

    a2->prox = tabela[idx2];
    tabela[idx2] = a2;

    a3->prox = tabela[idx3];
    tabela[idx3] = a3;

    int menores = conta_menores_18(tabela);
    printf("Total: %d\n", menores);
}