/* Escreva um programa que remove todos os espaços em branco de uma string fornecida pelo usuário. */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;

    printf("Digite uma string: ");
    gets(str);

    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("String resultante: %s\n", str);

    return 0;
}