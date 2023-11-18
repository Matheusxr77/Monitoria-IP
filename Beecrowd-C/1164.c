#include<stdio.h>

int main() {
    // Declaração de variáveis
    int valor, qnt, i, j, soma;

    // Lê a quantidade de números a serem verificados
    scanf("%d", &qnt);

    // Loop para processar cada número
    for (i = 0; i < qnt; i++) {
        soma = 0;

        // Lê o número a ser verificado
        scanf("%d", &valor);

        // Loop para encontrar os divisores próprios do número
        for (j = 1; j < valor; j++) {
            if (valor % j == 0) {
                // Se j é divisor de valor, soma j à variável soma
                soma += j;
            }
        }

        // Verifica se o número é perfeito
        if (soma == valor) {
            printf("%d eh perfeito\n", valor);
        } else {
            printf("%d nao eh perfeito\n", valor);
        }
    }

    return 0;
}