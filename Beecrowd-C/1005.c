#include <stdio.h>

int main() {
    // Declaração de variáveis 
    double nota1, nota2, media;

    // Solicita ao usuário que insira os valores da primeira e da segunda nota
    scanf("%lf", &nota1);
    scanf("%lf", &nota2);

    // Calcula a média das notas
    media = ((nota1 * 3.5) + (nota2 * 7.5)) / 11;

    // Calcula a média ponderada usando a fórmula fornecida e imprime o resultado com precisão de 5 casas decimais
    printf("MEDIA = %.5lf\n", media);

    return 0;
}