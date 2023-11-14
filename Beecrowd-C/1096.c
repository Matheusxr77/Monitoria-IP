#include <stdio.h>

int main() {
    // Declaração de variáveis para armazenar os valores I e J
    int I, J;

    // Loop for externo para incrementar I de 2 em 2, começando de 1 até 9
    for (I = 1; I <= 9; I = I + 2) {
        // Loop for interno para decrementar J de 1 em 1, começando de 7 até 5
        for (J = 7; J >= 5; J--) {
            // Imprime os valores de I e J
            printf("I=%d J=%d\n", I, J);
        }
    }

    return 0;
}