#include <stdio.h>

int main() {
    int idade;

    printf("Entre com sua idade: ");
    scanf("%i", &idade);
    while(getchar() != '\n');

    printf("Você é menor de idade? %i\n", idade < 18);
    printf("Você tem 15 anos? %i\n", idade == 15);
    printf("Você não tem 15 anos? %i\n", idade != 15);
    printf("Você é idoso? %i\n", idade > 59);

    return 0;
}