#include <stdio.h>

int main() {
    // Declaração de variáveis
    double parcela, renda, gasto, limite;

    // Leitura da renda e do gasto fornecidos pelo usuário
    scanf("%lf\n%lf", &renda, &gasto);

    // Cálculo do limite para gastos (30% da renda)
    limite = renda * 0.3;

    // Verificação se o gasto é menor que o limite
    if (gasto < limite) {
        parcela = limite - gasto;
    } else {
        parcela = 0;
    }

    // Impressão do valor da parcela disponível para gastos
    printf("%.2lf", parcela);

    return 0;
}