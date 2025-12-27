/*Um problema típico em ciência da computação consiste em
converter um número da sua forma decimal para binária. Crie um
algoritmo recursivo para resolver esse problema.
* Solução trivial: x=0 quando o número inteiro já foi convertido para
binário
* Passo da recursão: saber como x/2 é convertido. Depois, imprimir um
dígito (0 ou 1) dado o sucesso da divisão.*/


#include <stdio.h>
#include <stdlib.h>

void decimalParaBinario(int x) {
    if (x > 0) {
        decimalParaBinario(x / 2); // Chamada recursiva com x/2
        printf("%d", x % 2); // Imprime o dígito 0 ou 1 após as chamadas recursivas (Desempilhando)
    } else{
        
        return;
    }
}

int main() {
    int numero;
    printf("Digite um número decimal: ");
    scanf("%d", &numero); //Entrada do numero para a conversão

    if (numero == 0) {
        printf("0");
    } else {
        
        decimalParaBinario(numero);
    } //Caso o usuario digite 0, exibe  0, se não manda para a recursiva

    printf("\n");
    return 0;
}
