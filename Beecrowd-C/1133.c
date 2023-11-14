#include <stdio.h>
#include <math.h>

int main() {
    // Declaração de variáveis para armazenar os valores X, Y e o iterador r
    int X, Y, r;

    // Leitura dos valores X e Y
    scanf("%d", &X);
    scanf("%d", &Y);

    // Verifica se X é maior que Y
    if (X > Y) {
        // Loop for para iterar sobre os valores entre Y+1 e X-1
        for (r = Y + 1; r < X; r++) {
            // Verifica se o resto da divisão por 5 é igual a 2 ou 3
            if (r % 5 == 2 || r % 5 == 3) {
                // Se verdadeiro, imprime o valor
                printf("%d\n", r);
            }
        }
    } else {
        // Loop for para iterar sobre os valores entre X+1 e Y-1
        for (r = X + 1; r < Y; r++) {
            // Verifica se o resto da divisão por 5 é igual a 2 ou 3
            if (r % 5 == 2 || r % 5 == 3) {
                // Se verdadeiro, imprime o valor
                printf("%d\n", r);
            }
        }
    }

    return 0;
}