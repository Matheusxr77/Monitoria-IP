/* Escreva um programa em C que solicita ao usuário uma frase e converte todas as letras maiúsculas em minúsculas e todas as letras minúsculas em maiúsculas. 
O programa deve imprimir a frase resultante. */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;

    printf("Digite uma string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }

    printf("String resultante: %s\n", str);

    return 0;
}