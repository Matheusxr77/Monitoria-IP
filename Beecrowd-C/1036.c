#include <stdio.h>
#include <math.h>

int main() {
    // Declaração de variáveis
    double A, B, C;
    double delta, R1, R2;

    // Leitura dos valores de entrada
    scanf("%lf %lf %lf", &A, &B, &C);

    // Cálculo do delta
    delta = B * B - 4 * A * C;

    // Verifica se é possível calcular as raízes
    if (A == 0 || delta < 0) {
        printf("Impossivel calcular\n");
    } else {
        // Calculo das raízes
        R1 = (-B + sqrt(delta)) / (2 * A);
        R2 = (-B - sqrt(delta)) / (2 * A);

        // Impressão das raízes com 5 casas decimais
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }

    return 0;
}