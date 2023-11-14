#include <stdio.h>
#include <math.h>

int main() {
    // Declaração de variáveis para armazenar as notas e a média
    double nota1, nota2, media;

    // Leitura da primeira nota
    scanf("%lf", &nota1);

    // Loop para verificar se a nota1 é válida (dentro do intervalo [0, 10])
    while (nota1 < 0 || nota1 > 10) {
        // Se a nota não for válida, exibe a mensagem e solicita novamente
        printf("nota invalida\n");
        scanf("%lf", &nota1);
    }

    // Leitura da segunda nota
    scanf("%lf", &nota2);

    // Loop para verificar se a nota2 é válida (dentro do intervalo [0, 10])
    while (nota2 < 0 || nota2 > 10) {
        // Se a nota não for válida, exibe a mensagem e solicita novamente
        printf("nota invalida\n");
        scanf("%lf", &nota2);
    }

    // Cálculo da média
    media = (nota1 + nota2) / 2;

    // Exibição da média na saída padrão
    printf("media = %.2f\n", media);

    return 0;
}