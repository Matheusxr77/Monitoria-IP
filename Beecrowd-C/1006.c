#include <stdio.h>
#include <math.h>

int main() {
    // Declaração de variáveis
    double A, B, C, media;
    
    // Solicita ao usuário que insira os valores de A, B e C
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    // Calcula a média ponderada usando os pesos dados (2, 3 e 5, respectivamente)
    media = ((A * 2) + (B * 3) + (C * 5)) / 10;

    // Exibe o resultado formatado com uma casa decimal na saída padrão
    printf("MEDIA = %.1lf\n", media);

    return 0;
}