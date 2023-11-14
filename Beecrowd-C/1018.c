#include <stdio.h>
#include <math.h>

int main() {
    // Declaração de variáveis para armazenar o valor total e as quantidades de cada nota
    int N, c100, c50, c20, c10, c5, c2, c1;

    // Solicita ao usuário que insira o valor total
    scanf("%d", &N);

    // Exibe o valor total na saída padrão
    printf("%d\n", N);

    // Calcula a quantidade de cada nota
    c100 = N / 100;
    c50 = (N % 100) / 50;
    c20 = ((N % 100) % 50) / 20;
    c10 = (((N % 100) % 50) % 20) / 10;
    c5 = ((((N % 100) % 50) % 20) % 10) / 5;
    c2 = (((((N % 100) % 50) % 20) % 10) % 5) / 2;
    c1 = ((((((N % 100) % 50) % 20) % 10) % 5) % 2) / 1;

    // Exibe a quantidade de cada nota na saída padrão
    printf("%d nota(s) de R$ 100,00\n", c100);
    printf("%d nota(s) de R$ 50,00\n", c50);
    printf("%d nota(s) de R$ 20,00\n", c20);
    printf("%d nota(s) de R$ 10,00\n", c10);
    printf("%d nota(s) de R$ 5,00\n", c5);
    printf("%d nota(s) de R$ 2,00\n", c2);
    printf("%d nota(s) de R$ 1,00\n", c1);

    return 0;
}