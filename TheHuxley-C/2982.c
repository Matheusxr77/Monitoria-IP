#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração de variáveis
    int valor_centavos;
    int reais[] = {100, 50, 20, 10, 5, 2};
    int centavos[] = {100, 50, 25, 10, 5, 1};
    float valor_reais;
    int i;

    // Leitura do valor em reais
    scanf("%f", &valor_reais);

    // Converte o valor para centavos
    valor_centavos = valor_reais * 100;

    // Loop para notas em reais
    for (i = 0; i < 6; i++) {
        // Calcula a quantidade de notas necessárias
        int quantidade_notas = valor_centavos / (reais[i] * 100);
        if (quantidade_notas >= 1) {
            // Atualiza o valor restante e imprime a quantidade de notas
            valor_centavos -= quantidade_notas * reais[i] * 100;
            printf("%d nota(s) de R$ %d.00\n", quantidade_notas, reais[i]);
        }
    }

    // Loop para moedas
    for (i = 0; i < 6; i++) {
        // Calcula a quantidade de moedas necessárias
        int quantidade_moedas = valor_centavos / centavos[i];
        if (quantidade_moedas >= 1) {
            // Atualiza o valor restante e imprime a quantidade de moedas
            valor_centavos -= quantidade_moedas * centavos[i];
            // Imprime o valor da moeda em formato de float
            printf("%d moeda(s) de R$ %.2f\n", quantidade_moedas, centavos[i] / 100.0);
        }
    }

    return 0;
}