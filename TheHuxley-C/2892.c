#include <stdio.h>

int main() {
    // Declaração de variáveis
    int i, j;
    float N;
    
    // Entrada do valor N que representa a ordem da matriz
    scanf("%f", &N);
    
    // Imprime uma mensagem pedindo ao usuário que digite a ordem N da matriz
    printf("Digite a ordem N da matriz:\n");
     
    // Loop para preencher e imprimir a matriz
    for (i = 1; i <= N; i++) {
        for (j = 1; j <= N; j++) {
            // Condição para a diagonal principal (elementos iguais)
            if (i == j) {
                printf("%-7d", 1);
            } 
            // Condição para elementos acima da diagonal principal
            else if (j > i) {
                printf("%-7d", 10);
            } 
            // Condição para elementos abaixo da diagonal principal
            else {
                printf("%-7d", -10);
            }
        }
        
        printf("\n");
    }
    
    return 0;
}