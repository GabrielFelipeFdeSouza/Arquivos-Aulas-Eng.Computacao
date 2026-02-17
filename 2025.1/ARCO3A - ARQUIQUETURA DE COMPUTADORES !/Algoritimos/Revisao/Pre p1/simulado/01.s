# 1)Escreva um programa em assembly do mips que receba dois números do teclado e imprima o maior. 
#  Caso os números sejam iguais imprima o valor 0

.data 
    str1: .asciiz "Digite o primeiro valor: "
    str2: .asciiz "Digite o segundo valor: "

.text
    main:
        #entrada dos valores:
        la $a0, str1
        li $v0, 4
        syscall

        li $v0, 5
        syscall
        move $t0, $v0

        la $a0, str2
        li $v0, 4
        syscall

        li $v0, 5
        syscall
        move $t1, $v0

        #verifica se são iguais:
        beq $t0, $t1, casoZero

        #verifica se o $t0 > $t1
        bgt $t0, $t1, Casot0

        #caso onde t1 é maior:
        li $v0, 1
        move $a0, $t1
        syscall

        j saida

    Casot0:
        li $v0, 1
        move $a0, $t0
        syscall

        j saida

    casoZero:
        li $v0, 1
        li $a0, 0
        syscall

        j saida

    #diretiva de saida:
    saida:
        li $v0, 10
        syscall
