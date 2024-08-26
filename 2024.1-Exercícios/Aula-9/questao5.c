/* Escreva uma função em C chamada verificar_sequencia_crescente que recebe um vetor e seu tamanho e verifica se a sequência está ordenada de maneira crescente. */

#include <stdio.h>

int verificar_sequencia_crescente(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        if (vetor[i] > vetor[i + 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];
    for (int i = 0; i < n; i++) {
        printf("Digite o %do elemento do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    if (verificar_sequencia_crescente(vetor, n)) {
        printf("A sequência está ordenada de maneira crescente.\n");
    } else {
        printf("A sequência não está ordenada de maneira crescente.\n");
    }

    return 0;
}