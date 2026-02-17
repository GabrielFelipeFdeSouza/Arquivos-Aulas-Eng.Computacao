# 2)Codifique em assembly do mips um programa correspondente ao trecho em linguagem C apresentado a seguir:

#    scanf("%i", a);
#    scanf("%i", b);
#    x = 0;
#    if ( a < 0 && b >= 10 )
#         x = 1;
#    printf("%i", x);

.data


.text
    main:

        li $t7, 10 #auxiliar

        #scanf's:
        li $v0, 5
        syscall
        move $t0, $v0

        li $v0, 5
        syscall
        move $t1, $v0

        #atribuindo x = 0 ($t2)
        li $t2, 0

        #implementando a logica do if, de maneira oposta
        bgt $t0, $zero, CasoSaida # a > 0
        beq $t0, $zero, CasoSaida # a == 0
        bgt $t7, $t1, CasoSaida # b < 10

        #se cair aqui é porque passou no if
        li $t2, 1

    CasoSaida: 
        li $v0, 1
        move $a0, $t2
        syscall

    saida:
        li $v0, 10
        syscall