#include <stdio.h>

int main() {
    // Declaração de variáveis: i (índice), quociente (denominador da série), somador (variável para acumular a soma)
    int i;
    float quociente, somador;

    // Inicialização do quociente e somador
    quociente = 1;
    somador = 0;

    // Loop for para calcular a soma da série
    for (i = 1; i <= 39; i += 2) {
        somador = somador + (i / quociente);
        quociente = quociente + quociente + 1;
    }

    // Impressão do resultado formatado
    printf("%.2f\n", somador);

    return 0;
}