/* Escreva uma função em C chamada verificar_matriz_identidade que recebe uma matriz de inteiros e suas dimensões como parâmetros e retorna verdadeiro se a matriz for uma matriz identidade e falso caso contrário. */

#include <stdio.h>

int verificar_matriz_identidade(int matriz[][100], int n) {
    for (int i = 0; i < n; i++) {
        if (matriz[i][i] != 1) {
            return 0;
        }
        for (int j = 0; j < n; j++) {
            if (i != j && matriz[i][j] != 0) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Digite a dimensão da matriz: ");
    scanf("%d", &n);

    int matriz[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Digite o elemento da linha %d e coluna %d da matriz: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    if (verificar_matriz_identidade(matriz, n)) {
        printf("A matriz é uma matriz identidade.\n");
    } else {
        printf("A matriz não é uma matriz identidade.\n");
    }

    return 0;
}