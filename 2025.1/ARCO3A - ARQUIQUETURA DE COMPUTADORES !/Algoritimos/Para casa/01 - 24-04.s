# 1) Codifique o programa a seguir em assempbly do mips e logo depois em código binário. Para cada instrução, considere os formatos de instruções do mips.

# Dica: Utilize a tabela de registradores apresentado em aula, e o mapa de bits disponibilizado, para realizar essa tradução.

#  Considerando o código a seguir:

# int folha(int g, int h, int i, int j){

#          int f;

#          f = (g + h) - (i + j);

#          return f;

# }

# Agora responda as perguntas:

# a) Considerando o conjunto de registradores apresentados em aula, quais registradores você utilizou
# para armazenar os argumentos da função? Por que?
# b) Faça as chamadas de sistema para imprimir o valor de f, e para sair do programa;
# c) Qual registrador você acha mais adequado para armazenar o valor de retorno da função folha?
# d) Teste o código utilizando algum simulador do MIPS.

.data

.text

    folha:
        add $a0, $a0, $a1
        add $a2, $a2, $a3

        sub $v0, $a0, $a2
        jr $ra

    main:

        addi $a0, $zero, 1
        addi $a1, $zero, 2
        addi $a2, $zero, 3
        addi $a3, $zero, 4

        jal folha

        add $a0, $zero, $v0
        addi $v0, $zero, 1
        syscall
        j saida

    saida:
        addi $v0, $zero, 10
        syscall

# a) Aara passar para a função folha os parametros, fora usados os registradores de argumento a0 - a3;
# b) Ok;
# c) Assim como durante as leituras da stdin pelo syscall, o retorno é feito em v0, acho que o mesmo é o mais recomendado para retorno de funções;
# d) Ok;

# Tradução da função:

# add $a0, $a0, $a1 - 000000001000010100100000001000000
# add $a2, $a2, $a3 - 000000001100011100110000001000000
# sub $v0, $a0, $a2 - 000000001000011000010000001000010
# jr $ra - 000000111110000000000000000001000