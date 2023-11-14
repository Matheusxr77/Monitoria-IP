#include <stdio.h>
#include <math.h>

int main() {
    // Declaração de variáveis para armazenar o valor X e os números ímpares
    int X, impares;

    // Solicita ao usuário que insira o valor X
    scanf("%d", &X);

    // Loop for para imprimir números ímpares de 1 até X
    for (impares = 1; impares <= X; impares++) {
        // Verifica se o número é ímpar usando a condição impares % 2 == 1
        if (impares % 2 == 1) {
            // Se for ímpar, imprime o número
            printf("%d\n", impares);
        }
    }

    return 0;
}