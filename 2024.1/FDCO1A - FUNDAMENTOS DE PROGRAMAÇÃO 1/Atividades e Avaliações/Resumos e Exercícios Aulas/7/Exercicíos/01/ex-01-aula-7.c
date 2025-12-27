/*   EX 01 - AULA 7 - SWITCH CASE:
Crie um programa que forneça um menu com duas 
opções. Caso o usuário digite 1, o programa solicitará um 
número e verificará se o valor é par ou impar. Caso o 
usuário digite 2, o programa solicitará uma idade e 
verificará se pessoa é maior ou menor de idade.
Veja o exemplo de menu abaixo:
Menu de programa:
1 – Verifica par/impar
2 – Verifica maior/menor de idade
Digite sua opção
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>



int main(){
	
//Declarando as váriaveis:
	int selecao; 
	int numero;
	int idade;
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    printf("------------ Menu do Programa ------------\n");
    printf("1 - Verefica se número é par ou ímpar\n2 - Verefica se é maior ou menor de idade\n");
    printf("Digite a sua opção:\n");
    scanf("%i", &selecao);
    setbuf(stdin, NULL); //Seta o buffer de entrada para nulo 
    
    switch (selecao){
    	
    	case 1:
    		printf ("---------------------------------------\n");
    		printf ("Digite um número para saber se é par ou ímpar:\n");
    		scanf ("%i", &numero);
    		numero = numero % 2;
    		
    		if(numero == 1){
    			printf ("---------------------------------------\n");
    			printf ("Número Ímpar\n");
    			printf ("---------------------------------------\n");	
			} else{
				printf ("---------------------------------------\n");
   				printf ("Número Par\n");
    			printf ("---------------------------------------\n");
			}//else	
			break; //fim case 1
			
			
		case 2:
    		printf ("---------------------------------------\n");
    		printf ("Digite a sua idade para saber se é maior ou menor:\n");
    		scanf ("%i", &idade);
    		
    		if(idade < 18){
    			printf ("---------------------------------------\n");
    			printf ("Menor de idade\n");
    			printf ("---------------------------------------\n");	
			} else{
				printf ("---------------------------------------\n");
   				printf ("Maior de idade\n");
    			printf ("---------------------------------------\n");
			}//else	
			break; //fim case 2
			
			
		default:
			printf ("---------------------------------------\n");
    		printf ("Escolha apenas entre 1 e 2\n");
    		break; //fim default
    	
	}//Switch
    
return 0; //Retorna código 0 ao programa

} //Fim da main

