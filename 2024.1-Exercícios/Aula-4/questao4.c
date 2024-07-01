/* Escreva um programa em C que solicita ao usuário para inserir as seguintes informações:
● Idade da pessoa (em anos).
● Sexo da pessoa (0 para masculino, 1 para feminino).
● Caso sexo feminino, se a pessoa está grávida ou não (0 para não, 1 para sim).
● Peso da pessoa (em kg).

O programa deve então verificar se a pessoa está apta a doar sangue, de acordo com os seguintes critérios:
● A pessoa deve ter entre 18 e 65 anos de idade para doar sangue.
● Se a pessoa for do sexo masculino, o peso mínimo deve ser de 50 kg.
● Se a pessoa for do sexo feminino e não estiver grávida, o peso mínimo deve
ser de 50 kg.
● Se a pessoa for do sexo feminino e estiver grávida, ela não pode doar sangue.

O programa deve imprimir uma mensagem indicando se a pessoa está apta ou não a doar sangue, com base nas informações fornecidas. */

#include <stdio.h>

int main() {
    int idade, sexo, gravida;
    float peso;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu sexo (0 para masculino, 1 para feminino): ");
    scanf("%d", &sexo);
    if (sexo == 1) {
        printf("Você está grávida? (0 para não, 1 para sim): ");
        scanf("%d", &gravida);
    }
    printf("Digite seu peso (em kg): ");
    scanf("%f", &peso);

    if (idade >= 18 && idade <= 65) {
        if (sexo == 0 && peso >= 50) {
            printf("Você está apto(a) a doar sangue.\n");
        } else if (sexo == 1 && gravida == 0 && peso >= 50) {
            printf("Você está apto(a) a doar sangue.\n");
        } else {
            printf("Você não está apto(a) a doar sangue.\n");
        }
    } else {
        printf("Você não está apto(a) a doar sangue.\n");
    }

    return 0;
}