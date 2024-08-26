/* Escreva uma função em C chamada substituir_elemento que recebe uma matriz de inteiros, suas dimensões e dois valores inteiros (um antigo e um novo) como parâmetros, e substitui todas as ocorrências do valor antigo pelo valor novo na matriz. */

#include <stdio.h>

void substituir_elemento(int matriz[][100], int n, int m, int antigo, int novo) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matriz[i][j] == antigo) {
                matriz[i][j] = novo;
            }
        }
    }
}

int main() {
    int n, m;
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &n);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &m);

    int matriz[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Digite o elemento da linha %d e coluna %d da matriz: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    int antigo, novo;
    printf("Digite o valor antigo: ");
    scanf("%d", &antigo);
    printf("Digite o valor novo: ");
    scanf("%d", &novo);

    substituir_elemento(matriz, n, m, antigo, novo);

    printf("A matriz após a substituição é:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}