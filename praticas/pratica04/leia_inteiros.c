#include <stdio.h>
int main() {

    int numero1;
    int numero2;

    printf("Digite um número: \n");
    scanf("%i", &numero1);
    while(getchar() != '\n');

    printf("Digite outro número: \n");
    scanf("%i", &numero2);
    while(getchar() != '\n');

    printf("Você digitou %i e %i\n", numero1, numero2);

    return 0;
}