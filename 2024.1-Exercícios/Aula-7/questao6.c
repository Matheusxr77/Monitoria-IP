/* Leia uma matriz 5 x 5. Leia tambem um valor X. O programa devera fazer uma busca desse valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de “nao encontrado”. */

#include <stdio.h>

int main() {
    int m[5][5], x, found = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    scanf("%d", &x);

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (m[i][j] == x) {
                printf("Valor encontrado na linha %d e coluna %d\n", i, j);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("Valor nao encontrado\n");
    }

    return 0;
}