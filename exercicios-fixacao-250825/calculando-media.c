#include <stdio.h> // inclui a "biblioteca padrão de entrada e saída(standard input/output library)"

int main(){

float nota1, nota2, nota3, soma, resultado;

printf("Calculadora de Media\nDigite sua primeira nota: ");
scanf("%f", &nota1);

printf("Digite a segunda nota: ");
scanf("%f", &nota2);

printf("Digite a terceira nota: ");
scanf("%f", &nota3);

soma = nota1 + nota2 + nota3;

resultado = soma/3;

printf("O resultado da media e: %f", resultado);

return 0; 
}
