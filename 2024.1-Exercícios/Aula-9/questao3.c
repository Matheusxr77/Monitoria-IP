/* Escreva uma função em C chamada remover_espacos que recebe uma string como parâmetro e remove todos os espaços em branco da string. */

#include <stdio.h>
#include <string.h>

void remover_espacos(char *string) {
    int j = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] != ' ') {
            string[j++] = string[i];
        }
    }
    string[j] = '\0';
}

int main() {
    char string[100];
    printf("Digite uma string: ");
    fgets(string, 100, stdin);
    string[strcspn(string, "\n")] = '\0';

    remover_espacos(string);

    printf("A string sem espaços é: %s\n", string);

    return 0;
}