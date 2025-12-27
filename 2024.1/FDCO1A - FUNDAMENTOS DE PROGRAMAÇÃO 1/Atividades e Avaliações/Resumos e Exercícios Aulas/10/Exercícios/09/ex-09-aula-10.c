/*   EX 08 - AULA 10 - FOR:
Desenvolva um programa que receba um numero 
tamanho e exiba um quadrado de tamanho tamanho 
utilizando o carácter #
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	//Declarando as váriaveis:
	int entrada, contador = 0, contador2 = 0;
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    
    //Processamento de dados e exibição:  
    
    //Faz a entrada do lado do quadrado pelo usuário:
    do{
    printf("Digite um número para ser o lado do quadrado:");
    scanf("%d", &entrada);
	} while(entrada < 0);
    
    //Laços for alinhados para exibição do quadrado:
	for(contador; contador < entrada; contador++){
		
		printf("\n");
		contador2 = 0; //Setando o contador2 para 0, pora reentrar no laço for2
		
		for(contador2; contador2 < entrada; contador2++){		
		
			printf("# ");
								
		} //Fim do for 2
						
	} //Fim do for 1
	   
        
return 0; //Retorna código 0 ao programa

} //Fim da main

