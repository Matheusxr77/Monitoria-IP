#include <stdio.h>
#include <math.h>

int main() {
    // Declaração de variáveis para armazenar o horário de início, término e a duração
    int inicio, fim, tempo;

    // Solicita ao usuário que insira o horário de início e término
    scanf("%d%d", &inicio, &fim);

    // Verifica se o horário de término é menor ou igual ao de início, ajustando-o se necessário
    if (fim <= inicio) {
        fim += 24;  // Adiciona 24 horas ao horário de término
    }

    // Calcula a duração do jogo
    tempo = fim - inicio;

    // Exibe a duração na saída padrão
    printf("O JOGO DUROU %d HORA(S)\n", tempo);

    return 0;
}