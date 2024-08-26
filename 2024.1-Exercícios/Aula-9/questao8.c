/* Escreva uma função em C chamada concatenar_strings que recebe duas strings como parâmetros e retorna uma nova string resultante da concatenação das duas, alocada dinamicamente. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concatenar_strings(char *string1, char *string2) {
    char *nova_string = (char *) malloc(strlen(string1) + strlen(string2) + 1);
    if (nova_string == NULL) {
        printf("Memória insuficiente.\n");
        exit(1);
    }

    strcpy(nova_string, string1);
    strcat(nova_string, string2);

    return nova_string;
}

int main() {
    char string1[100], string2[100];
    printf("Digite a primeira string: ");
    fgets(string1, 100, stdin);
    string1[strcspn(string1, "\n")] = '\0';

    printf("Digite a segunda string: ");
    fgets(string2, 100, stdin);
    string2[strcspn(string2, "\n")] = '\0';

    char *nova_string = concatenar_strings(string1, string2);

    printf("A string resultante da concatenação é: %s\n", nova_string);

    free(nova_string);

    return 0;
}