#include <stdio.h>
int main () {

    int opcao = 0;

    do {
        printf("MENU PRINCIPAL\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Recarregar\n");
        printf("3 - Ver mensagens\n");
        printf("4 - Ver ligações\n");
        printf("5 - Sair\n");
        printf("Escolha uma opção > ");
        scanf("%i", &opcao);
        while(getchar() != '\n');
        printf("\n");
        
        switch(opcao) {
            case 1: printf("Seu saldo é R$10,00\n\n"); break;
            case 2: printf("Escolha entre 10, 20 e 50\n\n"); break;
            case 3: printf("Você não tem mensagens\n\n"); break;
            case 4: printf("Últimas ligações: 9999-9999\n\n"); break;
            case 5: printf("Obrigado pelo contato! Até logo\n"); break;
            default: printf("Opção inválida! Tente de novo.\n");
        }
    } while (opcao != 5);

    return 0;
}