# 2) Implemente uma versão da função strlen(str) em assembly do mips utilizando ponteiro.

.data
    str: .asciiz "Ola mundo\n\n"

.text
    strlen:
        lb $s0, 0($a0) #carrega o byte de cada ponteiro

        beq $s0, $zero, saidaLen

        #passo da função:
        addi $v0, $v0, 1
        addi $a0, $a0, 1
        j strlen

    #retorno:
    saidaLen:
        jr $ra

    main:

        la $t0, str #carregando ponteiro str

        #chamada da função:
        move $a0, $t0
        li $v0, 0
        jal strlen

        #imprime o strlen(str):
        move $a0, $v0
        li $v0, 1
        syscall

    #diretiva de saida do programa:
    saida:
        li $v0, 10
        syscall