#include <stdio.h>
int main () {

    int num = 0;
    printf("Entre com um número entre 1 e 10: ");
    scanf ("%i", &num);
    while(getchar() != '\n'); 

    // while: quando sabemos onde deve parar
    while(num < 1 || num > 10) {
        printf("Número inválido! Tente de novo.\n");
        scanf("%i", &num);
        while(getchar() != '\n'); 
    }

    return 0;
}