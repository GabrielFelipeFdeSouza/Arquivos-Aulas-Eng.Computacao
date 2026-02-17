# 10) Codifique em assembly do mips um programa correspondente a :


#    int a = 2;
#    int b = 10;
#    x = 0;
#    if ( a >= 0 && b <= 50 )
#         x = 1;
#    printf("%i", x);
# Agora, teste a e b com outros valores.

.data

.text   
    main:
        #carregando os valores:
        li $t0, 2
        li $t1, 10
        li $t2, 0

        li $t3, 50

        #verifica os casos (if's):
        bge $t0, $zero, retest
        j print #diretamente para caso 0

    retest:
        bge $t3, $t1, casoUm
        j print #diretamente para caso 0

    casoUm:
        li $t2, 1

    print: 
        move $a0, $t2
        li $v0, 1
        syscall 


    #diretiva de saida:
    saida:
        li $v0, 10
        syscall