#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis
    int i, j;
    char tipo;
    double vetor[12][12], soma;

    // Inicializando a soma com zero
    soma = 0;

    // Lê o caractere indicando o tipo de operação (soma ou média)
    scanf(" %c", &tipo);

    // Loop aninhado para ler a matriz 12x12
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &vetor[i][j]);
        }
    }

    // Loop para calcular a soma dos elementos abaixo da diagonal principal
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            if (j < i) {
                soma = soma + vetor[i][j];
            }
        }
    }

    // Verifica se o caractere é 'M' para calcular a média, caso contrário, imprime a soma
    if (tipo == 'M') {
        printf("%.1lf\n", soma / 66);
    } else {
        printf("%.1lf\n", soma);
    }

    return 0;
}