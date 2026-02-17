#Algoritimo para calculo de termos da sequencia de fibonacci, baseado na entrada do termo e nao no numero de termos:

.data
    espaco: .asciiz "\n"
    str1: .asciiz "Digite qual termo até que termo (próximo) de fibonacci deseja calcular: "
.text

    main:
        #carregando valores iniciais do fibonacci:
        li $t0, 0
        li $t1, 1

        #leitura do termo do usuario:
        la $a0, str1
        li $v0, 4
        syscall
        la $a0, espaco
        li $v0, 4
        syscall

        li $v0, 5
        syscall 
        move $t4, $v0

    loop:
        #passo do fibonacci:
        add $t2, $t0, $t1
        move $t0, $t1
        move $t1, $t2
        
        #impressão:
        move $a0, $t1
        li $v0, 1
        syscall
        la $a0, espaco
        li $v0, 4
        syscall

        #check do fim:
        sltu $t3, $t4, $t1
        beq $t4, $t1, end #evita trnasbordar a contagem acima
        beq $t3, $zero, loop # se a condição do if for falsa executa o loop
    
    end:

        li $v0, 10
        syscall

