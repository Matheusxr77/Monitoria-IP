#include <stdio.h>

// Função recursiva para calcular o Máximo Divisor Comum (MDC)
int mdc (int entrada1, int entrada2) {
    if (entrada2 == 0) {
        // Se a segunda entrada for zero, o MDC é o primeiro número
        return entrada1;
    } else {
        // Chamada recursiva com os valores trocados
        return mdc(entrada2, entrada1 % entrada2);
    }
}

int main() {
    // Declaração de variáveis
    int entrada1, entrada2, resultado;
    
    // Entrada dos dois números
    scanf("%d\n%d", &entrada1, &entrada2);
    
    // Chamada da função para calcular o MDC e armazenar o resultado
    resultado = mdc(entrada1, entrada2);
    
    // Impressão do resultado
    printf("%d", resultado);
    
    return 0;
}