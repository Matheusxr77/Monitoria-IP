#include <stdio.h>
#include <math.h>

int main() {

    // Declaração de variáveis
    double x1, x2, y1, y2, distancia;

    // Solicita ao usuário que insira as coordenadas (x1, y1, x2, y2)
    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);

    // Calcula a distância usando a fórmula da distância entre dois pontos no plano
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Imprime o resultado com precisão de 4 casas decimais
    printf("%.4lf\n", distancia);

    return 0;
}
