/*Crie uma função que receba uma string e retorne um ponteiro
para uma outra string que foi alocada dinâmicamente contendoa
mesma string mas agora com o conteúdo invertido*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *funcaoFrase(char *frase)
{
    char *ptr;

    int tamanho_frase = strlen(frase); //Calcula o tamanho da frase recebida

    ptr = malloc((tamanho_frase + 1) * sizeof(char)); // Alocando memória para a frase apenas, incluindo o \0

    for (int s = 0, t = tamanho_frase - 1; s <= tamanho_frase, t >= 0; s++, t--)
    {
        ptr[t] = frase[s];
    } // For que inverte a frase

    ptr[tamanho_frase] = '\0'; // Seta o fim da frase para o tamanho total dela

    return ptr; //Envia o ponteiro de saida
}

int main()
{

    char frase[30];
    char *ptr;

    //Entrada frase original:
    printf("Digite uma frase:");
    fgets(frase, 255, stdin);
    frase[strcspn(frase, "\n")] = '\0';
    setbuf(stdin, NULL);

    //Chama a função:
    ptr = funcaoFrase(frase);

    printf("\nA frase alocada e invertida é: %s\n", ptr);

    free(ptr);

    return 0;
}