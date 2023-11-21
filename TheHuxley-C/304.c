#include <stdio.h>

int main() {
    // Declaração de variáveis
    int valor, notas, i;
    int cedulas[7] = {100, 50, 20, 10, 5, 2, 1};
    
    // Leitura do valor
    scanf("%d", &valor);
    
    // Imprime o valor fornecido
    printf("%d\n", valor);
    
    // Loop para calcular a quantidade mínima de notas de cada valor
    for (i = 0; i < 7; i++) {
        // Calcula a quantidade de notas
        notas = valor / cedulas[i];
        
        // Atualiza o valor restante
        valor %= cedulas[i];

        // Imprime o resultado
        printf("%d nota(s) de R$ %d,00\n", notas, cedulas[i]);
    }

    return 0;
}