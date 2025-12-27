/*   EX 11 - Ex. Prova 2:
11) Faça um programa que receba uma palavra e em seguida gere e exiba uma outra 
string contendo a palavra concatenada da mesma palavra invertida, porém em maiúscula. 
Dica: usar a função toupper() da biblioteca ctype.h para transformar uma letra na sua letra maiúscula.

Exemplo:
Digite uma palavra: Brasil
BrasilLISARB
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <windows.h>
#include <string.h>

int main(){

	// Declarando as váriaveis:
	char entrada[21], entrada_invertida[21], buffer;
	int toupper(), fim;

	// Entrada de dados:

	setlocale(LC_ALL, "Portuguese"); // Habilita os sinais ortograficos PT-BR
	// Aruma os problemas de Strings com caracteres especiais em Windows:
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	printf("--------ENTRADA E GERAÇÃO DE NOVA STRING--------\n\n");

	printf("Digite uma palavra:\n");
	fgets(entrada, 21, stdin);
	entrada[strcspn(entrada, "\n")] = '\0';
	setbuf(stdin,NULL);

	strcpy(entrada_invertida, entrada); //Copia o conteudo para operar na entrada invertida
	fim = strlen(entrada_invertida) - 1; //Recebe o tamanho de entrada_invertida
	
	for(int d = 0, s = fim; d < fim /2; d++, s--){
		buffer = entrada_invertida[d];
		entrada_invertida[d] = entrada_invertida[s];
		entrada_invertida[s] = buffer;
	} //Fim for que inverte a string

	for(int i = 0; entrada_invertida[i] != '\0'; i++){
		entrada_invertida[i] = toupper(entrada_invertida[i]); 
	} //Fim for que transforma a frase digitada em maiuscula 

	strcat(entrada, entrada_invertida);

	printf("A saida será: %s\n", entrada);
	
	return 0; // Retorna código 0 ao programa

} // Fim da main
