# 3) Implemente uma versão da função strcmp(str1, str2) em assembly do mips.

.data
    str1: .asciiz "Caramba  essa função funciona mesmo! :))"
    str2: .asciiz "Caramba  essa função funciona mesmo! :))"

.text
    strcmp:
        #carrega o byte de cada ponteiro:
        lb $s0, 0($a0)
        lb $s1, 0($a1)

        #testa se sao iguais para continuar o laço:
        beq $s0, $s1, strcmpLaco

        #se forem diferentes retorna zero:
        li $v0, 0 
        jr $ra 

    strcmpLaco:
        #testa para saber se ja é o fim:
        beq $s0, $zero, strcmpSaida

        #incrementa e rechama a função se nao for o fim:
        addi $a0, $a0, 1
        addi $a1, $a1, 1
        j strcmp

    strcmpSaida:
        #se forem iguais retorna 1:
        li $v0, 1
        jr $ra

    main:

        #carrgeando endereços:
        la $t0, str1
        la $t1, str2

        #chamando função:
        move $a0, $t0
        move $a1, $t1
        jal strcmp

        #printando resposta 0 ou 1
        move $a0, $v0
        li $v0, 1
        syscall

    saida:
        li $v0, 10
        syscall