#include <stdio.h>
#include <math.h>

// Declaração de variáveis globais
int valor, i;

int main() {
    // Solicita ao usuário que insira um valor
    scanf("%d", &valor);

    // Loop for para iterar de 0 até o valor fornecido
    for (i = 0; i <= valor; i++) {
        // Verifica se o número é ímpar
        if (i % 2 != 0) {
            // Imprime o número ímpar
            printf("%d\n", i);
        }
    }

    return 0;
}