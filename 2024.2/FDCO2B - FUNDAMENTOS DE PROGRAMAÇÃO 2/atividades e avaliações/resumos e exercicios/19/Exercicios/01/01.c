/*Escreva um programa que contenha duas variáveis inteiras. Compare os endereços e exiba o endereço e o conteúdo do maior endereço.*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int var1 = 50, var2 = 10;

    if(&var1 > &var2){
        printf("Var1 tem maior endereço sendo %p e o conteudo é %d\n", &var1, var1);
    }else{
        printf("Var2 tem maior endereço e sendo %p e o conteudo é %d\n", &var2, var2);
    } //Comparando e exibindo as informações

    return 0;
}