#include <stdio.h>
#include <math.h>

int main() {
    // Declaração de variáveis para armazenar o índice (i), número (x), posição e maior número
    int i, x, posicao;
    int maior = 0;

    // Loop for para ler 100 números inteiros
    for (i = 1; i <= 100 && i > 0; i++) {
        // Solicita ao usuário que insira um número inteiro
        scanf("%d", &x);

        // Verifica se o número atual é maior que o maior número registrado até agora
        if (maior < x) {
            maior = x;      // Atualiza o maior número
            posicao = i;    // Atualiza a posição do maior número
        }
    }

    // Imprime o maior número e sua posição
    printf("%d\n", maior);
    printf("%d\n", posicao);

    return 0;
}