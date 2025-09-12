/*
Nome...: Gabrielly Santos Lima
Turma...: EC41A-C11
Data...: 01/09/2025
Enunciado.: FIX03_EX01: Faça um programa em linguagem C que leia uma valor do
usuário e diga se ele é um valor igual a zero.
*/

#include <stdio.h>

int main() {
    int valor = 0;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if(valor == 0) {
        printf("\nValor igual a zero");
    }

    printf("\nFinalizando o programa");

}

