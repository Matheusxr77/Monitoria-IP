#include <stdio.h>

int main() {
    // Declaração de variáveis
    int numero, valor, i;
    
    // Leitura do número fornecido pelo usuário
    scanf("%d", &numero);

    // Loop para calcular e imprimir a tabuada
    for (i = 1; i < 10; i++) {
        // Calcula o valor da multiplicação
        valor = numero * i;

        // Imprime o resultado
        printf("\n%d X %d = %d", numero, i, valor);
    }

    return 0;
}