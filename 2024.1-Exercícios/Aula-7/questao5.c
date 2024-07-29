/* Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui. */

#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j, contador;

    contador = 0;

    printf("Digite os valores da matriz: ");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > 10) {
                contador++;
            }
        }
    }

    printf("A matriz possui %d valores maiores que 10.\n", contador);

    return 0;
}