#include <stdio.h>

int main() {
    // Declaração de variáveis para armazenar os valores I e J
    int I, J;

    // Loop for para imprimir pares de valores (I, J)
    for (I = 1, J = 60; I < 15, J >= 0; I += 3, J -= 5) {
        // Imprime os valores de I e J
        printf("I=%d J=%d\n", I, J);
    }

    return 0;
}