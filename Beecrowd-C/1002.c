#include <stdio.h>
#include <math.h>

int main() {
    // Declaração de variáveis
    double pi, raio, area;

    // Atribui o valor de pi à variável pi
    pi = 3.14159;

    // Solicita ao usuário que insira o valor do raio
    scanf("%lf", &raio);

    // Calcula a área usando a função pow da biblioteca math
    area = pi * pow(raio, 2);

    // Exibe o resultado formatado com quatro casas decimais
    printf("A=%.4lf\n", area);
    
    return 0;
}