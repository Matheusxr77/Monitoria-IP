#include <stdio.h>

int main() {
    // Declaração de variáveis para armazenar o número de casos (n), índice (i), valores x, y e contador (cont)
    int n, i, x, y, cont;

    // Leitura do número de casos
    scanf("%d", &n);

    // Loop for para processar cada caso
    for (i = 0; i < n; i++) {
        // Leitura dos valores x e y
        scanf("%d %d", &x, &y);

        // Inicialização do contador
        cont = 0;

        // Verifica e troca os valores de x e y se necessário
        if (x > y) {
            int temp = x;
            x = y;
            y = temp;
        }

        // Loop for para calcular a soma dos números ímpares no intervalo (x, y)
        for (int j = x + 1; j < y; j++) {
            if (j % 2 != 0) {
                cont += j;
            }
        }

        // Imprime a soma calculada
        printf("%d\n", cont);
    }

    return 0;
}