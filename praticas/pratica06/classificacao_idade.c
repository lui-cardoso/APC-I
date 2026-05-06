#include <stdio.h>
int main() {

    int idade = 0;
    
    printf("Entre com sua idade: ");
    scanf("%i", &idade);

    /* 
    crianca: idade <= 12;
    adolescente: idade > 12 && idade <= 17;
    adulto: idade > 17 && idade <= 64; 
    */

    if (idade <= 12) {
        printf("Você é criança.");
    } else if (idade > 12 && idade <= 17) {
        printf("Você é adolescente.");
    } else if (idade > 17 && idade <= 64) {
        printf("Você é adulto.");
    } else {
        printf("Você é idoso.");
    }

    return 0;
}