#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração de variáveis
    int i, j, linhas, colunas, menor, maior, diagonal_principal, diagonal_secundaria, coluna;
    
    // Inicialização de variáveis
    menor = 0;
    maior = 0;
    
    // Entrada do número de linhas e colunas da matriz
    scanf("%d %d", &linhas, &colunas);
    
    // Declaração da matriz
    int valor[linhas][colunas];
    
    // Preenchimento da matriz e contagem de números menores e maiores que zero
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            scanf("%d", &valor[i][j]);
            if (valor[i][j] < 0) {
                menor++;
            }
            if (valor[i][j] > 0) {
                maior++;
            }
        }
    }
    
    // Impressão da matriz
    printf("\nMatriz formada:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            if (j == colunas - 1) {
                printf("%d", valor[i][j]);
            } else {
                printf("%d ", valor[i][j]);
            }
        }
        printf("\n");
    }
    
    // Verificação e soma das diagonais principal e secundária
    if (linhas == colunas) {
        // Inicialização das variáveis
        diagonal_principal = 0;
        diagonal_secundaria = 0;
        coluna = colunas - 1;
        
        // Soma dos elementos da diagonal secundária
        for (i = 0; i < linhas; i++) {
            diagonal_secundaria += valor[i][coluna];
            coluna--;
        }
        
        // Soma dos elementos da diagonal principal
        for (i = 0; i < linhas; i++) {
            diagonal_principal += valor[i][i];
        }
        
        // Impressão dos valores das diagonais principal e secundária
        printf("A diagonal principal e secundaria tem valor(es) %d e %d respectivamente.", diagonal_principal, diagonal_secundaria);
    } else {
        printf("A diagonal principal e secundaria nao pode ser obtida.");
    }
    
    // Impressão do número de elementos menor e maior que zero na matriz
    printf("\nA matriz possui %d numero(s) menor(es) que zero.\nA matriz possui %d numero(s) maior(es) que zero.", menor, maior);
    
    return 0;
}