#include <stdio.h>

int main() {
    // Declaração de variáveis
    int dias, quilometros;
    float valor, total;

    // Leitura dos valores de entrada (número de dias e quilômetros)
    scanf("%d\n%d", &dias, &quilometros);

    // Verifica se a quantidade de quilômetros excede 100 vezes o número de dias
    if (quilometros > (100 * dias)) {
        // Caso exceda, calcula o valor total considerando uma tarifa fixa para os dias e uma tarifa por quilômetro adicional
        quilometros = quilometros - (100 * dias);
        total = 90 * dias + (12 * quilometros);
    } else {
        // Caso não exceda, calcula o valor total apenas com a tarifa fixa para os dias
        total = 90 * dias;
    }

    // Imprime o valor total com duas casas decimais
    printf("%.2f", total);

    return 0;
}