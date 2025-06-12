#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};

    // Navio 1 - Vertical (3 posições)
    for (int i = 0; i < 3; i++) {
        tabuleiro[1 + i][2] = 3;
    }

    // Navio 2 - Horizontal (4 posições)
    for (int i = 0; i < 4; i++) {
        tabuleiro[6][3 + i] = 3;
    }

    // Navio 3 - Diagonal principal (4 posições)
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][i] = 3;
    }

    // Navio 4 - Diagonal secundária (3 posições)
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][9 - i] = 3;
    }

    // Exibição do tabuleiro completo
    printf("Tabuleiro 10x10:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
