/*   EX 01 - AULA 3 - VARIAVEIS:
Elabore um programa que exiba o seu nome na primeira 
linha e o seu e-mail segunda. Em seguida, exiba uma 
mensagem solicitando para o usuário pressionar uma tecla. 
Quando o usuário pressionar, exiba em uma nova linha o nome 
do seu amigo e, em outra, o e-mail dele */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	//Declarando as váriaveis:
	char email1[200] = "gabri128felipe@gmail.com";
	char nome1[100] = "Gabriel Felipe Ferdinandi de Souza";
	char email2[200] = "tmalaga45@gmail.com";
	char nome2[100] = "Thiago André Matos Málaga";


    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    printf ("O nome é: %s \nO email é: %s\n", nome1, email1);
    printf("Digite alguma tecla, por favor!\n");
    getchar(); //Comando para entrada de dados, quando sem argumento não há salvamento de dados
    printf ("O nome do amigo é: %s \nO email dele é: %s\n", nome2, email2);
    
system("pause"); //Usado para o terminal windowns pausar 
return 0;

} //Fim da main


