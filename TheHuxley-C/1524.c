#include <stdio.h>
#include <math.h>

int main() {
    // Declaração de variáveis
    double entrada, salario, aumento, salario_total;
    int percentual;

    // Leitura do salário fornecido pelo usuário
    scanf("%lf", &entrada);

    // Arredondamento para evitar problemas com representação de ponto flutuante
    salario = round(entrada * 100) / 100;

    // Determinação do percentual de aumento com base no valor do salário
    if (salario <= 280.00) {
        percentual = 20;
    } else if (salario > 280.00 && salario < 700.00) {
        percentual = 15;
    } else if (salario >= 700.00 && salario < 1500.00) {
        percentual = 10;
    } else if (salario >= 1500.00) {
        percentual = 5;
    }

    // Cálculo do aumento e do novo salário total
    aumento = salario * percentual / 100;
    salario_total = salario + aumento;

    // Impressão dos resultados com duas casas decimais
    printf("%.2lf\n%d\n%.2lf\n%.2lf", salario, percentual, aumento, salario_total);

    return 0;
}