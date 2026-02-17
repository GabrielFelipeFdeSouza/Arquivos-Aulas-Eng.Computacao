# Traduza o seguinte programa em C para assembly do MIPS, respeitando todas as convenções do MIPS.

# int folha(int g, int h, int I, int j, int l, int m, int n, int o)
# {   
#        int f,f2;
#        f = (g + h) - (I + j);

#        f2 = folha2(1,2,3,4);

#       f = f+f2;

#        return f;
# }

# int folha2(int g, int h, int I, int j)
# {   
#        int f;
#        f = (g - h) + (I - j);
#        return f;
# }

# void main(){

#     int res = folha(1,2,3,4,5,6,7,8);
#     printf("O resultado de folha é %i \n\n", res);

# }

.data
    str1: .asciiz "O resultado de folha é " 
    str2: .asciiz " \n\n" 

.text

    folha:
        #lendo os valores da pilha e salvando nos registradores s0 - s3:
        lw $s0, 0($sp)
        lw $s1, 4($sp)
        lw $s2, 8($sp)
        lw $s3, 12($sp)

        #operando os valores que estavam na pilha:
        add $s0, $s0, $s1
        add $s2, $s2, $s3
        add $s4, $s0, $s2

        #armazenando ra e registadores s usados para reuso do retorno:
        addi $sp, $sp, -24
        sw $s0, 0($sp)
        sw $s1, 4($sp)
        sw $s2, 8($sp)
        sw $s3, 12($sp)
        sw $s4, 16($sp)
        sw $ra, 20($sp)

        #chamada da folha 2:
        jal folha2

        #restaurando valores de ra e registadores s:
        lw $s0, 0($sp)
        lw $s1, 4($sp)
        lw $s2, 8($sp)
        lw $s3, 12($sp)
        lw $s4, 16($sp)
        lw $ra, 20($sp)
        addi $sp, $sp, 24

        #operando a soma final:
        add $v0, $v0, $s4

        #retornando a main
        jr $ra

    folha2:

        #armazenando valor de ra:
        addi $sp, $sp, -4
        sw $ra, 0($sp)

        #operando a soma:
        add $a0, $a0, $a1
        add $a2, $a2, $a3
        add $v0, $a0, $a2

        #restaurando valor de ra:
        lw $ra, 0($sp)
        addi $sp, $sp, 4

        #retonando a folha:
        jr $ra

    #função principal:
    main:

        #armazendando metade dos parametros no argumento e metade na pilha:
        li $a0, 1
        li $a1, 2
        li $a2, 3
        li $a3, 4

        li $t0, 1
        li $t1, 2
        li $t2, 3
        li $t3, 4

        #guardando valores dos registradores t, que podem ser usados para a passagem para folha:
        addi $sp, $sp, -16
        sw $t0, 0($sp)
        sw $t1, 4($sp)
        sw $t2, 8($sp)
        sw $t3, 12($sp)

        #chamada da função folha:
        jal folha

        #retornando valores de t para seus respectivos lugares:
        lw $t0, 0($sp)
        lw $t1, 4($sp)
        lw $t2, 8($sp)
        lw $t3, 12($sp)
        addi $sp, $sp, 16

        #print dos valores e saida:
        move $t5, $v0

        la $a0, str1
        li $v0, 4
        syscall 

        move $a0, $t5
        li $v0, 1
        syscall 

        la $a0, str2
        li $v0, 4
        syscall 

        j saida

    #função de saida:
    saida:
        li $v0, 10
        syscall