/* Escreva um programa que verifica se uma string fornecida pelo usuário é um palíndromo. 
Um palíndromo é uma palavra ou frase que é lida da mesma forma de trás para frente. Por exemplo, "radar" é um palíndromo. */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len, palindromo = 1;

    printf("Digite uma string: ");
    gets(str);

    len = strlen(str);

    for (i = 0, j = len - 1; i < len / 2; i++, j--) {
        if (str[i] != str[j]) {
            palindromo = 0;
            break;
        }
    }

    if (palindromo) {
        printf("A string é um palíndromo.\n");
    } else {
        printf("A string não é um palíndromo.\n");
    }

    return 0;
}