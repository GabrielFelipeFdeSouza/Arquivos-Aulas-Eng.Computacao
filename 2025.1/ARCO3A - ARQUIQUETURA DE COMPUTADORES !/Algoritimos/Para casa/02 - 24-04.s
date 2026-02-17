# 2) implemente o código correspondente em mips

# int vetor[] = {3, 0, 1, 2, -6, -2, 4, 10, 3, 7, 8, -9, -15, -20, -87, -100}

# printf("Seja bem vindo! \nPor favor entre com um valor inteiro para pesquisar no vetor\n\n");
# scanf("%i", elemento);

# while(vetor[i] != -100){

#     if(vetor[i] == elemento){
#         printf("Elemento %i encontrado\n\n", elemento );
#         exit(0);
#     }

#     i++;
# }

# printf("Elemento não encontrado\n\n");
# exit(0);

.data
    vetor: .word 3, 0, 1, 2, -6, -2, 4, 10, 3, 7, 8, -9, -15, -20, -87, -100
    str1: .asciiz "Seja bem vindo! \nPor favor entre com um valor inteiro para pesquisar no vetor\n\n"
    str2: .asciiz "Elemento "
    str3: .asciiz " encontrado\n\n"
    str4: .asciiz "Elemento não encontrado\n\n"

.text
    main:
        # Seta o endereço do vetor em t0:
        la $t0, vetor

        li $v0, 4
        la $a0, str1
        syscall

        # Aguarda leitura usuario:
        li $v0, 5
        syscall

        # Move a entrada para s0, e define nossa parada em s1
        move $s0, $v0
        li $s1, -100

    loop:

        # A cada chamada le da memoria o elemento do vetor:
        lw $t1, 0($t0)

        # Condições de parada:
        beq $s0, $t1, achou
        beq $s1, $t1, nachou

        # Passo do laço:
        addi $t0, $t0, 4
        j loop

    achou:
        li $v0, 4
        la $a0, str2
        syscall

        li $v0, 1
        move $a0, $s0
        syscall

        li $v0, 4
        la $a0, str3
        syscall
        j saida

    nachou:        
        li $v0, 4
        la $a0, str4
        syscall
        j saida

    saida:
        li $v0, 10
        syscall