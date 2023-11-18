#include <stdio.h>

int main() {
    // Declaração de variáveis
    int tamvetor, i, menorvalor, posicao = 0;

    // Lê o tamanho do vetor
    scanf("%d", &tamvetor);

    // Declara um vetor de tamanho tamvetor
    int num[tamvetor];

    // Loop para ler os elementos do vetor
    for (i = 0; i < tamvetor; i++) {
        scanf("%d", &num[i]);
    }

    // Inicializa o menor valor com o primeiro elemento do vetor
    menorvalor = num[0];

    // Loop para encontrar o menor valor e sua posição no vetor
    for (i = 0; i < tamvetor; i++) {
        if (num[i] < menorvalor) {
            menorvalor = num[i];
            posicao = i;
        }
    }

    // Imprime o menor valor e sua posição no vetor
    printf("Menor valor: %d\nPosicao: %d\n", menorvalor, posicao);

    return 0;
}