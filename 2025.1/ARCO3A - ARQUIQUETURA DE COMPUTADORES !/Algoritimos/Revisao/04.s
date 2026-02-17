# 4) Verificar se uma palavra é palindroma

.data
    str: .asciiz "kao !oak"

.text   

    strpa:
        #acha o fim da frase e conta quantos caracteres tem:
        lb $s1, 0($a1)
        beq $s1, $zero strpaPassoVereficar

        #caso nao for o final ainda:
        addi $s2, $s2, 1
        addi $a1, $a1, 1
        j strpa

    strpaPassoVereficar:
        addi $a1, $a1, -1 #reajuste do ponteiro

        #faz a divisao do numero de caracteres ($s2) por 2 para saber a paridade da palavra:
        li $s3, 2
        div $s2, $s3
        mflo $s2 #proprio $s2 recebe o resultado da paridade
        li $s3, 0 #setado para 0 para uso na contagem do laço abaixo
        
    strpaPassoloop:
        #começa fazer a checagem se as palavras adjacentes sao iguais:
        lb $s0, 0($a0)
        lb $s1, 0($a1)

        #testa se sao iguais para continuar o laço:
        beq $s0, $s1, strpaLaco

        #se forem diferentes retorna zero:
        li $v0, 0 
        jr $ra 

    strpaLaco:
        #testa para saber se ja é o fim:
        beq $s2, $s3, strpaSaida

        #incrementa e rechama a função se nao for o fim:
        addi $s3, $s3, 1
        addi $a0, $a0, 1
        addi $a1, $a1, -1
        j strpaPassoloop

    strpaSaida:
        #se forem iguais retorna 1:
        li $v0, 1
        jr $ra

    main:
        #carregar o ponteiro da palavra:
        la $t0, str

        #chamada da função:
        move $a0, $t0
        move $a1, $t0
        li $s2, 0 #zera o registrador para contar caracteres
        jal strpa
                
        #printando resposta 0 ou 1
        move $a0, $v0
        li $v0, 1
        syscall

    saida:
        li $v0, 10
        syscall