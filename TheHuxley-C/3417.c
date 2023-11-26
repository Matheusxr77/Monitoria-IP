#include <stdio.h>

int main() {
    // Declaração de variáveis
    int n, i, contador, proximo;

    // Loop principal
    while (1) {
        // Leitura do número 'n'
        scanf("%d", &n);

        // Verifica se 'n' é igual a -1, se sim, sai do loop
        if (n == -1) {
            break;
        }

        // Inicialização do contador
        contador = 0;
        
        // Loop para ler a sequência de 10 números
        for (i = 0; i < 10; i++) {
            // Leitura do próximo número na sequência
            scanf("%d", &proximo);

            // Verifica se o número lido é igual a 'n', se sim, incrementa o contador
            if (proximo == n) {
                contador++;
            }
        }

        // Imprime o resultado
        printf("%d appeared %d times\n", n, contador);
    }

    return 0;
}