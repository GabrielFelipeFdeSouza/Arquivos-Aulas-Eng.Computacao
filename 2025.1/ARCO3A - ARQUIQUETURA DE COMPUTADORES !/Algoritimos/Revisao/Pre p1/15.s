# 15) Implemente o seguinte programa em assembly do mips:
#
#           int somador(int n){
#                      if(n > 0)
#                           return (n + somador(n-1));
#                     else
#                           return 0;
#           }
#
#           void main(){
#              int n;
#              scanf("%d", &n);
#              printf("Resultado  %d\n\n",somador(n));
#           }
#
# Dica: Siga as diretivas do mips para as chamadas de procedimentos e funções.

.data
    str1: .asciiz "Resultado  "
    str2: .asciiz "\n\n"

.text

    soma:
        #verificação caso:
        beq $a0, $zero, casoSaida
        bgt $zero, $a0, casoSaida

        #armazenando ra e a0, para reuso:
        addi $sp, $sp, -8
        sw $ra, 4($sp)
        sw $a0, 8($sp)

        #chamada recursiva:
        addi $a0, $a0, -1
        jal soma

        #desempilhando:
        lw $ra, 4($sp)
        lw $a0, 8($sp)
        addi $sp, $sp, 8

        add $v0, $v0, $a0

        jr $ra

    casoSaida:
        li $v0, 0
        jr $ra


    main:
        #scanf:
        li $v0, 5
        syscall

        move $a0, $v0

        #chamada da função:
        jal soma
        move $t2, $v0

        #print:
        la $a0, str1
        li $v0, 4
        syscall

        move $a0, $t2
        li $v0, 1
        syscall

        la $a0, str2
        li $v0, 4
        syscall

    #diretiva de saida:
    saida:
        li $v0, 10
        syscall