    /*Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme solicitado abaixo:
    • Horário: composto de hora, minutos e segundos.
    Data: composto de dia, mês e ano.
    • Compromisso: local, horário e texto que descreve o compromisso.
    */

    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    #include <windows.h>
    #include <locale.h>

    // Definindo as structs usadas:
    typedef struct
    {
        int dia, mes, ano;
    } Data;

    typedef struct
    {
        int hora, minuto, segundo;
    } Hora;

    typedef struct
    {
        char local[21];
        char descricao[101];
        Hora hora;
        Data data;
    } Compromisso;

    int main(){

        setlocale(LC_ALL, "Portuguese"); // Habilita os sinais ortograficos PT-BR
        // Aruma os problemas de Strings com caracteres especiais em Windows:
        SetConsoleCP(1252);
        SetConsoleOutputCP(1252);

        Compromisso compromisso; //Define uma v�riavel no formato da struct Compromisso

        // Entrada de dados para teste:
        printf("Digite os dados de seu compromisso:\n\n");
        printf("Data e Hora no formato (xx/xx/xxxx - xx:xx:xx): ");
        scanf("%d/%d/%d - %d:%d:%d", &compromisso.data.dia, &compromisso.data.mes, &compromisso.data.ano, &compromisso.hora.segundo, &compromisso.hora.minuto, &compromisso.hora.hora);
        printf("\nagora entre com o local do compromisso: ");
        setbuf(stdin, NULL);
        fgets(compromisso.local, 21, stdin);
        compromisso.local[strcspn(compromisso.local, "\n")] = '\0';
        setbuf(stdin, NULL);

        printf("\nagora entre com a descri��o do compromisso: ");
        fgets(compromisso.descricao, 101, stdin);
        compromisso.descricao[strcspn(compromisso.descricao, "\n")] = '\0';
        setbuf(stdin, NULL);

        // Saida dos dados de teste:
        printf("\nSeu compromisso � em %s, a descri��o �, %s.\n", compromisso.local, compromisso.descricao);
        printf("Seu compromisso � as %02d:%02d:%02d, a data �, %02d/%02d/%04d.\n", compromisso.hora.segundo, compromisso.hora.minuto, compromisso.hora.hora, compromisso.data.dia, compromisso.data.mes, compromisso.data.ano);

        return 0;
    }