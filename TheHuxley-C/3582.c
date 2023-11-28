#include <stdio.h>
#include <math.h>

int main() {
    // Declaração de variáveis
    double entrada1, entrada2, entrada3, norma;
   
    // Entrada das três coordenadas do vetor
    scanf("%lf\n%lf\n%lf", &entrada1, &entrada2, &entrada3);
   
    // Cálculo da norma euclidiana usando a função sqrt e pow
    norma = sqrt(pow(entrada1, 2) + pow(entrada2, 2) + pow(entrada3, 2));
   
    // Impressão do resultado com 4 casas decimais
    printf("%.4lf", norma);

    return 0;
}