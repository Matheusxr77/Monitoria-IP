/* Escreva um programa em C que solicita ao usuário para inserir sua idade e, em seguida, imprime uma mensagem indicando se a pessoa é maior de idade (idade maior ou igual a 18 anos) ou menor de idade. */

#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Você é maior de idade.\n");
    } else {
        printf("Você é menor de idade.\n");
    }

    return 0;
}