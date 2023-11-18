#include <stdio.h>

int main() {
    // Declaração de variáveis
    int A, B, C;

    // Solicita ao usuário que insira os valores de A, B e C
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
  
    // Verifica e imprime o maior entre A, B e C usando uma abordagem condicional
    if (A > B && A > C) {
        printf("%d eh o maior\n", A);
    } else if (B > A && B > C) {
        printf("%d eh o maior\n", B);
    } else {
        printf("%d eh o maior\n", C);
    }

    return 0;
}