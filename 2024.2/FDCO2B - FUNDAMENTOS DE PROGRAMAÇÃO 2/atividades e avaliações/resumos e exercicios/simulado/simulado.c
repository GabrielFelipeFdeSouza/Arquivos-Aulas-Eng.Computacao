/*Você foi contratado pela Riot Games para elaborar partes do sistema sistema de Ranking do League of Legends.
Para isso:

a) Defina um tipo e estrutura para salvar os dados de jogadores para um Ranking.
Cada jogador possui: nome, vitórias, derrotas, tier(nível) e pontos.

Os tiers são: Bronze, Prata, Ouro, Platina, Diamante e Desafiante. Para organizar os níveis utilize uma enumeração.

b) Receba do teclado e armazene os dados de 6 jogadores. Não devem ser permitidos valores negativos,
novos valores devem ser solicitados caso necessário.

c) Exiba uma tabela alinhada com o nome e a taxa de vitórias (winrate) de cada jogador
  winrate = vitórias / (vitórias+derrotas) * 100.
  Cada calculo deve ser feito por meio de uma função adicional que recebe o número de vitórias e derrotas
  via cópia e retorna o winrate.

d) Exiba uma tabela com os líderes (maior número de pontos) de cada um dos níveis. Para isso, faça uma
função extra que receba um tier e retorne uma estrutura do tipo Jogador com os dados do líder.

e) Faça a busca de um jogador pelo nome digitado. A busca deve ser feita por uma função adicional que
recebe o nome e retorna os dados de vitórias, derrotas, tier e pontos via referência.

f) Utilizando uma função recursiva, calcule a soma de todas as partidas (vitórias e derrotas) de
todos os jogadores.

Cada um dos itens de B a E deve ser implementada em uma função diferente.
Não é permitido o uso de variáveis globais.
Nas funções extras, caso necessário, utilize parâmetros adicionais.

Texto de resposta Questão 1
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum
{
    Bronze,
    Prata,
    Ouro,
    Platina,
    Diamante,
    Desafiante
} Tier; //Enum dos tiers (Não muito usada)

typedef struct
{
    char nome[21];
    int vitorias, derrotas, pontos;
    Tier tier;
} Jogador; //Extrutura do jogador

void ler_string(char saida[], int tamanho)
{
    fgets(saida, tamanho, stdin);
    saida[strcspn(saida, "\n")] = '\0';
    setbuf(stdin, NULL);
    return;
} //Função de leitura de strings

void entrada_dados(Jogador jogadores[], int tamanho)
{

    // Entrada de dados:
    for (int u = 0; u < tamanho; u++)
    {
        printf("Digite o nome do jogador %d:", u);
        ler_string(jogadores[u].nome, 21); //Entrada do nome

        do
        {
            printf("Digite a quantidade de vitórias do jogador %d:", u);
            scanf("%d", &jogadores[u].vitorias);
            setbuf(stdin, NULL);
        } while (0 > jogadores[u].vitorias); //Entrada das vitorias

        do
        {
            printf("Digite a quantidade de derrotas do jogador %d:", u);
            scanf("%d", &jogadores[u].derrotas);
            setbuf(stdin, NULL);
        } while (0 > jogadores[u].derrotas); //Entrada das derrotas

        do
        {
            printf("Digite a quantidade de pontos do jogador %d:", u);
            scanf("%d", &jogadores[u].pontos);
            setbuf(stdin, NULL);
        } while (0 > jogadores[u].pontos); //Entrada dos pontos

        do
        {
            printf("Digite o tier do jogador (Bronze = 0, Prata = 1, Ouro = 2, Platina = 3, Diamante = 4, Desafiante = 5) %d:", u);
            scanf("%d", &jogadores[u].tier);
            setbuf(stdin, NULL);
        } while (0 > jogadores[u].tier); //Entrada do tier

        printf("\n");
    } //Entrada de todos os dados
}

float calculo_winrate(int vitorias, int derrotas)
{
    return (float)vitorias / (vitorias + derrotas) * 100.0;
} //Calcula o winrate

void exibir_tabela(Jogador jogadores[], int tamanho){
    printf("               TABELA 1:\n");
    printf("       JOGADOR:        *  WINRATE:\n");

    for (int y = 0; y < tamanho; y++){
        float winrate;
        winrate = calculo_winrate(jogadores[y].vitorias, jogadores[y].derrotas); //Chama a função do calculo do winrate
        printf("%-20s   *   %.2f\n", jogadores[y].nome, winrate); //Exibe a tabela de todos os players
    } //For para a construção da tabela
    return;
}

Jogador retorna_lider(Jogador jogadores[], int tamanho, int nivel){
    Jogador lider; //Retornar o jogador lider
    int pontos = -1, indice_jogador_saida = -1; //Variaveis para trabalhar com a logica na função
    for (int o = 0; o < tamanho; o++){
        if (jogadores[o].tier == nivel && jogadores[o].pontos > pontos){ //O player deve ter o tier especifico e ser maior que um outro que ja tenha passado para ser retornado
            pontos = jogadores[o].pontos;
            indice_jogador_saida = o; //Usa depois para gerar o Lider de saida
        }
    }

    if (indice_jogador_saida != -1){
        lider = jogadores[indice_jogador_saida];
    }
    else{
        lider.vitorias = -1; //Se o indice nao foi modificado só manda a var vitória para a função não exibir linhas na função exibir lideres
    }

    return lider;
}

void exibir_lideres(Jogador jogadores[], int tamanho, char niveis[][12]){
    Jogador lider;
    printf("           TABELA 2(LIDERES):\n");
    printf("       JOGADOR:        *  NIVEL:\n");
    for (int t = 0; t < 6; t++)
    {
        lider = retorna_lider(jogadores, tamanho, t); //Manda para a função que retorna o lider de cada tier, o t manda verificar os 6 tiers
        if (lider.vitorias != -1){
            printf("%-20s   *   %s\n", lider.nome, niveis[lider.tier]);
        }//Se o vitorias do lider for atualizado, exibe o player lider do nivel
    } //For que constroi a tabela
    return;
}

void verificar_nome(Jogador jogadores[], int tamanho, int *vitorias, int *derrotas, int *tier, char buscador[]){
    for (int s = 0; s < tamanho; s++){
        if (strcmp(jogadores[s].nome, buscador) == 0){ //Compara os nomes
            *vitorias = jogadores[s].vitorias;
            *derrotas = jogadores[s].derrotas;
            *tier = jogadores[s].tier;
            return; //Retorna os dados caso ache o player de mesmo nome
        }
    } //For que percorre todos os players
    return;
}

void pesquisa(Jogador jogadores[], int tamanho){
    char buscador[21]; //String para buscar pelo nome
    int derrotas, vitorias = -1, tier;
    printf("Digite o nome do jogador que deseja fazer registro:");
    ler_string(buscador, 21);
    verificar_nome(jogadores, tamanho, &vitorias, &derrotas, &tier, buscador); //Chamada do verificador, retorno por referencia
    if (vitorias == -1){ //Se vitorias nao for aualizado, nao achou o nome
        printf("O jogador com esse nome não foi encontrado!\n");
    }
    else{
        printf("O jogador tem %d vitórias, %d derrotas e esta no tier %d\n", vitorias, derrotas, tier);
    }
}

int soma(Jogador jogadores[], int tamanho){
    if (tamanho == 0){
        return jogadores[tamanho].vitorias + jogadores[tamanho].derrotas; //caso base
    }
    return jogadores[tamanho].vitorias + jogadores[tamanho].derrotas + soma(jogadores, tamanho - 1); //Operação recursiva
}

void somar_partidas(Jogador jogadores[], int tamanho){
    int retorno = 0;
    retorno = soma(jogadores, tamanho-1);
    printf("\nA soma de todas as partidas é: %d", retorno); //Chama a soma recursiva e exibe o retorno
}

int main(){

    char niveis[6][12] = {
        "Bronze",
        "Prata",
        "Ouro",
        "Platina",
        "Diamante",
        "Desafiante"}; // Char com os niveis (tiers)

    Jogador jogadores[6];
    entrada_dados(jogadores, 6);          // Chama a entrada de dados dos jogadores
    exibir_tabela(jogadores, 6);          // Chama a função para exibir a tabela do iten C
    exibir_lideres(jogadores, 6, niveis); // Chama a função que exibe os lideres de cada tier;
    pesquisa(jogadores, 6);               // Chama função de busca por nome
    somar_partidas(jogadores, 6);         // Chama a função recursiva que exibe a soma de partidas

    return 0;
}