/*   EX 02 - AULA 7 - SWITCH CASE:
Crie uma calculadora usando a instrução switch, que 
pergunte qual das operações básicas quer fazer (+, -, * 
e /), em seguida peça os dois números e mostre o 
resultado da operação matemática entre eles.
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
    printf("Escolha uma operação para iniciar (+ , - , * , /)\n");
    printf("Digite a sua opção:\n");
    scanf("%c", &selecao);
    setbuf(stdin, NULL); //Seta o buffer de entrada para nulo
    
    switch (selecao){
    	
    	case '+':
    		printf ("---------------------------------------\n");
    		printf ("Digite o primeiro número para somar:\n");
    		scanf ("%f", &numero1);
    		printf ("Digite o segundo número para somar:\n");
    		scanf ("%f", &numero2);
    		
    		saida = numero1 + numero2;
    		printf("A soma entre %.2f + %.2f é %.2f\n", numero1, numero2, saida);
			break; //fim case +
			
		case '-':
    		printf ("---------------------------------------\n");
    		printf ("Digite o primeiro número para subtrair:\n");
    		scanf ("%f", &numero1);
    		printf ("Digite o segundo número para subtrair:\n");
    		scanf ("%f", &numero2);
    		
    		saida = numero1 - numero2;
    		printf("A subtração entre %.2f - %.2f é %.2f\n", numero1, numero2, saida);
			break; //fim case -
				
		case '*':
    		printf ("---------------------------------------\n");
    		printf ("Digite o primeiro número para multiplicar:\n");
    		scanf ("%f", &numero1);
    		printf ("Digite o segundo número para multiplicar:\n");
    		scanf ("%f", &numero2);
    		
    		saida = numero1 * numero2;
    		printf("A multiplicação entre %.2f * %.2f é %.2f\n", numero1, numero2, saida);
			break; //fim case *
			
		case '/':
    		printf ("---------------------------------------\n");
    		printf ("Digite o primeiro número para dividir:\n");
    		scanf ("%f", &numero1);
    		printf ("Digite o segundo número para dividir:\n");
    		scanf ("%f", &numero2);
    		
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

