#include <stdio.h>

int main() {
    // Declaração de variáveis
    int minutos, total;

    // Leitura do número de minutos fornecido pelo usuário
    scanf("%d", &minutos);

    // Cálculo do número total de períodos de tempo
    total = 480 / minutos;

    // Impressão do resultado
    printf("%d", total);

    return 0;
}