#include <stdio.h>

int main() {
    // Declaração de variáveis: vetorN (vetor de doubles), x (valor inserido pelo usuário), i (índice do vetor)
    double vetorN[100];
    double x;
    int i;

    // Leitura do valor inicial x inserido pelo usuário
    scanf("%lf", &x);

    // Loop for para preencher o vetor
    for (i = 0; i < 100; i++) {
        // Atribuição do valor atual de x ao elemento i do vetor
        vetorN[i] = x;

        // Atualização de x para o próximo valor (x dividido por 2)
        x = x / 2;
    }

    // Loop for para imprimir os valores do vetor
    for (i = 0; i < 100; i++) {
        // Impressão do valor atual do vetor com quatro casas decimais
        printf("N[%d] = %.4lf\n", i, vetorN[i]);
    }

    return 0;
}