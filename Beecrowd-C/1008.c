#include <stdio.h>

int main() {
    // Declaração de variáveis
    int funcionario, horas;
    float valorhora, salario;

    // Solicita ao usuário que insira o número do funcionário, o número de horas trabalhadas e o valor de hora de trabalho
    scanf("%d", &funcionario);
    scanf("%d", &horas);
    scanf("%f", &valorhora);

    // Imprime o número do funcionário
    printf("NUMBER = %d\n", funcionario);

    // Calcula o valor do salário do funcionário
    salario = horas * valorhora;

    // Imprime o salário do funcionário
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}