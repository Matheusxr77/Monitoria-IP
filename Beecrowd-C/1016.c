#include <stdio.h>
#include <math.h>

int main() {
    // Declaração de variáveis
    int distancia, tempo;

    // Solicita ao usuário que insira a distância
    scanf("%d", &distancia);

    // Calcula o tempo necessário para percorrer a distância a uma velocidade constante de 30 km/h
    tempo = (60 * distancia) / 30;

    // Exibe o resultado na saída padrão
    printf("%d minutos\n", tempo);

    return 0;
}