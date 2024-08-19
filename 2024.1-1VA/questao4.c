/* Você é um engenheiro responsável por analisar um conjunto de pontos em um plano cartesiano 2D. Para isso, você deve desenvolver um programa em linguagem C que realize as seguintes operações em um vetor de 10 coordenadas de pontos (x, y):
Calcule a distância média cos pontos em relação à origem (0,0).
Encontre a maior e a menor distância de um ponto em relação à origem.
Informe quantos pontos estão a uma distância entre k_{1} em relação à origem, onde k_{1} k_{2}
k_{1} números reais fornecidos pelo usuário. */

#include <stdio.h>
#include <math.h>

int main() {
    float pontos[10][2];
    float distancia[10];
    float media, maior, menor;
    int i, j, k;
    int cont = 0;
    float k1, k2;

    for (i = 0; i < 10; i++) {
        printf("Digite o ponto %d (x, y): ", i+1);
        scanf("%f %f", &pontos[i][0], &pontos[i][1]);
    }

    for (i = 0; i < 10; i++) {
        distancia[i] = sqrt(pontos[i][0]*pontos[i][0] + pontos[i][1]*pontos[i][1]);
    }

    media = 0;
    maior = distancia[0];
    menor = distancia[0];
    for (i = 0; i < 10; i++) {
        media += distancia[i];
        if (distancia[i] > maior) {
            maior = distancia[i];
        }
        if (distancia[i] < menor) {
            menor = distancia[i];
        }
    }
    media /= 10;

    printf("Distância média: %.2f\n", media);
    printf("Maior distância: %.2f\n", maior);
    printf("Menor distância: %.2f\n", menor);

    printf("Digite k1 e k2: ");
    scanf("%f %f", &k1, &k2);

    for (i = 0; i < 10; i++) {
        if (distancia[i] >= k1 && distancia[i] <= k2) {
            cont++;
        }
    }

    printf("Pontos entre %.2f e %.2f: %d\n", k1, k2, cont);

    return 0;
}