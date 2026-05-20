#include <stdio.h>

int main() {

    int tabela[3][3]; // linhas x colunas
    //    0 1 2
    // 0 | | | |
    // 1 | | | |
    // 2 | | | |

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {    // percorre a linha
            printf("Entre com a posição [%i,%i]: ", i, j);  // percorre a coluna
            scanf("%i", &tabela[i][j]);
        }
    }

    printf("\n");
    printf("A tabela ficou assim:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%i ", tabela[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    

    return 0;
}