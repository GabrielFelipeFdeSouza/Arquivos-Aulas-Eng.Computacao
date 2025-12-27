/*   EX 02 - Ex. Prova 2:
2) Crie um programa que receba um número positivo Z e imprima todos os números
de Z até 1 e no final exiba quais são os números múltiplos de 4, quantos números
são múltiplos de 3 e a média dos números múltiplos de 5.
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
//Declarando as váriaveis:
	int z = 0, i = 1, numeros_multiplos_4 = 0, numeros_multiplos_3 = 0, media_multiplos_5, numeros_multiplos_5 = 0;
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    printf("--------CONTADOR E CARACTERISTICAS NUMEROS--------\n\n");
    
//Pede ao usuário o número z

	printf("Digite um número:\n");
	scanf("%d", &z);
    
//Exibindo a tabela:

	for(z; z >= 1; z--){
	
		printf("[%2dº termo] = %d\n", i, z);
		
		if(z % 4 == 0)
			numeros_multiplos_4++; //Verifica se é multiplo de 4 e acumula
		
		if(z % 3 == 0)
			numeros_multiplos_3++; //Verifica se é multiplo de 3 e acumula
			
		if(z % 5 == 0){
			media_multiplos_5 += z;
			numeros_multiplos_5++;
		} // Fim if Verifica se é multiplo de 5 e acumula para calculo média
			
		i++; //Passo em i para exibição de termos
	}
	
	media_multiplos_5 = media_multiplos_5 / numeros_multiplos_5; //Termina a média dos múltiplos de 5
	
	printf("\nO número de múltiplos de 4 é: %d\n", numeros_multiplos_4);
	printf("\nO número de múltiplos de 3 é: %d\n", numeros_multiplos_3);
	printf("\nO número da média dos múltiplos de 5 é: %d\n", media_multiplos_5);
    
    
return 0; //Retorna código 0 ao programa

} //Fim da main

