#include <stdio.h>

int main() {
    // Declaração de variáveis
    int A, B, C, aux;

    // Inicializando da variável auxiliar
    aux = 0;

    // Leitura dos valores A, B e C
    scanf("%d %d %d", &A, &B, &C);

    // Verificação das condições e impressão das mensagens correspondentes
    switch (1) {
        // Caso ao quadrado
        case 1:
            if (A * A == C) {
                printf("Quadrado Vitoris\n");
                aux = 1;
            }

        // Caso do resto da divisão
        case 2:
            if (A % B == C) {
                if (!aux) {
                    printf("Resto Vitoris\n");
                    aux = 1;
                } else {
                    printf("tambem Resto\n");
                }
            }
        
        // Caso da multiplicação
        case 3:
            if (A * B == C) {
                if (!aux) {
                    printf("Multi Vitoris\n");
                    aux = 1;
                } else {
                    printf("tambem Multi\n");
                }
            }

        // Caso da divisão
        case 4:
            if (B != 0 && A / B == C) {
                if (!aux) {
                    printf("Div Vitoris\n");
                    aux = 1;
                } else {
                    printf("tambem Div\n");
                }
            }

        // Caso da soma
        case 5:
            if (A + B == C) {
                if (!aux) {
                    printf("Soma Vitoris\n");
                    aux = 1;
                } else {
                    printf("tambem Soma\n");
                }
            }

        // Caso da subtração
        case 6:
            if (A - B == C) {
                if (!aux) {
                    printf("Sub Vitoris\n");
                    aux = 1;
                } else {
                    printf("tambem Sub\n");
                }
            }
        
        // Caso de nenhuma operação encontrada
        default:
            if (!aux) {
                printf("Impossivel vitores\n");
            }
    }

    return 0;
}