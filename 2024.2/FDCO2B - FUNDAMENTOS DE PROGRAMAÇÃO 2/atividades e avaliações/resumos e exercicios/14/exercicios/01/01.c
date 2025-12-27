/*Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). 
Em seguida, declare e leia do teclado dois pontos e exiba a distância entre eles. */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct
{
    float eixoX, eixoY;
} Ponto;

int main(){

    Ponto pontos[2];
    float distancia;

    for (int s = 0; s < 2; s++){
        printf("Digite a cordenada x do ponto %d:", s + 1);
        scanf("%f", &pontos[s].eixoX);
        printf("Digite a cordenada y do ponto %d:", s + 1);
        scanf("%f", &pontos[s].eixoY);
    }

    distancia = sqrt(pow(pontos[1].eixoX - pontos[0].eixoX, 2) + pow(pontos[1].eixoY - pontos[0].eixoY, 2));

    printf("A distancia ï¿½ de: %f", distancia);

    return 0;
}