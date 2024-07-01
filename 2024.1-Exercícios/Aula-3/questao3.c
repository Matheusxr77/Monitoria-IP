/* Questão 3°| Escreva um programa que solicita ao usuário que insira uma quantidade de segundos e converte esse valor para horas, minutos e segundos. Em seguida, o programa deve exibir o tempo convertido. */

#include <stdio.h>

int main() {
    int segundos, horas, minutos, segundos_restantes;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundos_restantes = segundos % 3600;
    minutos = segundos_restantes / 60;
    segundos_restantes = segundos_restantes % 60;

    printf("O tempo convertido é: %dh %dm %ds\n", horas, minutos, segundos_restantes);

    return 0;
}