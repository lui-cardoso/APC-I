#include <stdio.h>
int main() {

    int numero;
    printf("Digite um número inteiro: ");
    scanf("%i", &numero);

    int numero_par = numero % 2 == 0;
    
    if (numero_par) {
        printf("%i é par\n", numero);
    } else {
        printf("%i é ímpar\n", numero);
    }

    return 0;
}