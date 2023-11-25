#include <stdio.h>

int main() {
    // Declaração de variáveis
    double entrada1, entrada2, entrada3, media;
    int saida;

    // Inicialização da variável 'saida' com 0
    saida = 0;

    // Leitura dos três números de ponto flutuante
    scanf("%lf\n%lf\n%lf", &entrada1, &entrada2, &entrada3);

    // Cálculo da média
    media = (entrada1 + entrada2 + entrada3) / 3;

    // Verifica se cada entrada é maior que a média e, se sim, incrementa 'saida'
    if (entrada1 > media) {
        saida += 1;
    }

    if (entrada2 > media) {
        saida += 1;
    }
    
    if (entrada3 > media) {
        saida += 1;
    }

    // Imprime o resultado final (quantidade de números maiores que a média)
    printf("%d", saida);
    
    return 0;
}