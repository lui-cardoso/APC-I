#include <stdio.h>
int main() {

    // cria um conjunto de 10 inteiros
    int numeros[10]; // 10 'gavetas' de 0 a 9
    numeros[0] = 10;
    numeros[1] = 6;
    numeros[2] = 7;
    numeros[3] = 0;
    numeros[4] = 5;
    numeros[5] = 3;
    numeros[6] = 2;
    numeros[7] = 1;
    numeros[8] = 8;
    numeros[9] = 9;

    for(int i=0; i < 10; i++) {

        printf("%i, ", numeros[i]);
    }

    printf("\n\n");

    char nome[100]; // cria um conjunto de 100 caracteres
    printf("Entre com seu nome: ");

    scanf("%[^\n]s", nome); 
    // vetor não precisa do &
    // [^\n] permite ler com espaços (lê até apertar enter)

    printf("Olá %s!\n", nome);
    printf("\n");

    // cria um conjunto de 3 flutuantes
    float notas[3]; 
    printf("Entre com suas notas do boletim:\n");
    for(int i=0; i < 3; i++) {
        printf("A%i = ", i+1);
        scanf("%f", &notas[i]);
    }
    printf("\n");
    printf("Suas notas foram:\n");
    for (int i = 0; i < 3; i++) {
        printf("A%i = %.1f\n", i+1, notas[i]);
    }
    printf("\n");

    return 0;
}