#include <stdio.h>
#include <math.h>

int main() {
    // Declaração de variáveis
    int numero, i;

    // Leitura do número de notas
    scanf("%i", &numero);

    // Declaração de um array para armazenar as notas
    double notas[numero], media;
    
    // Inicialização de variável
    media = 0;

    // Loop para ler as notas e calcular a média
    for (i = 0; i < numero; i++) {
        scanf("%lf", &notas[i]);
        media += notas[i];
    }

    // Cálculo da média
    media = media / numero;

    // Verificação da natureza da média e impressão com casas decimais apropriadas
    if (fmod(media, 1.0) == 0.0) {
        printf("%.1lf", media);
    } else if (fmod(media * 1000, 1.0) == 0.0) {
        printf("%.2lf", media);
    } else {
        printf("%.15lf", media);
    }
    
    return 0;
}