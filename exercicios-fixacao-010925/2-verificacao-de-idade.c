/*
Nome...: Gabrielly Santos Lima
Turma...: EC41A-C11
Data...: 01/09/2025
Enunciado.: FIX03_EX02: Faça um programa em linguagem C que peça a
idade do usuário. Se ele for menor de idade, dê uma mensagem que ele
não poderá acessar o sistema. Independente da resposta, finalize o programa.
*/

#include <stdio.h>

int main() {
    int idade = 0;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade < 18) {
        printf("\nVocê é menor de idade, não poderá utilizar esse sistema.");
    }

    printf("\nFinalizando o programa");

}

