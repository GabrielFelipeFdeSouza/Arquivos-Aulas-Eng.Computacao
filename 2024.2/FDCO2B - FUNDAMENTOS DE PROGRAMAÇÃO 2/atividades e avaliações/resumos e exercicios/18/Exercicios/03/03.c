/*Crie uma fun��o que retorne x elevado a y atrav�s de opera��o de 
multiplica��o. A fun��o recebe x e y por par�metro*/

#include<stdio.h>
#include<stdlib.h>

float elevar(float x, float y){

    if(y == 0){
        return 1;
    } //Caso base

    if(y > 0){
    return x * elevar(x, y-1);
    } else{
        return 1/x * elevar(x, y+1);
    } //resolve todos os tipos de potencia, vereficando a natureza de y, baseado a saida em float para y negativo

}

int main(){

    float x, y;

    printf("Digite o numero x da potencia:");
    scanf("%f", &x);
    printf("Digite o numero y da potencia:");
    scanf("%f", &y); //Entrada dos valores
    
    printf("O resultado e %.4f", elevar(x, y)); //Saida

    return 0;
}