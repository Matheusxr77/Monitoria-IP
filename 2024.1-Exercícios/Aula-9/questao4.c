/* Escreva uma função em C chamada converter_maiusculas que recebe uma string como parâmetro e converte todos os caracteres para maiúsculas. */

#include <stdio.h>
#include <string.h>

void converter_maiusculas(char *string) {
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] -= 32;
        }
    }
}

int main() {
    char string[100];
    printf("Digite uma string: ");
    fgets(string, 100, stdin);
    string[strcspn(string, "\n")] = '\0';

    converter_maiusculas(string);

    printf("A string em maiúsculas é: %s\n", string);

    return 0;
}