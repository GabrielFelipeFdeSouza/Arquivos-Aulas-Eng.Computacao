# 11) Codifique em assembly do mips um programa correspondente a:


#    int i = 0;
#    int j = 10;
#    int k = 0;
#
#    while (i < j){
#
#        i++;
#        k +=10;
#
#    }
#
#    printf("%i", i);
#    printf("%i", k);

.data
    str: .asciiz "\n"

.text
    main:

    #carregando os reg's:
    li $t0, 0
    li $t1, 10
    li $t2, 0

    while:
        bge $t0, $t1, saidaWhile #caso de saida

        #passos do while:
        addi $t0, $t0, 1
        addi $t2, $t2, 10

        j while

    saidaWhile:
        #prints:
        
        move $a0, $t0
        li $v0, 1
        syscall

        la $a0, str
        li $v0, 4
        syscall

        move $a0, $t2
        li $v0, 1
        syscall       

    #diretiva de saida:
    saida:
        li $v0, 10
        syscall