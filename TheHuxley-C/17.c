#include <stdio.h>

int main() {
    // Declaração de variáveis
    int entrada, antecessor, sucessor;

    // Leitura do número fornecido pelo usuário
    scanf("%d", &entrada);

    // Cálculo do antecessor e sucessor
    antecessor = entrada - 1;
    sucessor = entrada + 1;

    // Impressão do antecessor e sucessor
    printf("%d %d", antecessor, sucessor);

    return 0;
}