/* Escreva uma função que recebe um vetor de inteiros, o tamanho do vetor e retorna o resultado da divisão do maior 
pelo menor número contido no vetor.*/

#include <stdio.h>

// Função para calcular a razão entre o maior e o menor elemento do vetor
float maior_pelo_menor (int v[], int tamanho) {
    int i;
    float maior = v[0], menor = v[0];

    // Percorre o vetor para encontrar o maior e o menor elemento
    for (i = 1; i < tamanho; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
        if (v[i] < menor) {
            menor = v[i];
        }
    }

    // Retorna a razão entre o maior e o menor elemento
    return maior / menor;
}

int main() {
    int vetor[100], tamanho, i;
    float resultado;

    // Solicita ao usuário o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    // Solicita ao usuário os elementos do vetor
    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    // Chama a função para calcular a razão entre o maior e o menor elemento
    resultado = maior_pelo_menor(vetor, tamanho);

    // Imprime o resultado
    printf("O resultado da divisão do maior pelo menor elemento do vetor é %.2f", resultado);

    return 0;
}