/*Elabore um programa que leia um arquivo binário contendo 
100 números. Mostre na tela a soma desses números.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int soma = 0; //Usado para somar tudo

    //Abertura do arquivo:
    FILE *arq;
    arq = fopen("./entrada.dat", "rb");

    //Para erros de abertura:
    if(arq == NULL){
        perror("Erro ao abrir arquivo...\n");
        exit(1);
    }

    for(int t = 0; t < 100; t++){
        int *numero;
        fread(numero, sizeof(int), 1, arq);
        soma += *numero;
    } //Lendo os dados e acumulando

    printf("A SOMA TOTAL FOI DE: %d\n", soma);

    fclose(arq); //Fechando o arquivo

    return 0;
}