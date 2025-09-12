/*
Nome...: Gabrielly Santos Lima
Turma...: EC41A-C11
Data...: 02/09/2025
Enunciado.: FIX03_EX09: Faça um programa em linguagem C que apresente um menu e
pergunte ao usuário se ele deseja calcular:
1) a área de um triângulo (base vezes altura dividido por 2) - receba base e altura
2) a área de um círculo (pi multiplicado pelo raio ao quadrado) - receba o raio
3) a área de um cubo (6 vezes a área do quadrado) - receba o lado do quadrado
Depois, solicitar os dados necessários para calcular a área escolhida,
e mostrar o resultado na tela.
*/

#include <stdio.h>

int main()
{
    int num = 0;
    float base = 0,
          altura = 0,
          raio = 0,
          lado = 0,
          resultado = 0;


    printf("--MENU DE OPERAÇÕES--\nDigite:\n1 - Para calcular a área de um TRIÂNGULO.");
    printf("\n2 - Para calcular a área de um CÍRCULO.");
    printf("\n3 - Para calcular a área de um CUBO.\n");
    scanf("%d", &num);

    if(num == 1) {
        printf("Digite a medida da base do triângulo: ");
        scanf("%f", &base);
        printf("Digite a medida da altura do triângulo: ");
        scanf("%f", &altura);
        resultado = (base * altura)/2;

    } else {
        if(num == 2) {
            printf("Digite a medida do raio do círculo: ");
            scanf("%f", &raio);
            resultado = 3.14 * (raio * raio);

        } else {
            if(num == 3) {
                printf("Digite a medida do lado do quadrado: ");
                scanf("%f", &lado);
                resultado = 6 * (lado * lado);
        }
    }
    }
    printf("O resultado é %.2f", resultado);
    return 0;
}

