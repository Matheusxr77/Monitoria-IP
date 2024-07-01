/* Supondo que a população de um país A seja da ordem de 80000 habitantes com uma taxa anual de crescimento de 3% e que a população de B seja 200000 habitantes com uma taxa de crescimento de 1.5%.
Faça um programa que calcule e escreva o número de anos necessários para que a população do país A ultrapasse ou iguale a população do país B, mantidas as taxas de crescimento. */

#include <stdio.h>

int main() {
    int anos = 0;
    float populacao_a = 80000, populacao_b = 200000;

    while (populacao_a < populacao_b) {
        populacao_a *= 1.03;
        populacao_b *= 1.015;
        anos++;
    }

    printf("Serão necessários %d anos para que a população do país A ultrapasse ou iguale a população do país B.\n", anos);

    return 0;
}