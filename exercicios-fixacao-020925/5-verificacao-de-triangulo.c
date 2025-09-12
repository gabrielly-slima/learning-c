/*
Nome...: Gabrielly Santos Lima
Turma...: EC41A-C11
Data...: 02/09/2025
Enunciado.: FIX03_EXTRA: Faça uma programa em linguagem C que leia 3 valores
ladoA, ladoB e ladoC e verifique se esses valores representam os lados
de um triângulo. Para que seja um triângulo, todos os lados devem ser
maiores que zero e nenhum lado deve ser igual ou maior que a soma dos
outros dois lados. Ao terminar precisa informar também qual o tipo do triângulo:
- Escaleno: todos os lados diferentes.
- Isósceles: 2 lados iguais.
- Equilátero: todos os lados iguais.
*/

#include <stdio.h>

int main() {
    int ladoA = 0,
        ladoB = 0,
        ladoC = 0;

    printf("Digite a medida do lado A do triângulo: ");
    scanf("%d", &ladoA);
    printf("Digite a medida do lado B do triângulo: ");
    scanf("%d", &ladoB);
    printf("Digite a medida do lado C do triângulo: ");
    scanf("%d", &ladoC);

    if (ladoA <= 0 || ladoB <= 0 || ladoC <= 0) {
        printf("Alguma medida digitada foi zero ou negativa, impossível formar um triângulo.\n");
    } else {
        if ((ladoA >= ladoB + ladoC) ||
            (ladoB >= ladoA + ladoC) ||
            (ladoC >= ladoA + ladoB)) {
            printf("A soma de dois lados é menor ou igual ao terceiro. Não forma um triângulo.\n");
        } else {
            if (ladoA == ladoB && ladoB == ladoC) {
                printf("Esse triângulo é equilátero.\n");
            } else {
                if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC) {
                    printf("Esse triângulo é isósceles.\n");
                } else {
                    printf("Esse triângulo é escaleno.\n");
                }
            }
        }
    }

    return 0;
}

