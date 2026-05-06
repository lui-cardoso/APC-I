#include <stdio.h>
int main () {

    int idade = 0;

    printf("Entre com a sua idade: ");
    scanf("%i", &idade);

    int menor_que_16 = idade < 16;
    int maior_que_16 = idade >= 16;
    int menor_que_18 = idade < 18;
    int maior_que_18 = idade >= 18;
    int menor_que_70 = idade < 70;

    if (menor_que_16) {
        printf("Com %i anos você não pode votar!\n", idade);
    } else if (maior_que_16 && menor_que_18) {
        printf("Com %i anos você pode votar!\n", idade);
    } else if (maior_que_18 && menor_que_70) {
        printf("Com %i anos você tem que votar!\n", idade);
    } else {
        printf("Com %i anos você pode votar!\n", idade);
    }
    
    return 0;
}