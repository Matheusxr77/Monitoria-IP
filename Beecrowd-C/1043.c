#include <stdio.h>
#include <math.h>

int main() {
    // Declaração de variáveis para armazenar os valores A, B, C, área e perímetro
    double A, B, C, area, perimetro;

    // Solicita ao usuário que insira os valores A, B, C
    scanf("%lf%lf%lf", &A, &B, &C);

    // Verifica se os valores formam um triângulo
    if (A < B + C && B < A + C && C < A + B) {
        // Se formam um triângulo, calcula e imprime o perímetro
        perimetro = A + B + C;
        printf("Perimetro = %.1lf\n", perimetro);
    } else {
        // Se não formam um triângulo, calcula e imprime a área do trapézio
        area = ((A + B) * C) / 2.0;
        printf("Area = %.1lf\n", area);
    }

    return 0;
}