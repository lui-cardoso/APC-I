#include <stdio.h>

int main() {
    int idade;

    printf("Entre com a sua idade: ");
    scanf("%i", &idade);
    while(getchar() != '\n');

    printf("Você é uma criança? %i\n", idade >= 0 && idade <=12);
    // && --> 1 Falso *E* qualquer coisa = Sempre Falso

    printf("Você tem prioridade para vacinar? %i\n", idade <= 6 || idade >= 60);
    // || --> 1 Verdadeiro *OU* qualquer coisa = Sempre Verdadeiro

    printf("Você não pode votar? %i\n", !(idade >= 16));
    // ! (not) --> NÃO Verdadeiro = Falso, NÃO Falso = Verdadeiro



    return 0;
}