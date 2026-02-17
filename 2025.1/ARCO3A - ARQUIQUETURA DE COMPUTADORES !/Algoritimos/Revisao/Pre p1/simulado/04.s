#4)Faça um programa, em assembly do mips, para somar dois vetores (V1 e V2) onde:
#
#        v1 = {10,20,30,40,50,60}
#        v2 = {0,10,-15, 16, 20, 30}
#
#    O programa deverá percorrer os dois vetores, de tamanho 6, somando cada elemento e colocando
#    os mesmos no vetor resultante.
#
#    A saída desejada é apresentada a seguir:
#
#    A soma dos vetores v0 e v1 é:
#
#          10, 30, 15, 56, 70, 90
#
#    OBS: Modele primeiro a solução em C depois traduza para assembly

.data
    vetor1: .word 10, 20, 30, 40, 50, 60
    vetor2: .word 0, 10, -15, 16, 20, 30
    vetor3: .word 0:6
    str1: .asciiz " "

.text
    main:

        li $t0, 5 #passo do loop

        #carregando endereços dos vetores:
        la $t1, vetor1
        la $t2, vetor2
        la $t3, vetor3

    loop:   
        #carregando valores salvos nos vetores:
        lw $t5 0($t1)
        lw $t6 0($t2)
        
        #faz a soma:
        add $t7, $t5, $t6

        #guarda no vetor alvo e printa:
        sw $t7, 0($t3)

        move $a0, $t7
        li $v0, 1
        syscall
        
        la $a0, str1
        li $v0, 4
        syscall

        #passo do loop:
        beq $t0, $zero, saida
        addi $t0, $t0, -1
        addi $t1, $t1, 4
        addi $t2, $t2, 4
        j loop
    

    #diretiva de saida:
    saida:
        li $v0, 10
        syscall