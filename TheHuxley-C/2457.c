#include <stdio.h>

int main() {
    // Declaração de variáveis
    int n, i, j;

    // Leitura do valor de n
    scanf("%d", &n);
    
    // Verificação se n está dentro do intervalo desejado
    if (n >= 1 && n <= 40) {
        // Loop externo para controlar as linhas
        for (i = 1; i <= n; i++) {
            // Loop interno para imprimir os números em cada linha
            for (j = 1; j <= i - 1; j++) {
                printf("%d ", j);
            }
            
            // Imprime o número i na mesma linha
            printf("%d\n", i);
        }
    }
    
    return 0;
}