#include <stdio.h>

int main() {
    // Declaração de variáveis: vetorN (vetor de inteiros), i (índice do vetor), x (valor inserido pelo usuário), aux (variável auxiliar)
    int vetorN[1000];
    int i, x, aux;

    // Inicialização da variável aux
    aux = 0;

    // Leitura do valor x inserido pelo usuário
    scanf("%d", &x);
    
    // Loop for para preencher o vetor
    for (i = 0; i < 1000; i++) {
        // Atribuição do valor atual de aux ao elemento i do vetor
        vetorN[i] = aux;

        // Incremento de aux e reinicialização se atingir o valor de x
        aux++;
        if (aux == x) {
            aux = 0;
        }
    }

    // Loop for para imprimir os valores do vetor
    for (i = 0; i < 1000; i++) {
        printf("N[%d] = %d\n", i, vetorN[i]);
    }

    return 0;
}