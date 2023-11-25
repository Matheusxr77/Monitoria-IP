#include <stdio.h>

int main() {
    // Declaração de variáveis
    int hamburguer, cheeseburger, fritas, refrigerante, milkshake;
    double conta;

    // Leitura dos valores dos itens do cardápio
    scanf("%d\n%d\n%d\n%d\n%d", &hamburguer, &cheeseburger, &fritas, &refrigerante, &milkshake);

    // Cálculo do valor total da conta
    conta = (hamburguer * 3) + (cheeseburger * 2.5) + (fritas * 2.5) + (refrigerante * 1) + (milkshake * 3);

    // Impressão do valor da conta
    printf("conta final: %.1lf\n", conta);
    
    return 0;
}