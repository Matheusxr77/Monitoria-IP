#include <stdio.h>

int main() {
    // Declaração de variáveis
    int total, voto;
    int soma = 0;

    // Loop principal para processar entradas enquanto houver uma leitura bem-sucedida
    while (scanf("%d", &total) == 1) {
        soma = 0;

        // Loop para ler os votos e contar aqueles que são "1"
        for (int i = 0; i < total; i = i + 1) {
            scanf("%d", &voto);
            if (voto == 1) {
                soma += 1;
            }
        }

        // Verifica se a acusação é arquivada ou se ocorre impeachment com base nos votos
        if (soma < (double)total * (2.0 / 3.0)) {
            printf("acusacao arquivada\n");
        } else {
            printf("impeachment\n");
        }
    }

    return 0;
}