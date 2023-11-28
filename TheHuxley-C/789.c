#include <stdio.h>

// Função que verifica se a matriz de Sudoku é válida
int sudoku (int matriz[9][9]) {
    // Declaração de variáveis
    int i, j, x, y;

    // Verifica cada linha e coluna
    for (i = 0; i < 9; i++) {
        // Declaração das matrizes do sudoku
        int linha[9] = {0};
        int coluna[9] = {0};
        
        // Verificação das linhas e colunas
        for (j = 0; j < 9; j++) {
            // Verifica se o número na linha já foi utilizado
            if (linha[matriz[i][j] - 1] == 1) {
                // Há repetição na linha
                return 0;
            }
            linha[matriz[i][j] - 1] = 1;

            // Verifica se o número na coluna já foi utilizado
            if (coluna[matriz[j][i] - 1] == 1) {
                // Há repetição na coluna
                return 0;
            }
            coluna[matriz[j][i] - 1] = 1;
        }
    }

    // Verifica cada bloco 3x3
    for (i = 0; i < 9; i += 3) {
        for (j = 0; j < 9; j += 3) {
            // Declaração da partição
            int parte[9] = {0};

            // Verifica se o número na parte do bloco 3x3 já foi utilizado
            for (x = 0; x < 3; x++) {
                for (y = 0; y < 3; y++) {
                    if (parte[matriz[i + x][j + y] - 1] == 1) {
                        // Há repetição no bloco 3x3
                        return 0;
                    }
                    parte[matriz[i + x][j + y] - 1] = 1;
                }
            }
        }
    }

    // Matriz de Sudoku válida
    return 1;
}

int main() {
    // Declaração de variáveis
    int i, j, n, contador;

    // Coleta do número de matrizes
    scanf("%d", &n);

    // Loop para cada instância de Sudoku
    for (contador = 1; contador <= n; contador++) {
        // Declaração da variável da matriz do sudoku
        int matriz[9][9];

        // Preenche a matriz de Sudoku
        for (i = 0; i < 9; i++) {
            for (j = 0; j < 9; j++) {
                scanf("%d", &matriz[i][j]);
            }
        }

        // Imprime o número da instância
        printf("Instancia %d\n", contador);

        // Verifica se a matriz de Sudoku é válida e imprime "SIM" ou "NAO"
        if (sudoku(matriz)) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }

        printf("\n");
    }

    return 0;
}