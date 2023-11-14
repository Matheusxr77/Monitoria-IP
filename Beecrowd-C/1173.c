#include <stdio.h>

int main() {
    // Declaração de variáveis: vetorN (vetor de inteiros), i (índice do vetor), x (valor inserido pelo usuário)
    int vetorN[10];
    int i, x;

    // Leitura do valor inicial x
    scanf("%d", &x);

    // Loop for para preencher o vetor e imprimir os valores
    for (i = 0; i < 10; i++) {
        // Atribuição do valor atual de x ao elemento i do vetor
        vetorN[i] = x;

        // Impressão do valor atual do vetor
        printf("N[%d] = %d\n", i, x);

        // Atualização de x para o próximo valor (dobro do valor anterior)
        x = x * 2;
    }

    return 0;
}