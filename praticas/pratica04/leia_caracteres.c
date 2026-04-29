#include <stdio.h>
int main() {

    char teclaPressionada;

    printf("Informe um caractere: ");
    scanf("%c", &teclaPressionada);
    while(getchar() != '\n');

    printf("Você pressionou: %c\n", teclaPressionada);

    return 0;
}