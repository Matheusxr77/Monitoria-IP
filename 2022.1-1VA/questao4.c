/*Escreva uma função em C que recebe como entrada dois vetores de inteiros, cada um com tamanho n, e retorna um 
terceiro vetor que contém os elementos da intersecção dos dois primeiros vetores.
Dica: Implemente a função auxiliar ‘pertence’ que checa se um determinado elemento pertence a um vetor. */

#include <stdio.h>
#include <stdlib.h>

// Função que verifica se um elemento pertence a um vetor
int pertence (int *vetor, int tamanho, int elemento) {
    int i;

    for (i = 0; i < tamanho; i++) {
        if (vetor[i] == elemento) {
            return 1; // Retorna 1 se o elemento pertence ao vetor
        }
    }

    return 0; // Retorna 0 se o elemento não pertence ao vetor
}

// Função que encontra a interseção entre dois vetores
int *intersecao (int *vetor1, int *vetor2, int tamanho, int *tamanho_intersecao) {
    int i, j;
    int *vetor_intersecao = NULL;

    *tamanho_intersecao = 0;

    // Itera sobre os elementos do vetor1
    for (i = 0; i < tamanho; i++) {
        // Verifica se o elemento do vetor1 está presente no vetor2
        if (pertence(vetor2, tamanho, vetor1[i])) {
            (*tamanho_intersecao)++;

            // Realoca memória para o vetor de interseção e adiciona o elemento
            vetor_intersecao = (int *)realloc(vetor_intersecao, (*tamanho_intersecao) * sizeof(int));
            vetor_intersecao[(*tamanho_intersecao) - 1] = vetor1[i];
        }
    }

    return vetor_intersecao; // Retorna o vetor de interseção
}

int main() {
    int i, tamanho, tamanho_intersecao;
    int *vetor1, *vetor2, *vetor_intersecao;

    // Solicita ao usuário o tamanho dos vetores
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);

    // Aloca memória para os vetores
    vetor1 = (int *)malloc(tamanho * sizeof(int));
    vetor2 = (int *)malloc(tamanho * sizeof(int));

    // Solicita ao usuário os elementos do primeiro vetor
    printf("Digite os elementos do primeiro vetor:\n");
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &vetor1[i]);
    }

    // Solicita ao usuário os elementos do segundo vetor
    printf("Digite os elementos do segundo vetor:\n");
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &vetor2[i]);
    }

    // Calcula a interseção dos vetores e armazena no vetor_intersecao
    vetor_intersecao = intersecao(vetor1, vetor2, tamanho, &tamanho_intersecao);

    // Exibe os elementos da interseção
    printf("A intersecao dos vetores e:\n");
    for (i = 0; i < tamanho_intersecao; i++) {
        printf("%d ", vetor_intersecao[i]);
    }

    // Libera a memória alocada
    free(vetor1);
    free(vetor2);
    free(vetor_intersecao);

    return 0;
}