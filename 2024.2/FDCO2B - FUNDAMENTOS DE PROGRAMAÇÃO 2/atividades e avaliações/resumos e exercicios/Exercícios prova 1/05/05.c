/*Crie um programa que gerencie um cadastro de materiais para obras disponíveis em um fornecedor.
Cada material contém: nome (tamanho máximo 40 caracteres), quantidade (int) e preço (float)
de no máximo 15 produtos. O programa deve possuir um menu para que o usuário do programa consiga
manipular os cadastros. Nesse menu

a) Ao digitar (I), deve-se realizar inserção de um material na primeira posição que estiver livre;
b) Ao digitar (R), deve-se remover o material pelo índice (a ser fornecido pelo usuário );
c) Ao digitar (L), deve-se listar todos os cadastros não vazios;
d) Ao digitar (P), deve-se solicitar o nome de um material e exibir a quantidade e o preço;
e) Ao digitar (V), deve-se listar todos os produtos que tenham a quantidade igual a 0;
f) Ao digitar (S), deve sair do programa.
Obs: Cada opção do menu deve ser implementada em uma função diferente. Após cada função o menu
deve ser reexibido (Exceto opção S)
Não utilize variáveis globais. Utilize passagem de parâmetros quando necessário.
Não se esqueça de criar um método para gerenciar qual posição do vetor está vazia ou não.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int quantidade;
    float preco;
    char nome[31];
} Material;

void exibir_menu()
{
    printf("\n               MENU:\n");
    printf("I - Inserção de produto\n");
    printf("R - Remover um produto\n");
    printf("L - Listagem de produto\n");
    printf("P - Busca por nome\n");
    printf("V - Listagem de produtos sem estoque\n");
    printf("S - Sair do sistema\n");
    printf("Digite uma opção para começar:");
    return;
}

void leitura_string(char string[], int tamanho)
{
    fgets(string, tamanho, stdin);
    string[strcspn(string, "\n")] = '\0';
    setbuf(stdin, NULL);
    return;
}

void insercao(Material *materiais)
{
    for (int s = 0; s < 16; s++)
    {
        if (s == 15)
        {
            printf("\nAs posições de itens estão cheias!\n");
            return;
        } // If caso as 15 posições estiverem cheias
        if (materiais[s].quantidade == -1)
        {
            printf("\nSalvando na posição %d:\n", s + 1);
            printf("Digite o nome do material:");
            leitura_string(materiais[s].nome, 31);
            printf("Digite a quantidade:");
            do
            {
                scanf("%d", &materiais[s].quantidade);
                setbuf(stdin, NULL);
            } while (materiais[s].quantidade < 0); // Não deixa quantidade ser > 0
            printf("Digite o valor:");
            scanf("%f", &materiais[s].preco);
            setbuf(stdin, NULL);
            return;
        } // Caso ache onde quantidade é -1 (lugar para salvar)
    }
    return;
}

void remover(Material *materiais)
{
    int id;
    do
    {
        printf("\nDigite o id do material a ser removido [1-15]:");
        scanf("%d", &id);
        setbuf(stdin, NULL);
    } while (id > 15 || id < 1);

    strcpy(materiais[id - 1].nome, ""); //Função de limpeza do nome
    materiais[id - 1].preco = 0;
    materiais[id - 1].quantidade = -1; //coloca menos um pois é o verificador de produto livre do sistema
    printf("Posição %d limpa e livre!\n", id);
    return;
}

void listagem(Material *materiais)
{
    printf("\nTabela de dados:");
    printf("\n ID |             NOME:              | QUANTIDADE: | PREÇO:");
    for (int y = 0; y < 15; y++)
    {
        if (materiais[y].quantidade != -1)
        {
            printf("\n %2d | %-30s |     %-7d | %5.2f", y + 1, materiais[y].nome, materiais[y].quantidade, materiais[y].preco);
        } //Lista o produto se quantidade for diferente de -1
    }
    printf("\n\n");
    return;
}

void procura(Material *materiais)
{
    char entrada[31];
    printf("\nDigite o nome do produto para busca-lo:");
    leitura_string(entrada, 31);
    for (int p = 0; p < 15; p++)
    {
        if (strcmp(entrada, materiais[p].nome) == 0)
        {
            printf("o produto tem preço de %.2f e tem %d quantidades no estoque!\n", materiais[p].preco, materiais[p].quantidade);
            return;
        }
    }
    printf("Não foi encontrado esse produto!\n");
    return;
}

void sem_estoque(Material *materiais)
{
    printf("\nTabela de produtos com quantidade zerados:");
    printf("\n             NOME:           ");
    for (int y = 0; y < 15; y++)
    {
        if (materiais[y].quantidade == 0)
        {
            printf("\n %-30s", materiais[y].nome);
        }
    }
    printf("\n\n");
    return;
}

int main()
{

    Material materiais[15];
    char ultima_tecla;

    for (int t = 0; t < 15; t++)
    {
        materiais[t].quantidade = -1;
    } // For que inicializa com -1 todos as quantidades dos materiais para usar no sistema de posições livres

    do
    {
        exibir_menu();               // Chama a função que exibe o menu
        scanf(" %c", &ultima_tecla); // Adiciona um espaço antes de %c para ignorar espaços em branco anteriores
        setbuf(stdin, NULL);

        if (ultima_tecla == 'i' || ultima_tecla == 'I'){
            insercao(materiais);
        }
        if (ultima_tecla == 'r' || ultima_tecla == 'R'){
            remover(materiais);
        }
        if (ultima_tecla == 'l' || ultima_tecla == 'L'){
            listagem(materiais);
        }
        if (ultima_tecla == 'p' || ultima_tecla == 'P'){
            procura(materiais);
        }
        if (ultima_tecla == 'v' || ultima_tecla == 'V'){
            sem_estoque(materiais);
        } //Chama cada parte do sistema de acordo com a escolha do user

    } while (ultima_tecla != 's' && ultima_tecla != 'S'); // Caso de saida

    return 0;
}