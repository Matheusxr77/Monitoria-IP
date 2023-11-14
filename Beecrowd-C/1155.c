#include <stdio.h>

int main() {
    // Declaração de variáveis: i (índice), n (número de termos), somador (variável para acumular a soma)
    int i;
    int n = 100;
    float somador;

    // Inicialização do somador
    somador = 0;

    // Loop for para calcular a soma dos inversos dos primeiros 100 números inteiros
    for (i = 1; i <= n; i++) {
        somador = somador + (1.0 / i);
    }

    // Impressão do resultado formatado
    printf("%.2f\n", somador);

    return 0;
}