#include <stdio.h>

int main() {
    // Declaração de variáveis
    float salario;

    // Leitura do salário fornecido pelo usuário
    scanf("%f", &salario);

    // Aumento do salário em 7,5%
    salario = 1.075 * salario;

    // Impressão do novo salário com duas casas decimais
    printf("%.2f", salario);

    return 0;
}