#include <stdio.h>
int main () {

    int num = 0;
    
    printf("Entre com um número de 1 a 10: ");
    scanf("%i", &num);

    printf("A tabuada de %i:\n");

    // for: quando sabemos quantas vezes quer repetir
    
    // repete de 1 a 10
    for (int i=1; i<=10; i++) {
        printf("%i X %i = %i\n", i, num, i * num);
    }

    // repete de 10 a 
    for (int i=10; i>0; i--) {
        printf("%i X %i = %i\n", i, num, i * num);
    }

    return 0;
}