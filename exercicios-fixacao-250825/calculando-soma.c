/*
Nome...: Gabrielly Santos Lima
Turma..: EC41A-C11
Data...: 25/05/2025
Enunciado1.: Inicialize 2 variáveis (float) e mostre a soma dos valores na tela.
Enunciado2.: Idem, mas recebendo os valores do usuário.
Enunciado3.: Idem, mas mostrando na tela além do resultado, os valores envolvidos 
no cálculo.
*/

/*
#include <stdio.h>

int main() {
    float valor1 = 12, 
          valor2 = 15,
          result = 0;

    result = valor1 + valor2;
    
    printf("%f", result);

    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    float valor1, valor2, result;

    printf("Digite um valor: ");
    scanf("%f",& valor1);

    printf("Digite outro valor: ");
    scanf("%f",& valor2);

    result = valor1 + valor2;
    
    printf("%f", result);

    return 0;
}
*/
#include <stdio.h>

int main() {
    float valor1, valor2, result;

    printf("Digite um valor: ");
    scanf("%f",& valor1);

    printf("Digite outro valor: ");
    scanf("%f",& valor2);

    result = valor1 + valor2;

    printf("%f", result);
    printf("\n%f + %f = %f", valor1, valor2, result);
    

    return 0;
}
