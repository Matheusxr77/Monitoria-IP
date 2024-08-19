/* Faça um programa para verificar se determinado número inteiro lido é divisível por 3 ou por 5, mas não simultaneamente pelos dois. */

#include <stdio.h>

int main() {
    // Declaração da variável para armazenar o número lido
    int num; 

    // Lê o número inteiro do usuário
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    // Verifica se o número é divisível por 3 ou por 5, mas não simultaneamente pelos dois
    if (num % 3 == 0 && num % 5 != 0) {
        printf("O número %d é divisível por 3, mas não por 5.\n", num);
    } else if (num % 5 == 0 && num % 3 != 0) {
        printf("O número %d é divisível por 5, mas não por 3.\n", num);
    } else {
        printf("O número %d não atende à condição.\n", num);
    }

    return 0;
}