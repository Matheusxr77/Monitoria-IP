#include <stdio.h>

int main() {
    // Declaração de variáveis
    int n, i, j, r;
    int qnt[2001]; // Array para armazenar a contagem de cada número

    // Lê o número total de elementos no conjunto
    scanf("%d", &n);

    // Inicializa o array de contagem para cada número
    for (i = 0; i < 2001; i++) {
        qnt[i] = 0;
    }

    // Loop para ler os números e incrementar a contagem
    for (j = 0; j < n; j++) {
        int num;
        scanf("%d", &num);
        qnt[num] += 1; // Incrementa a contagem para o número lido
    }

    // Loop para imprimir a contagem para cada número distinto
    for (r = 0; r < 2001; r++) {
        if (qnt[r] > 0) {
            printf("%d aparece %d vez(es)\n", r, qnt[r]);
        }
    }

    return 0;
}