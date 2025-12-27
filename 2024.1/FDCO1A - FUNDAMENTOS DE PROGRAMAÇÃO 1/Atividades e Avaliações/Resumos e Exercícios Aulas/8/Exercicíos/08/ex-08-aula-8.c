/*   EX 08 - AULA 8 - WHILE:
Faça um menu que mostre 3 opções
Menu do programa:
1 - Teste 1
2 - Teste 2
3 – Sair do programa
Digite sua opção:
. A primeira opção imprime o texto “Teste1” e mostra o menu novamente.
. A segunda opção imprime “Teste2” e mostra o menu novamente.
. A terceira opção finaliza o programa.
. Caso digite uma opção diferente, deve mostrar uma mensagem de erro e 
mostrar o menu novamente
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

/*Preferi usar char e converter as verificações para char, pois, se não usa-se, quando o usuário 
digitase algo que não fosse número, o cógigo entrava em loop, arrumado com esse artificio*/

int main(){
	
//Declarando as váriaveis:

	char menu;
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    while(menu != '3'){
	
    printf("-------MENU-------\n");
    printf("1 - Teste 1\n");
    printf("2 - Teste 2\n");
    printf("3 - Sair do programa\n");
    printf("Digite um número do menu:");   
    scanf("%c", &menu); //Entrada do número para operação
    setbuf(stdin, NULL);
    	
    	switch(menu){
    		
    		case '1':
    			printf("Teste1\n");
    			break; //Fim case 1
    		case '2':
    			printf("Teste2\n");
    			break; //Fim case 2
    		case '3':
    			break; //Fim case 3
    		default: 
    			printf("Nenhum comando corespondente, clique de 1 - 3 \n");
    			break; //Fim case default
    		
		}//Fim switch
	
	}//Fim while menu
    
return 0; //Retorna código 0 ao programa

} //Fim da main

