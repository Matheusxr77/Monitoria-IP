#include <stdio.h>
#include <math.h>

int main() {
    // Declaração de variáveis
    int exponencial, aproximacao, fatorial, i, j;
    double resultado, base;

    // Inicialização de variáveis
    resultado = 1;
    base = 1;

    // Leitura dos valores de entrada
    scanf("%d %d", &exponencial, &aproximacao);

    // Loop para calcular a aproximação da função exponencial usando série de Taylor
    for (i = 1; i < aproximacao; i++) {
        fatorial = 1;

        // Calcula o fatorial de i
        for (j = 2; j <= i; j++) {
            fatorial *= j;
        }

        // Atualiza o resultado usando a série de Taylor
        resultado = pow(exponencial, i) / fatorial + resultado;
    }

    // Calcula o valor real da função exponencial
    base = pow(2.71828, exponencial);

    // Imprime o resultado da aproximação com três casas decimais
    printf("%.3lf\n", resultado);

    // Compara a diferença entre a aproximação e o valor real
    if (base - resultado > 0.1 * base) {
        printf("A aproximacao foi pouco precisa");
    } else if (base - resultado > 0.01 * base) {
        printf("A aproximacao foi muito precisa");
    } else if (base - resultado <= 0.01 * base) {
        printf("Os valores sao praticamente iguais");
    }

    return 0;
}