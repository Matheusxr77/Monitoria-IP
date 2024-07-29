#include <stdio.h>

int main() {
    int horaInicial, minutoInicial, horaFinal, minutoFinal;
    int inicioMinutos, fimMinutos, duracao, horas, minutos;

    // Leitura da entrada
    scanf("%d %d %d %d", &horaInicial, &minutoInicial, &horaFinal, &minutoFinal);

    // Convertendo o horário inicial e final para minutos desde a meia-noite
    inicioMinutos = horaInicial * 60 + minutoInicial;
    fimMinutos = horaFinal * 60 + minutoFinal;

    // Calculando a duração do jogo em minutos
    duracao = fimMinutos - inicioMinutos;

    // Verificando se a duração é negativa (caso a hora final seja anterior à hora inicial no mesmo dia)
    if (duracao <= 0) {
        duracao += 24 * 60; // Adicionando 24 horas em minutos para considerar o jogo até o próximo dia
    }

    // Calculando horas e minutos
    horas = duracao / 60;
    minutos = duracao % 60;

    // Imprimindo o resultado
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);

    return 0;
}