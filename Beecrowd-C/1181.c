#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis
    int i, L, j, r;
    char T;
    double vetor[12][12];
    double soma;

    // Inicializando a soma com zero
    soma = 0;

    // Lê a linha (L) e o caractere (T)
    scanf("%d", &L);
    scanf(" %c", &T);

    // Loop para ler a matriz 12x12
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &vetor[i][j]);
        }
    }

    // Loop para calcular a soma dos elementos da linha L
    for (r = 0; r < 12; r++) {
        soma = soma + vetor[L][r];
    }

    // Verifica se o caractere é 'M' para calcular a média, caso contrário, imprime a soma
    if (T == 'M') {
        printf("%.1lf\n", soma / 12);
    } else {
        printf("%.1lf\n", soma);
    }

    return 0;
}