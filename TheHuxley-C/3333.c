#include <stdio.h>

int main() {
    // Declaração de variáveis
    int valor_letra, x = 1, y, c;
    char letra1;

    // Leitura da letra
    scanf("%c", &letra1);

    // Calcula o valor da letra (A=1, B=2, ..., Z=26)
    valor_letra = letra1 - 64;

    // Loop externo para controlar as linhas
    while (x <= valor_letra) {
        y = valor_letra - 1;

        // Loop para imprimir os pontos à esquerda
        while (y >= x) {
            printf(".");
            y--;
        }

        c = 1;

        // Loop para imprimir as letras crescentes
        while (c <= x) {
            printf("%c", c + 64);
            c++;
        }

        c -= 2;

        // Loop para imprimir as letras decrescentes
        while (c >= 1) {
            printf("%c", c + 64);
            c--;
        }

        y = valor_letra - 1;

        // Loop para imprimir os pontos à direita
        while (y >= x) {
            printf(".");
            y--;
        }

        printf("\n"); // Quebra de linha após cada linha da pirâmide
        x++;
    }

    return 0;
}