#include <stdio.h>

int main() {
    // Declaração de variáveis
    int i, j, contador, menor, soma, delta;
    double media;
    int matriz[3][3];
    
    // Inicialização de variáveis
    contador = 0;
    media = 0;
    soma = 0;

    // Preenchimento da matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Inicialização com o valor na posição [0][0] da matriz (pode não ser o menor)
    menor = matriz[0][0];

    // Cálculo da média dos números positivos e identificação do menor número
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] > 0) {
                media += matriz[i][j];
                contador++;
            }
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }

    // Cálculo da média
    media = media / contador;

    // Verificação se o menor número é par ou ímpar
    if (menor % 2 == 0) {
        // Se o menor número for par, delta é 1
        delta = 1;
    } else {
        // Se o menor número for ímpar, delta é 0
        delta = 0;
    }
    
    // Cálculo da soma dos elementos que não estão na diagonal principal
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i != j) {
                soma += matriz[i][j];
            }
        }
    }

    // Impressão dos resultados
    printf("%.2lf %d %d %d", media, menor, delta, soma);
    
    return 0;
}