#include <stdio.h>

int main() {

    /*
    ==============================
         N O T A    L E G A L
    ==============================
    Produto         Qtd Valor Unit
    Camiseta        002      39.99
    Calca           001      89.90
    Meia Social     003      19.99
    ==============================
    Total                   229.85
    */

    printf("==============================\n");
    printf("     N O T A    L E G A L     \n");
    printf("==============================\n");
    printf("Produto         Qtd Valor Unit\n");

    int quantidade;
    float valor_unit;

    quantidade = 002;
    valor_unit = 39.99f;

    printf("%s %10.03i %5.2f\n", "Camiseta", quantidade, valor_unit);

    quantidade = 001;
    valor_unit = 89.90f;

    printf("%s %13.03i %5.2f\n", "Calca", quantidade, valor_unit);

    quantidade = 003;
    valor_unit = 19.99f;

    printf("%s %7.03i %5.2f\n", "Meia Social", quantidade, valor_unit);
 
    printf("==============================\n");

    float valor_total = 229.85;

    printf("%s %24.2f\n", "Total", valor_total);
    return 0;
}