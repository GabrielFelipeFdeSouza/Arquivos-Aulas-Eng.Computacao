# 12) A partir do código assembly do mips, ao qual implementa o programa a seguir:
#
#
#    int fat = 0;
#    int n = 5;
#        
#    for(fat = 1; n > 1; n = n - 1)
#        fat = fat * n;
#    
#   printf("%d", fat);

# OBS: Não utilize a instrução MUL, faça a partir de sucessivas somas.

.data

.text

    #define o valor que quer-se calcular fatorial em $t0, e os outros sao auxiliares ou da saida:
    main:
        li $t0, 6
        li $t1, 5 #variavel das somas sucessivas
        li $t2, 0 #saida do resultado
        li $t3, 4 #variavel do loop do numero do fatorial

    #caso base do laço:
    laco:
        beq $t3, $zero, saidaLaco
   
    #caso das somas sucessivas:
    lacoSoma:
        add $t2, $t2, $t0
        addi $t1, $t1, -1
        bne $t1, $zero, lacoSoma

        move $t0, $t2
        addi $t3, $t3, -1
        move $t1, $t3

        j laco

    #saida do laço no fim e print do valor final:
    saidaLaco:
        move $a0, $t2
        li $v0, 1
        syscall

    #diretiva de saida:
    saida:
        li $v0, 10
        syscall
