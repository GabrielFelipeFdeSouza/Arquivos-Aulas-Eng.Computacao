# 5) Implemente um programa que calcule um fatorial de um numero, recursivamente, nao tratando erros de usuario

.data
    str1: .asciiz "Digite um numero para calcular o fatorial: "

.text

    fibo:
        #aloca na memoria a cada chamada da função o ra e a0, para reuso:
        li $s0, 1
        addi $sp, $sp, -8
        sw $ra, 4($sp)
        sw $a0, 8($sp)

        #se chegar no 1, começa desempilhar, se nao, move para o passo
        beq $a0, $s0, saidaFibo
        bne $a0, $s0, passoFibo

        #decrementa 1 do a0, e chama a função recursivamente
        passoFibo:
            addi $a0, $a0, -1
            jal fibo

        #começa a reatribuir os valores guardados na pilha e faz as multiplicações:
        lw $ra, 4($sp)
        lw $a0, 8($sp)
        addi $sp, $sp, 8

        #faz a multiplicação e retorna:
        mul $v0, $v0, $a0
        jr $ra

        #retorno para o desempilhar, quando chegar no caso base a0 = 1
        saidaFibo:
            jr $ra

    main:

        #entrada do numero:
        la $a0, str1
        li $v0, 4
        syscall

        li $v0, 5
        syscall
        move $a0, $v0

        #chamada da função:
        li $v0, 1
        jal fibo

        #print da saida da função:
        move $a0, $v0
        li $v0, 1
        syscall

    #diretiva de saida:
    saida:
        li $v0, 10
        syscall