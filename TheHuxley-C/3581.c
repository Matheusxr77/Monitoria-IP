#include <stdio.h>
#include <math.h>

int main() {
    // Declaração de variáveis
    float raio, area, pi;
    pi = 3.14159;

    // Leitura do raio fornecido pelo usuário
    scanf("%f", &raio);

    // Cálculo da área do círculo usando a fórmula A = π * raio^2
    area = pi * pow(raio, 2);

    // Impressão da área com três casas decimais
    printf("%.3f\n", area);

    return 0;
}