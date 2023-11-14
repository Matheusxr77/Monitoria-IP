#include <stdio.h>
#include <math.h>

int main() {
    // Declaração de variáveis para armazenar os valores X e Y
    double X, Y;

    // Solicita ao usuário que insira os valores X e Y
    scanf("%lf%lf", &X, &Y);

    // Verifica em qual quadrante ou eixo os valores estão localizados
    if (X > 0.0 && Y > 0.0) {
        printf("Q1\n");
    } 
    else if (X > 0.0 && Y < 0.0) {
        printf("Q4\n");
    }
    else if (X < 0.0 && Y > 0.0) {
        printf("Q2\n");
    }
    else if (X < 0.0 && Y < 0.0) {
        printf("Q3\n");
    }
    else if (X == 0.0 && Y == 0.0) {
        printf("Origem\n");
    }
    else if (X == 0.0) {
        printf("Eixo Y\n");
    }
    else if (Y == 0.0) {
        printf("Eixo X\n");
    }
    
    return 0;
}