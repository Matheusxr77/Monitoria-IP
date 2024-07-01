/* Faça um programa em C que receba a idade de 10 pessoas e mostre quantas são maiores que 18 anos. */

#include <stdio.h>

int main() {
    int idade, maiores = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);

        if (idade > 18) {
            maiores++;
        }
    }

    printf("O número de pessoas maiores de 18 anos é: %d\n", maiores);

    return 0;
}