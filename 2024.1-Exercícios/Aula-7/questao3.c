/* Tentando descobrir se um dado era viciado, um dono de cassino o lançou n vezes. Dados os n resultados dos lançamentos, determinar o número de ocorrências de cada face. */

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int v[6] = {0};

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        v[x - 1]++;
    }

    for (int i = 0; i < 6; i++) {
        printf("Face %d: %d\n", i + 1, v[i]);
    }

    return 0;
}