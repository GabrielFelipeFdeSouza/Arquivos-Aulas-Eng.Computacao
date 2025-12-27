/*   EX 07 - AULA 13 - STRINGS:
Escreva um programa que receba uma sigla de um estado da região 
Sul ou Sudeste e exiba o nome completo do estado correspondente
*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{

	// Declarando as váriaveis:
	char sigla[5];
	
	setlocale(LC_ALL, ""); // Habilita os sinais ortograficos PT-BR
	//Aruma os problemas de Strings com caracteres especiais em Windows:
	SetConsoleCP(1252); 
	SetConsoleOutputCP(1252);
	
	printf("---EXIBIR O NOME DO ESTADO PELA SIGLA---\n\n");

	//Entrada do nome e sobrenome:

	printf("\n"); //Linha branca 	
	printf("Digite a sigla de um estado do sul ou sudeste:");
	fgets(sigla, 30, stdin);
	sigla[strcspn(sigla, "\n")] = '\0'; //elimina o \n dos enter's
	setbuf(stdin, NULL); //Limpa o buffer do teclado
	
	//Exibição:
	
	printf("\n");
	for (int i = 0; sigla[i] != '\0'; i++) {
        sigla[i] = toupper(sigla[i]);
    } //fim for - converte a sigla para maiuscula total para simplificar os cases
	
	//Bloco de verificação das siglas:
	if (strcmp(sigla, "PR") == 0) {
        printf("Paraná\n");
    } else if (strcmp(sigla, "SC") == 0) {
        printf("Santa Catarina\n");
    } else if (strcmp(sigla, "RS") == 0) {
        printf("Rio Grande do Sul\n");
    } else if (strcmp(sigla, "SP") == 0) {
        printf("São Paulo\n");
    } else if (strcmp(sigla, "RJ") == 0) {
        printf("Rio de Janeiro\n");
    } else if (strcmp(sigla, "ES") == 0) {
        printf("Espírito Santo\n");
    } else if (strcmp(sigla, "MG") == 0) {
        printf("Minas Gerais\n");
    } else {
        printf("Sigla inválida ou estado não pertence às regiões Sul ou Sudeste.\n");
    } //Fim geral do bloco de verificação de sigla e saida

	
	return 0; //Retorna código 0 ao programa 

} //Fim da main
