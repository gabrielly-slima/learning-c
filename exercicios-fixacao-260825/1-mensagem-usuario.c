/*
Nome...: Gabrielly Santos Lima
Turma...: EC41A-C11
Data...: 26/08/2025
Enunciado.: FIX01-EX01: Faça um programa em Linguagem C que peça a idade
do usuário e, em seguida, digite a mensagem: Legal! Você tem *idade* anos.
*/

#include <stdio.h>

int main() {
    int idade;

    scanf("%d", &idade);
    printf("Legal! Você tem %d anos.", idade);

    return 0;
}
