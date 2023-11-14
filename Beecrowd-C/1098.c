#include <stdio.h>

int main() {
    // Declaração de variáveis para armazenar os valores I e J como float, e A e B como int
    float I, J;
    int A, B;

    // Loop for externo para incrementar I de 0.2 em 0.2, começando de 0.0 até 2.0
    for (I = 0.0; I < 2.1; I += 0.2) {
        // Loop for interno para incrementar J de 1.0 até 3.0
        for (J = 1.0; J <= 3.0; J++) {
            // Verifica se I está no intervalo (0, 1) ou (1, 2)
            if (I > 0 && I < 1 || I > 1 && I < 2) {
                // Se verdadeiro, imprime os valores de I e I+J como float
                printf("I=%.1lf J=%.1lf\n", I, I + J);
            } else {
                // Se falso, converte os valores para inteiros e imprime
                A = (int)I;
                B = (int)(I + J);
                printf("I=%d J=%d\n", A, B);
            }
        }
    }

    return 0;
}