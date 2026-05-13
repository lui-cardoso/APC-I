#include <stdio.h>
int main() {

    int selecaoMenu = 0;

    printf("** Main Menu **\n");
    printf("1 - Novo jogo\n");
    printf("2 - Continuar jogo\n");
    printf("3 - Ver pontuação\n");
    printf("4 - Sair\n");
    scanf("%i", &selecaoMenu);

    switch(selecaoMenu) {
        case 1: printf("Você selecionou: Novo jogo\n"); break;
        case 2: printf("Você selecionou: Continuar jogo\n"); break;
        case 3: printf("Você selecionou: Ver pontuação\n"); break;
        case 4: printf("Você selecionou: Sair\n"); break;
        default: printf("Opção inválida! Tente novamente\n");
    }

    
    return 0;
}