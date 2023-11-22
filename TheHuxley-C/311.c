#include <stdio.h>

int main() {
    // Declaração de variáveis
    int a, b, c, d;

    // Leitura dos quatro valores fornecidos pelo usuário
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Verificação das condições
    if (b > c && d > a && c + d > a + b && c > 0 && d > 0 && a % 2 == 0) {
        printf("Valores aceitos");
    } else {
        printf("Valores nao aceitos");
    }

    return 0;
}