/*Faça um programa que controla o consumo de energia dos
eletrodomésticos de uma casa e:
# Crie e leia 5 eletrodomésticos que contém nome (máximo 15 letras),
potência (real, em kW) e tempo ativo por dia (real, em horas).
# Leia um tempo t (em dias), calcule e mostre o consumo total na casa e
o consumo relativo de cada eletrodoméstico (consumo/consumo total)
nesse período de tempo. Apresente este último dado em porcentagem*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <locale.h>

// Definindo a struct usada:
typedef struct
{
    char nome[16];
    float potencia, tempo;
} Aparelho;

int main(){
    setlocale(LC_ALL, "Portuguese"); // Habilita os sinais ortograficos PT-BR
    // Aruma os problemas de Strings com caracteres especiais em Windows:
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    float potencia_total, consumo; //Variaveis globais de comparação

    Aparelho aparelhos[5]; // Define umas váriaveis no formato da struct Aparelho

    for (int t = 0; t < 5; t++){
        printf("\nDigite o nome do eletrodomestico %d:", t);
        fgets(aparelhos[t].nome, 16, stdin);
        aparelhos[t].nome[strcspn(aparelhos[t].nome, "\n")] = '\0';
        setbuf(stdin, NULL);
        printf("Digite o gasto em KW do aparelho:");
        scanf("%f", &aparelhos[t].potencia);
        printf("Digite o tempor de operação do aparelho:");
        scanf("%f", &aparelhos[t].tempo);
        setbuf(stdin, NULL);
        potencia_total += aparelhos[t].potencia;
        consumo += aparelhos[t].potencia * aparelhos[t].tempo;
    } //Entrada e processamento dos dados

    printf("O Consumo total foi de %.2f KW/h\n", consumo);
    for (int u = 0; u < 5; u++){
        printf("O aparelho %s teve consumo relativo de %.2f%%\n", aparelhos[u].nome, aparelhos[u].potencia / potencia_total * 100);
    } //Saida dos dados

    return 0;
}