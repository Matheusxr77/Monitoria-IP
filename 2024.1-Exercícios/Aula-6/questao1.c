/* Escreva um programa que conta o número de palavras em uma string fornecida pelo usuário. Palavras são separadas por espaços em branco. */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, count = 0;

    printf("Digite uma string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            count++;
        }
    }

    printf("Número de palavras na string: %d\n", count + 1);

    return 0;
}