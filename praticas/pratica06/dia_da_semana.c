#include <stdio.h>
int main() {

    int diaDaSemana = 0;

    printf("Dias da semana:\n");
    printf("1 - Domingo\n");
    printf("2 - Segunda\n");
    printf("3 - Terça\n");
    printf("4 - Quarta\n");
    printf("5 - Quinta\n");
    printf("6 - Sexta\n");
    printf("7 - Sábado\n\n");
    printf("Digite o número correspondente ao dia da semana de hoje: ");
    scanf("%i", &diaDaSemana);

    switch(diaDaSemana) {
        case 1: printf("Final de semana\n"); break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6: printf("Dia útil\n"); break;
        case 7: printf("Final de semana\n"); break;
    }

    return 0;
}