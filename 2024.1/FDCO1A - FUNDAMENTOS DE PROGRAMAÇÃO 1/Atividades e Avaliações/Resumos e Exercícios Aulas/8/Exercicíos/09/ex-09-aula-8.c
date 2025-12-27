/*   EX 09 - AULA 8 - WHILE:
Faça um programa que simule um jogo, onde o usuário 
deverá descobrir um número aleatório escolhido pelo 
computador (de 1 a 100).
? O usuário poderá realizar até 6 tentativas, o programa deverá 
retornar as mensagens “muito alto”, “muito baixo” até o usuário 
acertar o número ou esgotar o número máximo de tentativas
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>


int main(){
	
	srand(time(NULL)); //Seed usada no rand
	
	//Declarando as váriaveis:

	int tentativas = 1;
	int numero, entrada;
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    printf("-------JOGO DA ADIVINHAÇÃO-------\n");
    numero = rand() % 100 +1; //Usei 101 para incluir o 100 como resultado possivel
    
    while(tentativas < 7){
		printf("\n"); //Linha branca
		printf("Voce terá 6 tentativas\n");
    	printf("(%dºTentativa) - Digite um número de 0 a 100:", tentativas);  
    	scanf("%d", &entrada); //Entrada do número 
    
    	if(entrada > numero){
    		printf("O número digitado é maior doque o correto\n");
		} else{
	 		if(entrada < numero){
				printf("O número digitado é menor doque o correto\n");
		} else{ 
				printf("\n");
				printf("O número digitado é o correto!\n");
				break;
		}//Fim else final	
			}//Fim else intermediario

		tentativas++;
	}//Fim while tentativas
	
	if(entrada != numero){
		printf("\n");
		printf("Voce perdeu, o número era %d\n", numero);
	}//Fim if
	
    
return 0; //Retorna código 0 ao programa

} //Fim da main

