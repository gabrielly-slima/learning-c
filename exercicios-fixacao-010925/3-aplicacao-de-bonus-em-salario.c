/*
Nome...: Gabrielly Santos Lima
Turma...: EC41A-C11
Data...: 01/09/2025
Enunciado.: FIX03_EX03: O salário mínimo em 2024 é equivalente a R$ 1.412,00.
Faça um programa em linguagem C que receba o valor do salário bruto de um
funcionário, se ele ganhar menos que 2 salários mínimos, acresça um
bônus de 10% ao salário a receber. Ao final apresente o valor do salário bruto,
o valor do aumento e o valor do novo salário a receber.
*/

#include <stdio.h>

int main() {
    float salario_bruto = 0;
    float bonus = 0;
    float novo_salario = 0;

    printf("Digite seu salario: ");
    scanf("%f", &salario_bruto);

    if(salario_bruto < 1412 * 2) {
        bonus = salario_bruto * 0.10;
        novo_salario = salario_bruto + bonus;
        printf("Seu salario antes era de R$%.2f.",salario_bruto);
        printf("\nAgora, com um aumento de R$%.2f seu salario sera de R$%.2f.",bonus,novo_salario);
    }

    printf("\nFinalizando o programa");

    return 0;
}


