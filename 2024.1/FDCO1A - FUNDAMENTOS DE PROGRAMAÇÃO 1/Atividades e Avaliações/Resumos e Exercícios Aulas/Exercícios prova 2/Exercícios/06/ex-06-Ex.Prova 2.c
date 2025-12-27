/*   EX 06 - Ex. Prova 2:
6) Faça um programa que leia e armazene as notas (valores reais) de 10 alunos.
O programa somente deverá aceitar notas entre 0 e 10 (inclusive), solicitando
uma nova digitação quando uma nota inválida for digitada. Após a leitura o programa deve:

a) Contar e exibir quantos alunos foram reprovados (nota < 6.0);
b) Exibir as notas dos alunos que foram aprovados (nota >= 6.0);
c) Calcular e exibir a média geral de todas as notas;
d) Calcular e exibir a porcentagem de alunos aprovados;
e) Exibir a nota mais alta e a mais baixa.
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main(){
	
//Declarando as váriaveis:
	float vetor_notas[10], media = 0, maior_nota = 0, menor_nota = 0;
	int aprovados = 0, reprovados = 0, porcentagem_aprovados = 0;
	
    setlocale (LC_ALL, "Portuguese"); //Habilita os sinais ortograficos PT-BR
    printf("--------NOTAS E SAIDAS--------\n\n");
    
//Lendo o vetor:

	for(int i = 0; i < 10; i++){

		do{
		
		printf("Digite a nota do aluno %d:", i);
		scanf("%f", &vetor_notas[i]);

		} while(vetor_notas[i] < 0 || vetor_notas[i] > 10); //Corige a entrada negativa
		
	} //Fim for que recebe o vetor numeros
	
	printf("\n"); //Linha branca

	//Inicializa as notas primairas nas variaveis maior e menor para uso posterior:
	maior_nota = menor_nota = vetor_notas[0];

	for(int i = 0; i < 10; i++){

		if(vetor_notas[i] >= 6)
			aprovados++;
		else
			reprovados++;

		media += vetor_notas[i];

		if(vetor_notas[i] > maior_nota)
			maior_nota = vetor_notas[i];
		
		if(menor_nota > vetor_notas[i])
			menor_nota = vetor_notas[i];

	} //Fim for que acumula os aprovados e reprovados, faz a média e recebe a maior e menor nota

	media = media /10; //termina a média
	porcentagem_aprovados = aprovados *10;

	//Exibição:

	printf("O número de alunos aprovados é de: %d\nO número de alunos reprovados é de: %d\n", aprovados, reprovados);
	printf("A procentagem de aprovados foi de: %d%%\n", porcentagem_aprovados);
	printf("A média das notas é: %.2f\nA maior nota é: %.2f\nA menor nota é: %.2f\n", media, maior_nota, menor_nota);
		
return 0; //Retorna código 0 ao programa

} //Fim da main

