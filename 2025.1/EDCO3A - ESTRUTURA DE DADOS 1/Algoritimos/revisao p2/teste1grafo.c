#include <stdio.h>

#define MAX 10
#define INF -1 // Valor para indicar ausência de aresta

    int encontrarMaiorAresta(int mat[MAX][MAX], int nVertices, int origem)
    {
            //Variaveis iniciais:
            int valorMaior = -1;
            int indiceMaior = -1;

            //Procura pelo caminho de maior peso, somente se existir os caminhos:
            for(int s = 0; s < nVertices; s++){
                if(mat[origem][s] >= valorMaior && mat[origem][s] > -1){
                    valorMaior = mat[origem][s];
                    indiceMaior = s;
                }
            }

            return indiceMaior;
    }

int main()
{

    int nVertices = 5;
    int mat[MAX][MAX];

    // Inicializa todas as arestas como ausentes
    for (int i = 0; i < nVertices; i++)
    {
        for (int j = 0; j < nVertices; j++)
        {
            mat[i][j] = INF;
        }
    }

    // Exemplo de grafo direcionado e ponderado
    mat[0][1] = 10;
    mat[0][2] = 25;
    mat[0][3] = 5;
    mat[1][4] = 20;
    mat[2][3] = 8;

    int origem = 0;
    int destino = encontrarMaiorAresta(mat, nVertices, origem);
    printf("%d", destino);
}