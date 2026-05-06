#include <stdio.h>
int main () {
    
    int operador1;
    int operador2;

    printf("Digite um número inteiro:\n");
    scanf("%i", &operador1);
    while(getchar() != '\n');

    printf("Digite outro número inteiro:\n");
    scanf("%i", &operador2);
    while(getchar() != '\n');

    int soma = operador1 + operador2;
    int subtracao = operador1 - operador2;
    int multiplicacao = operador1 * operador2;
    int divisao = operador1 / operador2;

    printf("%i + %i = %i\n", operador1, operador2, soma);
    printf("%i - %i = %i\n", operador1, operador2, subtracao);
    printf("%i x %i = %i\n", operador1, operador2, multiplicacao);
    printf("%i / %i = %i\n", operador1, operador2, divisao);
    
    return 0;
}