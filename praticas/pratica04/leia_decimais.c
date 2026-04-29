#include <stdio.h>
int main () {

    float nota1;
    float nota2;

    printf("Digita sua 1a nota: \n");
    scanf("%f", &nota1);
    while(getchar() != '\n');

    printf("Digita sua 2a nota: \n");
    scanf("%f", &nota2);
    while(getchar() != '\n');

    printf("Suas notas foram %.2f e %.2f\n", nota1, nota2);

    return 0;
}