#include <stdio.h>

int main() {
    // Declaração de variáveis
    int tempo, velocidade;
    double distancia, litros;
    
    // Leitura dos valores de entrada
    scanf("%d", &tempo);
    scanf("%d", &velocidade);
    
    // Calculo da distância percorrida
    distancia = tempo * velocidade;
    
    // Calculo dos litros necessarios
    litros = distancia / 12.0;
    
    // Impressao do resultado com três casas decimais
    printf("%.3lf\n", litros);
    
    return 0;
}