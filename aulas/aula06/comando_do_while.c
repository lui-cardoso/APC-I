#include <stdio.h>
int main () {

    int num = 0;
    do {
        printf("Entre com um número entre 1 e 10: ");
        scanf("%i", &num);
    } while (getchar() != '\n');

    return 0;
}