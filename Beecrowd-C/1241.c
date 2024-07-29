#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis
    int n, tamanhoA, tamanhoB, i, encaixa;
    char A[1001], B[1001];

    // Leitura do número de casos de teste
    scanf("%d", &n);
    getchar(); // Capturar o newline após o número N

    while (n--) {
        // Ler os números A e B
        scanf("%s %s", A, B);

        // Obter o tamanho de A e B
        tamanhoA = strlen(A);
        tamanhoB = strlen(B);

        // Verificar se B encaixa nos últimos dígitos de A
        if (tamanhoB > tamanhoA) {
            printf("nao encaixa\n");
        } else {
            // Inicializar a variável encaixa
            encaixa = 1;
            // Comparar os últimos tamanhoB dígitos de A com B
            for (i = 0; i < tamanhoB; i++) {
                // Se algum dígito for diferente, B não encaixa
                if (A[tamanhoA - tamanhoB + i] != B[i]) {
                    encaixa = 0;
                    break;
                }
            }

            // Imprimir o resultado
            if (encaixa) {
                printf("encaixa\n");
            } else {
                printf("nao encaixa\n");
            }
        }
    }

    return 0;
}