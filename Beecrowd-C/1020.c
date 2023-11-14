#include <stdio.h>
#include <math.h>

int main() {
    // Declaração de variáveis para armazenar a idade em dias e as quantidades de anos, meses e dias
    int idade, anos, meses, dias;

    // Solicita ao usuário que insira a idade em dias
    scanf("%d", &idade);

    // Calcula a quantidade de anos, meses e dias
    anos = idade / 365;       // Calcula os anos (365 dias em um ano)
    meses = (idade % 365) / 30;  // Calcula os meses (30 dias em um mês)
    dias = (idade % 365) % 30;    // Calcula os dias restantes

    // Exibe o resultado formatado na saída padrão
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}