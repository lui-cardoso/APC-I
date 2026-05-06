#include <stdio.h>
int main() {

    int nota = 0;

    printf("Entre com uma nota de 1 a 5: ");
    scanf("%i", &nota);

    switch(nota) {
        case 1: printf("Ganhou uma estrela *\n"); break;
        case 2: printf("Ganhou duas estrelas **\n"); break;
        case 3: printf("Ganhou três estrelas ***\n"); break;
        case 4: printf("Ganhou quatro estrelas ****\n"); break;
        case 5: printf("Ganhou cinco estrelas *****\n"); break;
        default: printf("Nota inválida! Tente novamente.\n");
    }

    return 0;
}