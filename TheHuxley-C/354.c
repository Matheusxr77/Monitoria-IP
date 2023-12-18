#include <stdio.h>

// Função que imprime números pares até o valor passado como parâmetro
int pares (int numero) {
    // Declaração de variável
    int i;

    // Loop que itera de 0 até o número fornecido
    for (i = 0; i <= numero; i++) {
        // Verifica se o número é par
        if (i % 2 == 0) {
            // Imprime o número par
            printf("\n%d", i);
        }
    }

    // Retorna o número fornecido como parâmetro
    return numero;
}

int main() {
    // Declaração de variável
    int entrada;

    // Solicita ao usuário um valor inteiro
    scanf("%d", &entrada);

    // Chama a função pares, passando o valor lido como parâmetro
    pares(entrada);

    return 0;
}