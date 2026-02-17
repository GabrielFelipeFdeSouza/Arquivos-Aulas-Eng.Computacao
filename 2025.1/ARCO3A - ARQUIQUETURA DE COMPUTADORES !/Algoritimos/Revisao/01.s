# 1) Implemente o seguinte programa em assembly do mips:

#     int somador(int n){
#                 if(n > 0)
#                     return (n + somador(n-1));
#                 else
#                     return 0;
#     }

#     void main(){
#         int n;
#         scanf("%d", &n);
#         printf("Resultado  %d\n\n",somador(n));
#     }

.data
    str1: .asciiz "Resultado  "
    str2: .asciiz "\n\n"

.text
    somador:

        #se menor ou igual a zero:
        blez $a0, finalSomador

        #caso padrao
        addi $sp, $sp -8
        sw $a0, 4($sp)
        sw $ra, 8($sp)

        addi $a0, $a0, -1
        jal somador

        lw $a0, 4($sp)
        lw $ra, 8($sp)
        addi $sp, $sp 8

        add $v0, $v0, $a0 #desempilhando 

        jr $ra

    #fim da recursao - caso base - desempilhar começa aqui:
    finalSomador:
    li $v0, 0
    jr $ra

    main:

        #leitura teclado:
        li $v0, 5
        syscall

        #copia valor entrada e chama função:
        move $a0, $v0
        jal somador

        #exibe o valor de saida:
        move $t0, $v0

        la $a0, str1
        li $v0, 4
        syscall

        move $a0, $t0
        li $v0, 1
        syscall

        la $a0, str2
        li $v0, 4
        syscall


    #diretiva de saida do programa:
    saida:
        li $v0, 10
        syscall