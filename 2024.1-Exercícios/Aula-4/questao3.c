/* Escreva um programa em C que solicita ao usuário para inserir as coordenadas de um ponto (x, y) e, em seguida, imprime uma mensagem indicando em qual quadrante do plano cartesiano o ponto se encontra. */

#include <stdio.h>

int main() {
    float x, y;

    printf("Digite as coordenadas (x, y) do ponto: ");
    scanf("%f %f", &x, &y);

    if (x > 0 && y > 0) {
        printf("O ponto está no primeiro quadrante.\n");
    } else if (x < 0 && y > 0) {
        printf("O ponto está no segundo quadrante.\n");
    } else if (x < 0 && y < 0) {
        printf("O ponto está no terceiro quadrante.\n");
    } else if (x > 0 && y < 0) {
        printf("O ponto está no quarto quadrante.\n");
    } else if (x == 0 && y != 0) {
        printf("O ponto está sobre o eixo y.\n");
    } else if (x != 0 && y == 0) {
        printf("O ponto está sobre o eixo x.\n");
    } else {
        printf("O ponto está na origem.\n");
    }

    return 0;
}