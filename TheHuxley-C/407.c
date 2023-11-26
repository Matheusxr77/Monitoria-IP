#include <stdio.h>

// Função para calcular o comprimento da sequência de Collatz para um número n
int sequencia(int n) {
    // Inicializa a quantidade como 1, pois o próprio número já faz parte da sequência
    int quantidade = 1;

    // Loop enquanto n não atingir 1 (final da sequência de Collatz)
    while (n != 1) {
        // Verifica se n é par
        if (n % 2 == 0) {
            // Se n é par, divide por 2
            n = n / 2;
        } else {
            // Se n é ímpar, aplica a fórmula 3n + 1
            n = 3 * n + 1;
        }
        // Incrementa a quantidade, pois mais um número foi adicionado à sequência
        quantidade++;
    }

    // Retorna o comprimento total da sequência de Collatz para o número original
    return quantidade;
}

int main() {
    // Declaração de variáveis
    int i, j, tamanho, n, maximo, numero, aux, inicio, fim;

    // Loop enquanto houver entrada válida (dois números inteiros)
    while (scanf("%d %d", &i, &j) == 2) {
        inicio = i;
        fim = j;

        // Troca os valores se i for maior que j
        if (i > j) {
            aux = i;
            i = j;
            j = aux;
        }

        // Inicialização de variável
        maximo = 0;

        // Loop para calcular o comprimento da sequência para cada número no intervalo [i, j]
        for (n = i; n <= j; n++) {
            numero = sequencia(n);
            if (numero > maximo) {
                maximo = numero;
            }
        }

        // Impressão do resultado para o intervalo [inicio, fim] e o comprimento máximo da sequência
        printf("%d %d %d\n", inicio, fim, maximo);
    }

    return 0;
}