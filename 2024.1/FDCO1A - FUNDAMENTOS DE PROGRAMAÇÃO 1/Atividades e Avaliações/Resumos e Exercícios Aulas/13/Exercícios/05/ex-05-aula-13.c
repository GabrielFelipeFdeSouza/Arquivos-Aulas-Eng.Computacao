/*   EX 05 - AULA 13 - STRINGS:
Faça um programa que receba uma frase e depois exiba quantas vezes 
cada vogal aparece. Ele deve contar considerando o tamanho da String
*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{

	// Declarando as váriaveis:
	char frase[300];
	int contagem_vogais[5] = {0,0,0,0,0};
    char vogais[6] = {'a', 'e', 'i', 'o', 'u'}; 
	
	setlocale(LC_ALL, ""); // Habilita os sinais ortograficos PT-BR
	//Aruma os problemas de Strings com caracteres especiais em Windows:
	SetConsoleCP(1252); 
	SetConsoleOutputCP(1252);
	
	printf("---CONTADOR DE ELEMENTOS STRINGS---\n\n");

	// Entrada da frase:

	printf("\n"); // Linha branca 	
	printf("Digite uma frase:");
	fgets(frase, 30, stdin);
	frase[strcspn(frase, "\n")] = '\0'; // elimina o \n dos enter's
	setbuf(stdin, NULL); // Limpa o buffer do teclado
	
	//Processamento dos dados:
	
	//Contagem vogais:
	for(int i = 0; frase[i] != '\0'; i++){
		
		char ch = tolower(frase[i]); //converte a string em minusculo para contagem
		
        for(int d = 0; d < 5; d++){

            if(ch == vogais[d])
                contagem_vogais[d]++;

        } //Fim for de avaliação e acumulador
		
		
	} //Fim for contagem vogais

	//Exibição:
	
	printf("\n"); // Linha branca 
	printf("A vogal 'a' aparece %d vezes;\n", contagem_vogais[0]);
    printf("A vogal 'e' aparece %d vezes;\n", contagem_vogais[1]);
    printf("A vogal 'i' aparece %d vezes;\n", contagem_vogais[2]);
    printf("A vogal 'o' aparece %d vezes;\n", contagem_vogais[3]);
    printf("A vogal 'u' aparece %d vezes;\n", contagem_vogais[4]);
	
	return 0; // Retorna código 0 ao programa 

} // Fim da main
