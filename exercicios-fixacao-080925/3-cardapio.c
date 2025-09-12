/*
Nome...: Gabrielly Santos Lima
Turma...: EC41A-C11
Data...: 08/09/2025
Enunciado...:FIX03_EX12: Faça um programa em Linguagem C para mostrar um menu com as opções de um cardápio 
de restaurante ao usuário e obter o prato desejado. Após a escolha do prato, perguntar ao usuário se deseja
pagar a gorjeta ao garçom (10% sobre o valor do prato) e mostrar o valor final de acordo com a resposta.
*/

#include <stdio.h>

int main()
{
    int num = 0;
    float valor = 0;
    char resposta;

    printf("--CARDÁPIO--\n1 - Para escolher a PICANHA (R$ 65,00)");
    printf("\n2 - Para escolher a LASANHA (R$ 27,00)");
    printf("\n3 - Para escolher o STROGONOFF (R$ 22,00)");
    printf("\n4 - Para escolher o BIFE ACEBOLADO (R$ 20,00)");
    printf("\n5 - Para escolher o PAO COM OVO (R$ 7,50)\n");
    scanf("%d", &num);

    switch(num){
        case 1:
            valor = 65;
            break;
        case 2:
            valor = 27;
            break;
        case 3:
            valor = 22;
            break;
        case 4:
            valor = 20;
            break;
        case 5:
            valor = 7.50;
            break;
        default:
            printf("Erro!\n");
            return 1; // encerra o programa se opção inválida
    }

    printf("Deseja pagar a gorjeta do garçom? Digite s ou n: ");
    scanf(" %c", &resposta);

    if (resposta == 's' || resposta == 'S'){
        printf("O valor final da sua compra foi de R$ %.2f.\n", valor + (0.10 * valor));
    } else if (resposta == 'n' || resposta == 'N') {
        printf("O valor final da sua compra foi de R$ %.2f.\n", valor);
    } else {
        printf("Erro! Caractere inválido!\n");
    }

    return 0;
}
