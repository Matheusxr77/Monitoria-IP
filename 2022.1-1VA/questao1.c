/* Escreva um programa que solicite um número inteiro ao usuário e determine se ele é um número perfeito, 
ou seja, a soma dos seus divisores é igual a ele próprio */

#include <stdio.h>

int main() {
    int num, i;
    int somaDivisores = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    // Calcula a soma dos divisores do número
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            somaDivisores += i;
        }
    }

    // Verifica se o número é perfeito
    if (somaDivisores == num) {
        printf("%d e um numero perfeito!\n", num);
    } else {
        printf("%d nao e um numero perfeito!\n", num);
    }

    return 0;
}