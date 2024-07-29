/* Faça um programa que receba do usuário dois vetores representando conjuntos A e B. Crie um novo vetor denominado C calculando C = A ∩ B. Mostre na tela os dados do vetor C. */

#include <stdio.h>

int main() {
    int tamanhoA, tamanhoB;

    printf("Digite o tamanho do conjunto A: ");
    scanf("%d", &tamanhoA);

    printf("Digite o tamanho do conjunto B: ");
    scanf("%d", &tamanhoB);

    int conjuntoA[tamanhoA], conjuntoB[tamanhoB], conjuntoC[tamanhoA + tamanhoB];

    printf("Digite os elementos do conjunto A:\n");
    for (int i = 0; i < tamanhoA; i++) {
        scanf("%d", &conjuntoA[i]);
    }

    printf("Digite os elementos do conjunto B:\n");
    for (int i = 0; i < tamanhoB; i++) {
        scanf("%d", &conjuntoB[i]);
    }

    int tamanhoC = 0;
    for (int i = 0; i < tamanhoA; i++) {
        for (int j = 0; j < tamanhoB; j++) {
            if (conjuntoA[i] == conjuntoB[j]) {
                conjuntoC[tamanhoC++] = conjuntoA[i];
            }
        }
    }

    printf("Os elementos do conjunto C (A ∩ B) são:\n");
    for (int i = 0; i < tamanhoC; i++) {
        printf("%d ", conjuntoC[i]);
    }

    printf("\n");

    return 0;
}