/*Elabora uma fun��o que receba duas strings como par�metros e
verifique se a segunda string est� dentro da primeira. Para isso, utilize
apenas aritm�tica de ponteiros.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comparar(char string1[], char string2[])
{
    int tamanho1, tamanho2, percorer; // Declarando as variaveis usadas na fun��o

    tamanho1 = strlen(string1);
    tamanho2 = strlen(string2);
    percorer = tamanho1 - tamanho2+1; // Variavel percorrer � o numero de vezes que o for externo precisa percorrer a string1 buscando fragmentos da string2

    for (int p = 0; p < percorer; p++)
    {
        for (int n = 0; n < tamanho2; n++)
        {
            if (string1[p + n] != string2[n])
            {
                break; // Quebra o for assim que um termo de 1 nao for compativel com a da 2
            }
            else
            {
                if (n == tamanho2 - 1) // Caso em que todos os termos sao correspondentes
                    return 1;
            } // If e else, se o primeiro e consequentemente todos os termos da string2 nao estiverem contidos na 1 ele qubra o for e o externo leva uma casa para a direita e reesecuta a opera��o, caso ele ache uma e consequentemente todas da um return 1 na fun��o
        } // For que percorre o trecho interno da string1, do tamanho da string2
    } // For que percorre a string1 sempre desolcando 1 letra para a direita

    return 0;
} // Fun��o comparadora de peda�os das strings

int main()
{

    char string1[30], string2[30];

    printf("Digite a primeira string:");
    fgets(string1, 30, stdin);
    string1[strcspn(string1, "\n")] = '\0';
    setbuf(stdin, NULL);
    printf("Digite a segunda string:");
    fgets(string2, 30, stdin);
    string2[strcspn(string2, "\n")] = '\0';
    setbuf(stdin, NULL); //Entrada das strings pelo usuario

    if (comparar(string1, string2) == 1){
        printf("\nA string 2 esta contida na 1!\n");
    }
    else{
        printf("\nA string 2 nao esta contida na 1!\n");
    } //retorno da fun��o de compara��o, que acha trechos da string2 na 1

    return 0;
}
