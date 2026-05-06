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

    if (diaDaSemana >= 2 && diaDaSemana <= 6) {
        printf("Hoje é um dia útil.\n");
    } else {
        printf("Hoje é final de semana.\n");
    }

    return 0;
}