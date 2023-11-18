#include <stdio.h>

int main() {
    // Declaração de variáveis
    int valor, i, j, n, primo = 0;

    // Lê o número de casos a serem verificados
    scanf("%d", &n);

    // Loop externo para processar cada caso
    for (i = 1; i <= n; i++) {
        // Lê o número a ser verificado
        scanf("%d", &valor);

        // Inicializa a variável primo
        primo = 0;

        // Loop interno para verificar se o número é primo
        for (j = 2; j < valor; j++) {
            if (valor % j == 0) {
                primo = 1;
                break; // Se encontrou um divisor, não é primo, então pode sair do loop
            }
        }

        // Verifica se o número é primo e imprime o resultado
        if (primo == 1) {
            printf("%d nao eh primo\n", valor);
        } else {
            printf("%d eh primo\n", valor);
        }
    }

    return 0;
}