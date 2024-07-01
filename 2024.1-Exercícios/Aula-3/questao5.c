/* Questão 5°| Escreva um programa que solicita ao usuário que insira as coordenadas (x, y) de dois pontos no plano cartesiano. Em seguida, o programa deve calcular e exibir a distância entre esses dois pontos utilizando a fórmula da distância entre dois pontos no plano cartesiano. */

#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distancia;

    printf("Digite as coordenadas (x, y) do primeiro ponto: ");
    scanf("%f %f", &x1, &y1);
    printf("Digite as coordenadas (x, y) do segundo ponto: ");
    scanf("%f %f", &x2, &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distância entre os pontos é: %.2f\n", distancia);

    return 0;
}