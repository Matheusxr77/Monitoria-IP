#include <stdio.h>

int main() {
    // Declaração de variáveis
    char bairro;
    int renda, consumo, desconto, conta;

    // Inicialização do desconto
    desconto = 0;

    // Leitura do bairro, renda e consumo fornecidos pelo usuário
    scanf("%c\n%d\n%d", &bairro, &renda, &consumo);

    // Verificação de condições para garantir dados válidos
    if (bairro != 'S' && bairro != 'I' && bairro != 'T') {
        printf("Bairro invalido.");
        // Retorna 1 indicando um erro
        return 1;
    } else if (renda < 0 || consumo < 0) {
        printf("Renda e consumo nao podem ser negativos.");
        // Retorna 1 indicando um erro
        return 1;
    }

    // Cálculo do desconto com base no bairro e na renda
    if (bairro == 'S') {
        if (renda >= 50 && renda < 500) {
            desconto = 50;
        } else if (renda >= 500 && renda <= 1000) {
            desconto = 25;
        }
    } else if (bairro == 'I') {
        if (renda >= 240 && renda < 1000) {
            desconto = 240;
        } else if (renda >= 1000 && renda <= 5000) {
            desconto = 120;
        }
    } else if (bairro == 'T') {
        if (renda >= 5000 && renda < 10000) {
            desconto = 720;
        } else if (renda >= 10000 && renda <= 20000) {
            desconto = 360;
        }
    }

    // Cálculo da conta com desconto
    conta = consumo - desconto;

    // Impressão do resultado
    printf("%d", conta);

    return 0;
}