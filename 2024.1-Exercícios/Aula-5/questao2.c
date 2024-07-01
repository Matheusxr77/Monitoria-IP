/* Sendo H= 1 + 1/2 + 1/3 + 1/4 + ... + 1/N, Faça um programa que calcule o valor de H com N termos. */

#include <stdio.h>

int main() {
    int n;
    float h = 0;

    printf("Digite o número de termos: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        h += 1.0 / i;
    }

    printf("O valor de H com %d termos é: %.2f\n", n, h);

    return 0;
}