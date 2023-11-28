#include <stdio.h>

int main() {
    // Declaração de variáveis
    int i;
    int vetorA[10], vetorB[10], vetorC[10];

    // Preenchimento do vetorA
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetorA[i]);  
    }

    // Preenchimento do vetorB
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetorB[i]);  
    }

    // Soma dos elementos correspondentes e armazenamento no vetorC
    for (i = 0; i < 10; i++) {
        vetorC[i] = vetorA[i] + vetorB[i];
    }

    // Impressão dos elementos do vetorC
    for (i = 0; i < 10; i++) {
        printf("%d ", vetorC[i]);
    }

    return 0;
}