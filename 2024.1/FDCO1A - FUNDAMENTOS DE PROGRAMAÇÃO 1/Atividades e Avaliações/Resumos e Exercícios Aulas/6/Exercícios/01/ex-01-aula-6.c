/*   EX 01 - AULA 6 - IF E ELSE:
Faça um programa que receba como entrada a nota de 
um aluno. O programa deve exibir “aprovado” caso a nota 
seja igual ou superior a 6, ou exibir “reprovado” caso 
contrário.
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

    

int main(){
	
//Declarando as váriaveis:
	double nota;
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    printf ("---------------------------------------\n");
    printf ("Digite a nota do aluno (0,0 - 10,0):\n");
    scanf ("%lf", &nota);
    if(nota >= 6.0){
    	printf ("---------------------------------------\n");
    	printf ("Aluno Aprovado\n");
    	printf ("---------------------------------------\n");	
	} else{
		printf ("---------------------------------------\n");
   		printf ("Aluno Reprovado\n");
    	printf ("---------------------------------------\n");
	}
    
    
system("pause"); //Usado para o terminal windowns pausar 
return 0;

} //Fim da main

