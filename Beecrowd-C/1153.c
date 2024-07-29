#include <stdio.h>

int main() {
    // Declaração de variáveis
    int n, i;
    long long fatorial = 1; // Usamos long long para suportar números grandes

    // Leitura do valor de N
    scanf("%d", &n);

    // Cálculo do fatorial
    for (i = 1; i <=n; i++) {
        fatorial *= i;
    }

    // Saída do resultado
    printf("%lld\n", fatorial);

    return 0;
}