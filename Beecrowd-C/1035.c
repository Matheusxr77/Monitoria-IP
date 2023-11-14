#include <stdio.h>
#include <math.h>

int main() {
    // Declaração de variáveis para armazenar os valores A, B, C, D
    int A, B, C, D;

    // Solicita ao usuário que insira os valores A, B, C, D
    scanf("%d%d%d%d", &A, &B, &C, &D);

    // Verifica as condições para aceitar os valores
    if (B > C && D > A && C + D > A + B && C > 0 && D > 0 && A % 2 == 0) {
        // Se as condições são atendidas, imprime "Valores aceitos"
        printf("Valores aceitos\n");
    } else {
        // Se as condições não são atendidas, imprime "Valores nao aceitos"
        printf("Valores nao aceitos\n");
    }

    return 0;
}