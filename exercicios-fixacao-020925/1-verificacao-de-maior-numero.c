/*
Nome...: Gabrielly Santos Lima
Turma...: EC41A-C11
Data...: 02/09/2025
Enunciado.: FIX03_EX06: Criar um programa em linguagem C que leia 2 números.
Caso o primeiro número lido seja maior ou igual ao segundo, imprima na tela
o primeiro número menos o segundo, caso contrário mostre a soma dos dois números.
*/

#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int res = 0;

    printf("Digite o numero 1: ");
    scanf("%d", &num1);
    printf("Digite o numero 2: ");
    scanf("%d", &num2);

    if(num1 >= num2) {
        res = num1 - num2;
    } else {
        res = num1 + num2;
    }

    printf("\nResultado: %d",res);

    return 0;
}

