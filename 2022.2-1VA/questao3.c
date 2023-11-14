/* Faça uma função que receba um vetor A de dez posições. Em seguida, compacte o vetor, retirando os valores nulos e 
negativos. Armazene esse resultado no vetor B. Retorne o vetor B.
Obs.: A função deverá retornar um vetor inteiro e não imprimi-lo na tela. */

#include <stdio.h>

// função de retirar números negativos e nulos
void retirarNegativos (int vetorA[], int tamanhoA, int vetorB[], int* tamanhoB) {
    int aux = 0;
    int i;

    // preencher o vetor B 
    for (i = 0; i < tamanhoA; i++) {
        if (vetorA[i] > 0) {
            vetorB[aux] = vetorA[i];
            aux++;
        }
    }

    // atualizar o tamanho do vetor B
    *tamanhoB = aux;
}

int main() {
    int i; 
    int tamanhoA = 10;
    int vetorA[10];

    // solicitar ao usuário que preencha o vetor A
    printf("Digite %d elementos para o vetor A:\n", tamanhoA);
    for (i = 0; i < tamanhoA; i++) {
        scanf("%d", &vetorA[i]);
    }

    int vetorB[tamanhoA];
    int tamanhoB;

    retirarNegativos(vetorA, tamanhoA, vetorB, &tamanhoB);

    // imprimir o vetor B
    printf("Vetor B: ");
    for (i = 0; i < tamanhoB; i++) {
        printf("%d ", vetorB[i]);
    }
    printf("\n");

    return 0;
}