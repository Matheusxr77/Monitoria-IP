/* Questão 2°| Escreva um programa que solicita ao usuário que insira três notas e seus respectivos pesos. Em seguida, o programa deve calcular e exibir a média ponderada das notas. */

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, peso1, peso2, peso3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite o peso da primeira nota: ");
    scanf("%f", &peso1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite o peso da segunda nota: ");
    scanf("%f", &peso2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite o peso da terceira nota: ");
    scanf("%f", &peso3);

    media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);

    printf("A média ponderada das notas é: %.2f\n", media);

    return 0;
}