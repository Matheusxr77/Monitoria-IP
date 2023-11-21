#include <stdio.h>

// Define o valor de EOF (End Of File) como -1
#define EOF (-1)

int main() {
    // Declaração de variáveis
    int a, n1 = 0, n2 = 0;

    // Loop principal: continua enquanto não atingir o fim do arquivo (EOF)
    while (scanf("%d", &a) != EOF) {
        // Verifica se 'a' é diferente de zero
        if (a != 0) {
            // Calcula n1 como metade de a + 1
            n1 = (a + 1) / 2;
            // Calcula n2 como metade de a - 1
            n2 = (a - 1) / 2;

            // Imprime a diferença dos quadrados de n1 e n2
            printf("%d - %d\n", n1 * n1, n2 * n2);
        } else {
            // Se 'a' for igual a zero, não faz nada.
        }
    }

    return 0;
}