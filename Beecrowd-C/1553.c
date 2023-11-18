#include <stdio.h>

int main() {
    // Declaração de variáveis
    int N, K, P, i;
    int pergadc = 0;
    int num[101] = {0}; // Inicializa um array para contar a frequência de cada pergunta

    // Lê o número de perguntas e o valor mínimo de frequência
    scanf("%d%d", &N, &K);

    // Loop principal, continua até N e K serem ambos 0
    while (N != 0 && K != 0) {
        // Inicializa o array de frequência para cada pergunta
        for (i = 0; i < 101; i = i + 1) {
            num[i] = 0;
        }

        // Inicializa o contador de perguntas frequentes
        pergadc = 0; 

        // Loop para contar a frequência de cada pergunta
        for (i = 0; i < N; i = i + 1) {
            scanf("%d", &P);
            num[P] += 1;
        }

        // Loop para contar o número de perguntas frequentes
        for (i = 0; i < 101; i = i + 1) {
            if (num[i] >= K) {
                pergadc = pergadc + 1;
            }
        }

        // Imprime o número de perguntas frequentes
        printf("%d\n", pergadc);

        // Lê o próximo par de valores N e K
        scanf("%d%d", &N, &K);
    }

    return 0;
}