#include <stdio.h>

int main() {
    // Declaração de variáveis
    double energia, valor, preco;

    // Leitura do consumo de energia fornecido pelo usuário
    scanf("%lf", &energia);

    // Cálculo do valor e do preço com base na tabela de preços
    if (energia < 100 && energia > 0) {
        valor = energia * 1.35;
        preco = 1.35;
    } else if (energia < 300) {
        valor = energia * 1.55;
        preco = 1.55;
    } else if (energia < 575) {
        valor = (energia * 1.75) * 1.1;
        preco = 1.75;
    } else {
        valor = (energia * 2.15) * 1.1;  
        preco = 2.15;
    }

    // Verificação do valor mínimo
    if (valor < 35) {
        valor = 35;
    }

    // Impressão do valor e do preço
    printf("%.2lf\n%.2lf", valor, preco);
  
	return 0;
}