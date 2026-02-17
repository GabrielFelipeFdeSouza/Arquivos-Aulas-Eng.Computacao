# 13) Implementar o código correspondente em mips

#    int vetor[] = {3, 0, 1, 2, -6, -2, 4, 10, 3, 7, 8, -9, -15, -20, -87, -100}
#
#    printf("Seja bem vindo! \nPor favor entre com um valor inteiro para pesquisar no vetor\n\n");
#    scanf("%i", elemento);
#
#    while(vetor[i] != -100){
#
#        if(vetor[i] == elemento){
#            printf("Elemento %i encontrado\n\n", elemento );
#            exit(0);
#        }
#
#        i++;
#    }
#
#    printf("Elemento não encontrado\n\n");
#    exit(0);

.data
    vetor: .word 3, 0, 1, 2, -6, -2, 4, 10, 3, 7, 8, -9, -15, -20, -87, -100
    str1: .asciiz "Seja bem vindo! \nPor favor entre com um valor inteiro para pesquisar no vetor\n\n"
    str2: .asciiz "Elemento "
    str3: .asciiz " encontrado\n\n"
    str4: .asciiz "Elemento não encontrado\n\n"

.text
    main:
        #print inicial e scanf:
        la $a0, str1
        li $v0, 4
        syscall

        li $v0, 5
        syscall

        #movendo o elemento:
        move $t0, $v0

        #definindo parametros inciais lo loop:
        la $t1, vetor
        li $t3, -100

    while:
        #caso de saida do loop:
        lw $t2, 0($t1) #le o vetor
        beq $t2, $t3, saidaWhile

        #teste para ver se é o numero na posição:
        beq $t2, $t0, achou

        #se nao for, muda o passo e fica em loop:
        addi $t1, $t1, 4

        j while

    achou:
        la $a0, str2
        li $v0, 4
        syscall

        move $a0, $t2
        li $v0, 1
        syscall

        la $a0, str3
        li $v0, 4
        syscall

        j saida

    saidaWhile:
        #se chegou aqui é porque não achou:
        la $a0, str4
        li $v0, 4
        syscall

    #diretiva de saida:
    saida:
        li $v0, 10
        syscall