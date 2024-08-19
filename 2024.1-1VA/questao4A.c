/* Faça um programa que leia uma cadeia de caracteres do teclado e a imprima de trás para a frente. */

#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis
    char str[100];
    int i, tamanho;

    // Leitura da cadeia de caracteres do teclado
    printf("Digite uma cadeia de caracteres: ");
    fgets(str, sizeof(str), stdin);

    // Remove o caractere de nova linha, se presente
    str[strcspn(str, "\n")] = '\0';

    // Calcula o comprimento da cadeia de caracteres
    tamanho = strlen(str); 

    // Impressão da cadeia de caracteres de trás para a frente
    printf("Cadeia de caracteres invertida: ");

    // Imprimindo os caracteres
    for (i = tamanho - 1; i >= 0; i--) {
        putchar(str[i]);
    }

    printf("\n");

    return 0;
}