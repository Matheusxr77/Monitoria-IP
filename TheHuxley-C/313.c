#include <stdio.h>

int main() {
    // Declaração de variáveis
    int i, j, linha, matriz[12][12];
    double soma, media;
    char operacao;

    // Inicialização de variável
    soma = 0;
    
    // Entrada da linha e operação desejada ('M' para média ou 'S' para soma)
    scanf("%d\n %c", &linha, &operacao);  // Utilizando um espaço antes de %c para consumir possíveis caracteres de quebra de linha
    
    // Preenchimento da matriz
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            // Coleta dos números integrantes da matriz
            scanf("%d", &matriz[i][j]);
        }
    }
    
    // Cálculo da soma dos elementos da linha escolhida
    for (j = 0; j < 12; j++) {
        soma += matriz[linha][j];
    }
    
    // Impressão do resultado (média ou soma) com uma casa decimal
    if (operacao == 'M') {
        media = soma / 12;
        printf("%.1lf", media);
    } else {
        printf("%.1lf", soma);
    }

    return 0;
}