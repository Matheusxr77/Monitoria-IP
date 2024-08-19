/* Faça um programa que receba do usuário um vetor X com 10 posições. Em seguida deverão ser impressos o maior e o menor elemento desse 
vetor. */

#include <stdio.h>

int main() {
    // Declaração de variáveis
    int X[10];
    int i, maior, menor;

    // Leitura dos elementos do vetor
    printf("Digite 10 números:\n");

    // Armazenando elementos no vetor
    for (i = 0; i < 10; i++) {
        scanf("%d", &X[i]);
    }

    // Inicializa o maior e o menor elemento com o primeiro valor do vetor
    maior = menor = X[0];

    // Loop para encontrar o maior e o menor elemento do vetor
    for (i = 1; i < 10; i++) {
        if (X[i] > maior) {
            maior = X[i];
        }
        if (X[i] < menor) {
            menor = X[i];
        }
    }

    // Impressão do maior e do menor elemento
    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);

    return 0;
}