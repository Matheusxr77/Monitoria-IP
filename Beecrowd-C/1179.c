#include <stdio.h>

int main() {
    // Declaração de variáveis: vetores vetorPar e vetorImpar, i (índice do loop principal), j (índice dos loops internos), v (valor lido), contPar (contador de elementos em vetorPar), contImpar (contador de elementos em vetorImpar)
    int vetorPar[5];
    int vetorImpar[5];
    int i, j, v, contPar, contImpar;

    // Inicialização dos contadores
    contPar = 0;
    contImpar = 0;

    // Loop principal para ler e distribuir os valores
    for (i = 0; i < 15; i++) {
        // Leitura de um valor inteiro
        scanf("%d", &v);

        // Verificação se o valor é par
        if (v % 2 == 0) {
            // Atribuição do valor a vetorPar e incremento do contador
            vetorPar[contPar] = v;
            contPar++;

            // Impressão de vetorPar quando atinge o limite (5 elementos)
            if (contPar == 5) {
                for (j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, vetorPar[j]);
                }
                // Reinicialização do contador
                contPar = 0;
            }
        } else {
            // Atribuição do valor a vetorImpar e incremento do contador
            vetorImpar[contImpar] = v;
            contImpar++;

            // Impressão de vetorImpar quando atinge o limite (5 elementos)
            if (contImpar == 5) {
                for (j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, vetorImpar[j]);
                }
                // Reinicialização do contador
                contImpar = 0;
            }
        }
    }

    // Impressão dos valores restantes em vetorImpar
    for (j = 0; j < contImpar; j++) {
        printf("impar[%d] = %d\n", j, vetorImpar[j]);
    }

    // Impressão dos valores restantes em vetorPar
    for (j = 0; j < contPar; j++) {
        printf("par[%d] = %d\n", j, vetorPar[j]);
    }

    return 0;
}