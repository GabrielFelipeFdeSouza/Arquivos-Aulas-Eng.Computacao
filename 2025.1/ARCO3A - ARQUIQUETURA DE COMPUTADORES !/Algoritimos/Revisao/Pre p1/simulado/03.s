# 3)Seguindo todas as especificações do mips para chamada de procedimento faça:
# (1,0) a) Faça um programa, em assembly do MIPS, que receba e multiplique dois inteiros sem usar a 
# instrução de multiplicação do MIPS. Imprima o resultado na tela.

#(2,0) b) O programa deverá funcionar tanto para inteiros positivos quanto para inteiros negativos.


#explicação: Há 4 casos na multiplicação de dois numeros:
# 1. um dos valores é 0 e portanto a resposta é 0
# 2. um dos valores é negativo e logo a resposta é negativa, mas devemos sempre dar prerencia
# pelo numero negativo estar no primeiro termon, se nescessario até trocar de lugar, pois o algoritimo
# de multiplicação por soma usa sempre o segundo como um positivo e vai decrementando afinaL
# 4 * 3 = (4 + 4 + 4) ou seja somar 4, tres vezes, logo o segundo termo deve ser positivos
# 3. os dois valores sao positivos e dessa maneira é só fazer a multiplicação
# 4. os dois valores sao negativos, e nesse caso, devemos deixar os dois positivos afinal a
# multiplicação de dois negativos é um positivo, e para essa logica basta aplicar um "complemento de 2"

.data 
    str1: .asciiz "Digite o primeiro valor: "
    str2: .asciiz "Digite o segundo valor: "
    str3: .asciiz "Resultado: "

.text

    #função que calcula os numeros por somas sucessivas:
    calcularMultiplicacao:
        #salvando o $ra:
        addi $sp, $sp, -4
        sw $ra, 4($sp)
        li $v0, 0 #zerando o retorno

        #começando a conta: $a0 * $a1 = ($a0 + $a0 + $a0 ... $a1 vezes)
    passoMultiplicacao:
        beq $a1, $zero, saidaMultiplicacao
        add $v0, $v0, $a0
        addi $a1, $a1, -1
        j passoMultiplicacao

   saidaMultiplicacao:
        #restauração resgistrador $ra:
        lw $ra, 4($sp)
        addi $sp, $sp, 4
        jr $ra 


    main:
        #entrada dos valores:
        la $a0, str1
        li $v0, 4
        syscall

        li $v0, 5
        syscall
        move $t0, $v0

        la $a0, str2
        li $v0, 4
        syscall

        li $v0, 5
        syscall
        move $t1, $v0

        #verifica se um dos numeros é 0:
        beq $t0, $zero, casoZero
        beq $t1, $zero, casoZero

        #verifica se um dos numeros é negativo, se for manda para processar negativos, sempre em t0 o negativo:
        bgt $zero, $t0, casoNegativo
        bgt $zero, $t1, casoNegativo2

        j casoPositivoAmbos

    casoNegativo2:
        #se caiu aqui é porque valor de t0 é positivo e t1 é negativo, devemos trocar os registradores de lugar:
        move $t2, $t1 #preservando t1
        move $t1, $t0
        move $t0, $t2

        #chama a função de multiplicação:
        move $a0, $t0
        move $a1, $t1
        jal calcularMultiplicacao
        j printarCasos
        

    casoNegativo:
        #ja checa se os dois sao negativos e manda para a função de processamento de nois negativos:
        bgt $zero, $t1, casoNegativosAmbos

        #se nao for começa o processamento da multiplicação:
        move $a0, $t0
        move $a1, $t1
        jal calcularMultiplicacao
        j printarCasos

    casoNegativosAmbos: 
        #neste caso podemos simplismente implementar uma nova função, parecida com a multiplicadora original, 
        #ou fazer os complementos de dois de ambos os valores, os tornando positivos:

        #realizando complemento de dois: se temos -x -> -x - -2x = x
        add $t3, $t0, $t0 
        add $t4, $t1, $t1

        sub $t0, $t0, $t3
        sub $t1, $t1, $t4

        #esta tudo correto agora, é só realizar a multiplicação e exibir:
        move $a0, $t0
        move $a1, $t1
        jal calcularMultiplicacao
        j printarCasos

    casoPositivoAmbos:
        #esta tudo correto, é só realizar a multiplicação e exibir:
        move $a0, $t0
        move $a1, $t1
        jal calcularMultiplicacao
        j printarCasos

    casoZero:
        la $a0, str3
        li $v0, 4
        syscall

        li $v0, 1
        li $a0, 0 
        syscall

        j saida

    printarCasos:
        move $t5, $v0

        la $a0, str3
        li $v0, 4
        syscall

        li $v0, 1
        move $a0, $t5
        syscall

        j saida


    #diretiva de saida:
    saida:
        li $v0, 10
        syscall