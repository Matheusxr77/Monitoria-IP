/* Questão 1°| Escreva um programa que solicita ao usuário que insira seu peso em quilogramas e sua altura em metros, e em seguida calcula e exibe o IMC. O IMC é calculado dividindo o peso pela altura ao quadrado.*/

#include <stdio.h>
#include <math.h>

int main() {
    float peso, altura, imc;

    printf("Digite seu peso em quilogramas: ");
    scanf("%f", &peso);
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    imc = peso / pow(altura, 2);

    printf("Seu IMC é: %.2f\n", imc);

    return 0;
}