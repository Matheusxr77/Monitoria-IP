#include <stdio.h>
#include <math.h>

int main() {
    // Declaração de variáveis
    double salario, impostorenda;

    // Solicita ao usuário que insira o salário
    scanf("%lf", &salario);

    // Verifica em qual faixa de renda o salário se encaixa e calcula o imposto devido
    if (salario >= 0 && salario <= 2000.00) {
        printf("Isento\n");
    } else if (salario > 2000.00 && salario <= 3000.00) {
        impostorenda = (salario - 2000) * 0.08;
        printf("R$ %.2lf\n", impostorenda);
    } else if (salario > 3000.00 && salario <= 4500.00) {
        impostorenda = ((salario - 3000) * 0.18) + (1000 * 0.08);
        printf("R$ %.2lf\n", impostorenda);
    } else {
        impostorenda = ((salario - 4500) * 0.28) + (1500 * 0.18) + (1000 * 0.08);
        printf("R$ %.2lf\n", impostorenda);
    }

    return 0;
}