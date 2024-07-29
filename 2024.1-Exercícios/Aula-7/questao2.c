/* Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a media geral. */

#include <stdio.h>

int main() {
    int n = 15;
    float v[n], media = 0;

    for (int i = 0; i < n; i++) {
        scanf("%f", &v[i]);
        media += v[i];
    }

    media /= n;

    printf("Media: %.2f\n", media);

    return 0;
}