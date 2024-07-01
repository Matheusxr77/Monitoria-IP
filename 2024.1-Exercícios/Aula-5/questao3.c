/* Escreva um programa que solicita ao usuário um número inteiro não negativo e, em seguida, calcula e exibe o fatorial desse número. */

#include <stdio.h>

int main() {
    int numero, fatorial = 1;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Número inválido. O número deve ser não negativo.\n");
        return 1;
    }

    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }

    printf("O fatorial de %d é: %d\n", numero, fatorial);

    return 0;
}