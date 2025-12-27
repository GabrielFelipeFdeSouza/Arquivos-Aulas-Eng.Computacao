/*   EX 05 - AULA 10 - FOR:
Faça um programa que calcule o fatorial de um número a ser 
digitado
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	//Declarando as váriaveis:
	int numero, saida = 1; //Saida começa em 1 pois 0! = 1
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    
    //Entrada e processamento de dados:
    printf("Digite um número para calcular o fatorial:");
    scanf("%d", &numero);
    
    if(numero < 0){
    	
    	printf("Não existe número de número negativo!\n");
    	
	} else{
		
		for(numero; numero > 0; numero--){
			
			saida = saida * numero;				
		
	} //Fim do for de contagem multiplicativa até 500
	
	printf("O fatorial é: %d\n", saida);
	
	} //Fim do else de verificação número entrada
	   
        
return 0; //Retorna código 0 ao programa

} //Fim da main

