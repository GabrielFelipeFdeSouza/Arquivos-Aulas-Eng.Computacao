/*Crie uma fun��o que retorne x*y atrav�s de opera��o de soma. A fun��o 
recebe x e y por par�metro*/

#include<stdio.h>
#include<stdlib.h>

int multiplicar(int x, int y){

    if(y == 1){
        return x;
    }

    if(y > 0){
        return x + multiplicar(x, y-1);
    } else{
        return -x + multiplicar(x, y+1);
    } //Conta sendo processada, até mesmo com numeros negativos], pela verificação

}

int main(){

    int x, y;

    printf("Digite o numero x da multiplica��o:");
    scanf("%d", &x);
    printf("Digite o numero y da multiplica��o:");
    scanf("%d", &y); //Entrdada dos valores para calculo

    printf("O resultado e %d", multiplicar(x, y)); //Sauda
    return 0;
}
