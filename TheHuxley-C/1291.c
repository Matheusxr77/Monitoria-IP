#include <stdio.h>

int main() {
    // Declaração de variáveis
    int i, j, maior, delta;
    double media;
    int matriz[3][3];

    // Inicialização de variáveis
    media = 0;

    // Preenchimento da matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Inicialização da variável 'maior' com o valor na posição [0][0] da matriz
    maior = matriz[0][0];

    // Cálculo da média e identificação do maior valor na matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            media += matriz[i][j];
            
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    // Cálculo da média
    media = media / 9;

    // Verificação se o maior valor é positivo, negativo ou zero
    if (maior > 0) {
        // Se o maior valor for positivo, delta é 1
        delta = 1;
    } else if (maior < 0) {
        // Se o maior valor for negativo, delta é -1
        delta = -1;
    } else {
        // Se o maior valor for zero, delta é 0
        delta = 0;
    }

    // Impressão dos resultados, incluindo a soma dos elementos da diagonal principal
    printf("%.2lf %d %d %d", media, maior, delta, matriz[0][0] + matriz[1][1] + matriz[2][2]);
    
    return 0;
}