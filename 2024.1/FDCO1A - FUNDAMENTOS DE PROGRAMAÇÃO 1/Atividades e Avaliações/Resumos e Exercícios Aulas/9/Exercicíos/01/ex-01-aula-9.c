/*   EX 01 - AULA 9 - DO-WHILE:
Faça um programa que calcule a média para 5 alunos, sendo que 
cada aluno tem 2 notas (reais). O programa somente deverá aceitar 
notas no intervalo fechado de 0 a 10, solicitando nova digitação 
quando necessário
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
//Declarando as váriaveis:
	int numero_alunos = 1;
	int calculo = 0;
	float nota1, nota2, media;
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    printf("--------CALCULO DE NOTAS--------\n");
    
    while(numero_alunos < 6){
    	printf("\n"); //Linha branca
    	printf("---ALUNO %d---\n", numero_alunos); 
    	
    	do{
    		printf("Digite a nota 1 no intervalo de [0 - 10]:");
    		scanf("%f", &nota1);
    		
		} while(nota1 < 0 || nota1 > 10 ); //Do-while que recebe a nota 1
    	
		do{
    		printf("Digite a nota 2 no intervalo de [0 - 10]:");
    		scanf("%f", &nota2);
    		
		} while(nota2 < 0 || nota2 > 10 ); //Do-while que recebe a nota 2	
		
    	
    	media = (nota1 + nota2) / 2; //Calculo da média
    	printf("A media do aluno %d é %.2f\n", numero_alunos, media);
    	numero_alunos ++; //Soma 1 a variavel de alunos afim de poder calcular dos outros alunos
    	
	}//Fim while calculo geral

    
return 0; //Retorna código 0 ao programa

} //Fim da main

