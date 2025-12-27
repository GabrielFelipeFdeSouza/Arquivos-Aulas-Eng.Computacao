/*Faça um programa que gere 100 números aleatórios. Esse 
programa deverá, em seguida,armazenar esses números em um 
arquivo binário*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL)); //Setando seed para geração

    //Abertura do arquivo:
    FILE *arq;
    arq = fopen("./saida.dat", "wb");

    //Para erros de abertura:
    if(arq == NULL){
        perror("Erro ao abrir arquivo...\n");
        exit(1);
    }

    for(int t = 0; t < 100; t++){
        int numero = rand();
        printf("%d\n", numero);
        fwrite(&numero, sizeof(int), 1, arq);
    } //Escrevendo os numeros no arq

    fclose(arq); //Fechando o arquivo

    return 0;
}