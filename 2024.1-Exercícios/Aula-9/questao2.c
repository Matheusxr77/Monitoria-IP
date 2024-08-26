/* Escreva uma função em C chamada calcular_soma_elementos que recebe um vetor de inteiros e seu tamanho como parâmetros e retorna a soma de todos os elementos do vetor. */

#include <stdio.h>

int calcular_soma_elementos(int vetor[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
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

    printf("A soma dos elementos do vetor é %d.\n", calcular_soma_elementos(vetor, n));

    return 0;
}