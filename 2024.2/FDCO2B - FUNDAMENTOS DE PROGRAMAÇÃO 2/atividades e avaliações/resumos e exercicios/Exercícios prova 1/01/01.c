/*Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do atleta,
seu esporte, idade e altura. Agora, escreva um programa que leia os dados de cinco atletas.
Calcule e exiba os nomes do atleta mais alto e do mais velho.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[30], esporte[30];
    int idade;
    float altura;
} Atleta; // Estrutura atleta

void leitura(char *string){
    fgets(string, 30, stdin);
    string[strcspn(string, "\n")] = '\0';
    setbuf(stdin, NULL);

    return;
} //Le as entradas de string

int main(){

    Atleta atletas[5];
    int pessoa_altura, pessoa_idade, idade_maior = 0;
    float altura_maior = 0;

    for (int s = 0; s < 5; s++){
        printf("Digite o nome do atleta %d:", s);
        leitura(atletas[s].nome);
        printf("Digite o esporte do atleta %d:", s);
        leitura(atletas[s].esporte);
        printf("Digite a altura do atleta %d:", s);
        scanf("%f", &atletas[s].altura);
        setbuf(stdin, NULL);
        printf("Digite a idade do atleta %d:", s);
        scanf("%d", &atletas[s].idade);
        setbuf(stdin, NULL); // Entrada de dados

        if (idade_maior < atletas[s].idade){
            idade_maior = atletas[s].idade;
            pessoa_idade = s;
        } // If que captura a pessoa com maior idade

        if (altura_maior < atletas[s].altura){
            altura_maior = atletas[s].altura;
            pessoa_altura = s;
        } // If que captura a pessoa com maior altura

    } // For para entrada de dados

    printf("\nA pessoa com maior idade é %s e com maior altura é %s\n", atletas[pessoa_idade].nome, atletas[pessoa_altura].nome);

    return 0;
}