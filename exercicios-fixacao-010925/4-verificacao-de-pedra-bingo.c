/*
Nome...: Gabrielly Santos Lima
Turma...: EC41A-C11
Data...: 01/09/2025
Enunciado.: FIX03_EX04: Você está jogando um bingo e só falta a "pedra" 51.
Faça um programa em linguagem C que receba 1 valor "cantado" do usuário,
e diga BINGO se deu a sua pedra. Ao final, ganhando ou não,
de uma mensagem de fim da rodada.
*/

#include <stdio.h>

int main() {
    int pedra = 0;

    printf("O numero é...");
    scanf("%d", &pedra);
    printf("%d!", pedra);

    if(pedra == 51) {
        printf("\nBINGO!");
    }

    printf("\nFim da rodada!");

    return 0;
}

