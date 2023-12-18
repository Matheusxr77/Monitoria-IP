#include <stdio.h>

// Função que reduz o valor de x pelo valor de y e retorna a redução
double redutor (double *x, double *y) {
    // Variável local para armazenar a redução
    double reducao;

    // Calcula a redução subtraindo o valor de y de x
    reducao = *x - *y;

    // Retorna a redução calculada
    return reducao;
}

int main() {
    // Declaração de variáveis
    double x, y, reducao;

    // Solicita ao usuário dois valores do tipo double
    scanf("%lf %lf", &x, &y);

    // Chama a função redutor, passando os endereços de x e y como parâmetros
    reducao = redutor(&x, &y);

    // Exibe a redução e o valor de y após a redução
    printf("%.2lf %.2lf", reducao, y);

    return 0;
}