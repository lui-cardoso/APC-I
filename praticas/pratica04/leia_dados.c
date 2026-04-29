#include <stdio.h>
int main() {

    int idade;
    float altura;
    char sexo;
    float peso;

    printf("Digite sua idade: ");
    scanf("%i", &idade);
    while(getchar () != '\n');

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    while(getchar () != '\n');

    printf("Digite seu sexo (M ou F): ");
    scanf("%c", &sexo);
    while(getchar () != '\n');

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    while(getchar () != '\n');

    printf("Seus dados:\nIdade: %i\nAltura: %.2f\nSexo: %c\nPeso: %.3f\n", idade, altura, sexo, peso);
    return 0;
}