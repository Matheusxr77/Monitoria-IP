#include <stdio.h>

int main() {
    // Declaração de variáveis
    float a; 
    int i, contador;
    
    // Inicialização do contador
    contador = 0;

    // Loop for para ler cinco valores
    for (i = 1; i <= 5; i++) {
        printf("\nDigite um valor:", i);
        
        // Leitura do valor
        scanf("%f", &a);

        // Verificação se o valor é negativo
        if (a < 0) {
            contador++;
        }
    }

    // Impressão do resultado
    printf("\nForam digitados %d numeros negativos", contador);

    return 0;
}