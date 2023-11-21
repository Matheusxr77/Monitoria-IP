#include <stdio.h>

int main() {
    // Declaração de variáveis
    float salario, horas, salario_hora, total;

    // Leitura do salário fixo e do número de horas trabalhadas
    scanf("%f\n%f", &salario, &horas);

    // Cálculo do valor da hora de trabalho
    salario_hora = salario / 44;  // Supõe-se que há 44 horas de trabalho por semana

    // Cálculo do salário total, considerando horas extras com um bônus de 10%
    total = salario + (horas * salario_hora * 1.1);

    // Impressão do salário total com duas casas decimais
    printf("%.2f", total);

    return 0;
}