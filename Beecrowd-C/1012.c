#include <stdio.h>
#include <math.h>

int main() {
    // Declaração de variáveis
    double A, B, C, areaTriangulo, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo;

    // Declaração da constante PI
    const double pi = 3.14159; 
    
    // Leitura dos valores de entrada
    scanf("%lf %lf %lf", &A, &B, &C);
    
    // Cálculo das áreas
    areaTriangulo = (A * C) / 2.0;
    areaCirculo = pi * pow(C, 2);
    areaTrapezio = ((A + B) * C) / 2.0;
    areaQuadrado = pow(B, 2);
    areaRetangulo = A * B;
    
    // Impressão das saídas formatadas
    printf("TRIANGULO: %.3lf\n", areaTriangulo);
    printf("CIRCULO: %.3lf\n", areaCirculo);
    printf("TRAPEZIO: %.3lf\n", areaTrapezio);
    printf("QUADRADO: %.3lf\n", areaQuadrado);
    printf("RETANGULO: %.3lf\n", areaRetangulo);
    
    return 0;
}