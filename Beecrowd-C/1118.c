#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração de variáveis
    int resposta = 0;
    float nota1, nota2;

    // Loop principal que continua até que o usuário escolha sair (resposta == 2)
    while (resposta != 2) {
        // Solicita ao usuário a inserção da primeira nota
        scanf("%f", &nota1);

        // Validação da primeira nota para garantir que esteja no intervalo de 0 a 10
        while (nota1 < 0 || nota1 > 10) {
            printf("nota invalida\n");
            scanf("%f", &nota1);
        }

        // Solicita ao usuário a inserção da segunda nota
        scanf("%f", &nota2);

        // Validação da segunda nota para garantir que esteja no intervalo de 0 a 10
        while (nota2 < 0 || nota2 > 10) {
            printf("nota invalida\n");
            scanf("%f", &nota2);
        }

        // Calcula a média das duas notas e imprime o resultado
        printf("media = %.2f\n", (nota1 + nota2) / 2);

        // Loop para obter a resposta do usuário (1-sim, 2-não) e validar a entrada
        do {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &resposta);
        } while (resposta < 1 || resposta > 2);
    }

    return 0;
}