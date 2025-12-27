/*   EX 06 - AULA 10 - FOR:
Faça um programa que receba 10 números e calcule o 
quadrado desse número (um de cada vez)
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	//Declarando as váriaveis:
	int contador;
	float numero, saida; 
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    
    //Entrada e processamento de dados:
	for(contador = 1; contador < 11; contador++){
		
		printf("[Operação %d] Digite um número para calcular o seu quadrado:", contador);
		scanf("%f", &numero);	
		saida = pow(numero, 2); //Calculando o quadrado do numero digitado
		printf("O quadrado de %.2f é %.2f\n\n", numero, saida); 
				
	} //Fim do for de contagem para 10 vezes
	   
        
return 0; //Retorna código 0 ao programa

} //Fim da main

