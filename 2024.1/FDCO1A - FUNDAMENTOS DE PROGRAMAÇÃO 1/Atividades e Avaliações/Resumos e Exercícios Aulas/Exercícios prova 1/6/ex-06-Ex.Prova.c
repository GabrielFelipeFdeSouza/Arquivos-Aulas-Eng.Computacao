/*   EX 06 - Ex. Prova:
Um professor maluco da UTFPR avalia seus alunos da seguinte maneira:

3 provas (com peso 20 cada)
1 conjunto de trabalhos menores durante o semestre (com peso 10)
1 projeto de um jogo com peso 30

A média regular do aluno será dada pela média ponderada das notas das 3 provas, nos projetos menores 
e do projeto do game. O aluno que atingir a nota igual ou superior a 60 estará aprovado, caso contrário,
o aluno deverá realizar um exame onde a nota mínima necessária será dada pela fórmula:

NotaMinima = 120 – Média regular

O aluno aprovado via exame terá média final igual a 60 registrado no sistema.

Faça um programa que receba a nota das 3 provas, 1 nota dos projetos menores e 1 nota do projeto do game 
(todas as notas entre 0 e 100) e informe se o aluno está aprovado ou terá que realizar o exame.
Em caso de exame o sistema deverá solicitar a nota do exame e informar se o aluno está aprovado
ou reprovado e qual sua nota final (com uma casa decimal).
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{

	// Declarando as variaveis:
	float nota_p1, nota_p2, nota_p3, nota_trabalhos, nota_game, media, nota_exame;

	setlocale(LC_ALL, "Portuguese"); // Habilita os sinais ortograficos PT-BR
	printf("--------CÁLCULO NOTAS ALUNO--------\n");

	// Entarda de dados pelo usuário:
	printf("\n*Digite todas as Notas entre 0 e 100*\n");
	
	do{	
		printf("Digite a nota da prova 1:");
		scanf("%f", &nota_p1);
	} while(nota_p1 < 0 || nota_p1 > 100); //Entarda nota prova 1 - [0, 100]

	do{	
		printf("Digite a nota da prova 2:");
		scanf("%f", &nota_p2);
	} while(nota_p2 < 0 || nota_p2 > 100); //Entarda nota prova 2 - [0, 100]
	
	do{	
		printf("Digite a nota da prova 3:");
		scanf("%f", &nota_p3);
	} while(nota_p3 < 0 || nota_p3 > 100); //Entarda nota prova 3 - [0, 100]
	
	do{	
		printf("Digite a nota dos trabalhos:");
		scanf("%f", &nota_trabalhos);
	} while(nota_trabalhos < 0 || nota_trabalhos > 100); //Entarda nota trabalhos - [0, 100]
	
	do{	
		printf("Digite a nota do jogo:");
		scanf("%f", &nota_game);
	} while(nota_game < 0 || nota_game > 100); //Entarda nota do game - [0, 100]
	
	
	//Calculo média e vereficação inicial
	
	printf("\n");
	
	media = ((nota_p1 * 20) + (nota_p2 * 20) + (nota_p3 * 20) + (nota_trabalhos * 10) + (nota_game * 30)) / 100;
	
	printf("A média do aluno é: %.1f\n", media);

//Vereficando se aluno passou ou não:

	if(media >= 60){
		printf("Aluno aprovado direto\n");
	} else {
		printf("Aluno em recuperação\n");
		
		do{	
		printf("\nDigite a nota do exame de recuperação:");
		scanf("%f", &nota_exame);
		} while(nota_exame < 0 || nota_exame > 100); //Entarda nota do exame - [0, 100]
	
	//Vereficação se o aluno passa por exame de recuperação:
	
		if(nota_exame >= (120 - media)){
			printf("\n");
			printf("Aluno Aprovado por exame de recuperação com 60,0\n");
		} else {
			printf("\n");
			printf("Aluno Reprovado!\n");
		} //Fim else verificação nota exame
	
	} //Fim nota else verificação media


	return 0; // Retorna código 0 ao programa

} // Fim da main
