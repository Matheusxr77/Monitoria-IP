#include <stdlib.h>
#include <stdio.h>

int main() {
    // Declaração de variáveis
    char cobaia;
    int i, repet, qnt, total;
    int coelho = 0, rato = 0, sapo = 0;

    // Solicita ao usuário o número de repetições
    scanf("%d", &repet);

    // Loop para processar cada conjunto de dados
    for (i = 0; i < repet; i++) {
        scanf("%d %c", &qnt, &cobaia);
        
        // Contabiliza a quantidade de cada tipo de cobaia
        if (cobaia == 'C') {
            coelho += qnt;
        } else if (cobaia == 'R') {
            rato += qnt;
        } else if (cobaia == 'S') {
            sapo += qnt;
        }
    }

    // Calcula o total de cobaias
    total = rato + sapo + coelho;

    // Imprime as estatísticas
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelho);
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n", sapo);
    printf("Percentual de coelhos: %.2f %%\n", (coelho * 100.00) / total);
    printf("Percentual de ratos: %.2f %%\n", (rato * 100.00) / total);
    printf("Percentual de sapos: %.2f %%\n", (sapo * 100.00) / total);

    return 0;
}