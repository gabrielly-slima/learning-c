/*
Nome...: Gabrielly Santos Lima
Turma...: EC41A-C11
Data...: 01/09/2025
Enunciado.: FIX03_EX05: Você está jogando um bingo e só faltam as
"pedras" 73 e 27. Faça um programa em linguagem C que receba 2 valores
"cantados" do usuário, se os valores "cantados" forem os seus, diga BINGO!!!
Ao final, ganhando ou não, de uma mensagem de fim da rodada.
*/

#include <stdio.h>

int main() {
    int pedra1 = 0;
    int pedra2 = 0;

    printf("E os dois últimos numeros são: ");
    scanf("%d", &pedra1);
    scanf("%d", &pedra2);
    printf("%d, %d!", pedra1,pedra2);

    if(pedra1 == 73 && pedra2 == 27) {
        printf("\nBINGO!");
    }

    printf("\nFim da rodada!");

    return 0;
}

