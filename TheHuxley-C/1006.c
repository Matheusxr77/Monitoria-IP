#include <stdio.h>
#include <math.h>

int main() {
    // Declaração de variáveis
    int entrada, a, b;

    // Loop principal
    while (1) {
        // Leitura da entrada
        scanf("%d", &entrada);

        // Verificação se a entrada é zero, se sim, sai do loop
        if (entrada == 0) {
            break;
        }

        // Cálculo de 'a' e 'b'
        a = (entrada + 1) / 2;  
        b = a - 1;

        // Impressão da diferença entre os quadrados de 'a' e 'b'
        printf("%d - %d\n", a * a, b * b);
    }

    return 0;
}