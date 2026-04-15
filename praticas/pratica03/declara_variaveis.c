#include <stdio.h>

int main() {

    char sexo;
    float altura;
    int peso;

    sexo = 'F';
    altura = 1.60f;
    peso = 55;

    printf("Sexo: %c\n", sexo);
    printf("Altura: %.2f\n", altura);
    printf("Peso: %i\n", peso);


    return 0;
}