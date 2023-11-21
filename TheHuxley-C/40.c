#include <stdio.h>

int main() {
    // Declaração de variáveis
    float valor;

    // Leitura do valor fornecido pelo usuário
    scanf("%f", &valor);

    // Aumento do valor em 10%
    valor = 1.1 * valor;

    // Impressão do novo valor com duas casas decimais
    printf("%.2f", valor);

    return 0;
}