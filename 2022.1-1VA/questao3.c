/* Escreva um programa que solicite ao usuário uma string e determine 
se ela é palíndromo, ou seja, se pode ser lida da esquerda para a direita e da direita para esquerda. */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, tamanho;
    int palindromo = 1;

    // Solicita ao usuário uma string
    printf("Digite uma string: ");
    gets(str);

    tamanho = strlen(str);

    // Verifica se a string é palíndromo
    for (i = 0, j = tamanho - 1; i < tamanho / 2; i++, j--) {
        if (str[i] != str[j]) {
            palindromo = 0;
            break;
        }
    }

    // Exibe o resultado
    if (palindromo) {
        printf("A string digitada e um palindromo!\n");
    } else {
        printf("A string digitada nao e um palindromo!\n");
    }

    return 0;
}