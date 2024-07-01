/* Questão 4°| Escreva um programa que solicita ao usuário que insira o valor inicial de um investimento, a taxa de juros anual e o número de anos de investimento. Em seguida, o programa deve calcular e exibir o valor final do investimento após o período especificado, considerando juros compostos. */

#include <stdio.h>
#include <math.h>

int main() {
    float valor_inicial, taxa_juros, valor_final;
    int anos;

    printf("Digite o valor inicial do investimento: ");
    scanf("%f", &valor_inicial);
    printf("Digite a taxa de juros anual: ");
    scanf("%f", &taxa_juros);
    printf("Digite o número de anos de investimento: ");
    scanf("%d", &anos);

    valor_final = valor_inicial * pow(1 + taxa_juros / 100, anos);

    printf("O valor final do investimento após %d anos é: %.2f\n", anos, valor_final);

    return 0;
}