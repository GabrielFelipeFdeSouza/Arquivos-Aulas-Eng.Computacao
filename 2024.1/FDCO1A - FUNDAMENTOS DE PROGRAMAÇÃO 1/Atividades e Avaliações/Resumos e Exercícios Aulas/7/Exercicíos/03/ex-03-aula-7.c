/*   EX 03 - AULA 7 - SWITCH CASE:
Altere o exercício anterior para receber os 3 valores no 
mesmo scanf.
Exemplo:
Digite a conta a ser realizada: 5+8
O resultado é: 13
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>



int main(){
	
//Declarando as váriaveis:
	char selecao; 
	float numero1;
	float numero2;
	float saida;
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    printf("------------ Calculadora ------------\n");
    printf("Digite a sua operação a ser realizada EX: (1+2) (2*6):\n");
    scanf("%f %c %f", &numero1, &selecao, &numero2);
    
    switch (selecao){
    	
    	case '+':
    		printf ("---------------------------------------\n");
    		saida = numero1 + numero2;
    		printf("A soma entre %.2f + %.2f é %.2f\n", numero1, numero2, saida);
			break; //fim case +
			
		case '-':
    		printf ("---------------------------------------\n");
    		saida = numero1 - numero2;
    		printf("A subtração entre %.2f - %.2f é %.2f\n", numero1, numero2, saida);
			break; //fim case -
			
		case '*':
    		printf ("---------------------------------------\n");
    		saida = numero1 * numero2;
    		printf("A multiplicação entre %.2f * %.2f é %.2f\n", numero1, numero2, saida);
			break; //fim case *
			
		case '/':
    		printf ("---------------------------------------\n");
    		if(numero2 != 0){
    			saida = numero1 / numero2;
    			printf("A divisão entre %.2f / %.2f é %.2f\n", numero1, numero2, saida);
			} else {
				printf("Não há divisão por zero!\n");
			} //fim else
			break; //fim case /
			
		default:
			printf ("---------------------------------------\n");
    		printf ("Escolha apenas entre as operações listadas\n");
    		break; //fim default
    	
	}//Switch
    
	return 0; //Retorna código 0 ao programa

} //Fim da main

