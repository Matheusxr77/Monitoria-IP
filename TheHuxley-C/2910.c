#include <stdio.h>

int main() {
    // Declaração de variáveis
    int N, X, Y, Z, total;

    // Inicializa a variável
    total = 0;  

    // Leitura dos valores de N, X, Y e Z
    scanf("%d\n%d\n%d\n%d", &N, &X, &Y, &Z);

    // Verifica se é possível atingir ou ultrapassar N com uma combinação dos números
    if ((N - X) >= 0 || (N - Y) >= 0 || (N - Z) >= 0) {
        // Incrementa o total se uma das opções individuais for suficiente
        total++;
    } else if ((N - Y - X) >= 0 || (N - Z - X) >= 0|| (N - Y - Z) >= 0) {
        // Incrementa o total se uma das opções de duas combinações for suficiente
        total++;
    } else if ((N - Y - X - Z) >= 0) {
        // Incrementa o total se a combinação dos três números for suficiente
        total++;
    }

    // Imprime o total de opções
    printf("%d", total);

    return 0;
}