#include <stdio.h>

int main() {
    // Declaração de variáveis
    int P, E, j, i;

    // Entrada do número de princesas (P) e eleitores (E)
    scanf("%d\n%d", &P, &E);

    // Declaração da matriz para armazenar os votos e do vetor para contar os votos de cada princesa
    int matriz[P][E];
    int vetor[P];

    // Loop para receber os votos dos eleitores para cada princesa
    for (j = 0; j < E; j++) {
        for (i = 0; i < P; i++) {
            // Recebendo do usuário os votos para cada princesa
            scanf("%d", &matriz[i][j]);
        }
    }

    // Inicializa o vetor de contagem de votos para cada princesa
    for (i = 0; i < P; i++) {
        vetor[i] = 0;
    }
    
    // Loop para contar os votos de cada princesa
    for (i = 0; i < P; i++) {
        for (j = 0; j < E; j++) {
            if (matriz[i][j] == 1) {
                // Incrementa o número de votos para a princesa i
                vetor[i] += 1;
            }
        }
    }

    // Imprime os resultados, mostrando o número de votos para cada princesa
    for (i = 0; i < P; i++) {
        printf("Princesa %d: %d voto(s)\n", i + 1, vetor[i]);
    }

    return 0;
}