#include <stdio.h>

// Função recursiva para calcular o Máximo Divisor Comum (MDC)
int mdc (int entrada1, int entrada2) {
    // Caso base: se o segundo número é zero, o MDC é o primeiro número
    if (entrada2 == 0) {
        return entrada1;
    } else {
        // Chamada recursiva da função com os argumentos trocados
        mdc(entrada2, entrada1 % entrada2);
    }
}

int main() {
    // Declaração de variáveis locais
    int i, casos, entrada1, entrada2, resultado;
    
    // Leitura do número de casos
    scanf("%d", &casos);
    
    // Loop para iterar sobre os casos
    for (i = 1; i <= casos; i++) {
        // Leitura dos pares de números
        scanf("%d %d", &entrada1, &entrada2);
        
        // Chamada da função mdc para calcular o MDC
        resultado = mdc(entrada1, entrada2);
        
        // Impressão do resultado para o caso atual
        printf("\nMDC(%d,%d) = %d", entrada1, entrada2, resultado);
    }
    
    return 0;
}