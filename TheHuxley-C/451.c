#include <stdio.h>

int main() {
    // Declaração de variáveis
    double valor, resultado;
    int garantia;

    // Leitura do valor e da opção de garantia fornecidos pelo usuário
    scanf("%lf\n%d", &valor, &garantia);

    // Cálculo do valor final com base na opção de garantia
    if (garantia == 1) {
        resultado = valor * 1.03;
    } else if (garantia == 2) {
        resultado = valor * 1.05;
    } else {
        resultado = valor;
    } 
    
    // Impressão do resultado com duas casas decimais
    printf("%.2lf", resultado);

    return 0;
}