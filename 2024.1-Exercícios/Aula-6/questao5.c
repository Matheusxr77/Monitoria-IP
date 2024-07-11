/* Faca um programa que encontre o conjunto de 5 dígitos consecutivos (ex.: 34567) em uma sequencia de N dígidos fornecida pelo usuário (ex.:. 548454545121548415125121515545487487345678999540220021). */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len, count = 0;

    printf("Digite uma string: ");
    gets(str);

    len = strlen(str);

    for (i = 0; i < len - 4; i++) {
        if (str[i] == str[i + 1] - 1 && str[i] == str[i + 2] - 2 && str[i] == str[i + 3] - 3 && str[i] == str[i + 4] - 4) {
            count++;
        }
    }

    printf("Número de conjuntos de 5 dígitos consecutivos: %d\n", count);

    return 0;
}