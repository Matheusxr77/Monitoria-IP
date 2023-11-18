#include <stdio.h>

int main() {
    // Declaração de variáveis
    int n[20], t, i, j;

    // Loop para ler 20 números e armazená-los no array
    for (i = 0; i < 20; i++) {
        scanf("%d", &n[i]);
    }

    // Loop para inverter a ordem dos elementos usando dois índices, i e j
    for (i = 0, j = 19; i < 10; i++, j--) {
        // Troca os elementos nas posições i e j
        t = n[i];
        n[i] = n[j];
        n[j] = t;
    }

    // Loop para imprimir o array após a inversão
    for (i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}