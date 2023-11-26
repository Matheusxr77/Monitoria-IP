#include <stdio.h>
#include <math.h>

int main() { 
    // Declaração de variáveis
    int x, a, b, resultado;

    // Leitura dos valores de a e b
    scanf("%d\n %d", &a, &b);

    // Loop para calcular e imprimir o resultado para cada x no intervalo [a, b]
    for (x = a; x <= b; x++) {
        resultado = pow(x, 2) - (4 * x) + 5;
        printf("%d\n", resultado);
    }
    
    return 0;
}