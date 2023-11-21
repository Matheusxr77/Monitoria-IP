#include <stdio.h>

int main() {
    // Declaração de variáveis
    float entrada1, entrada2, soma, subtracao, multiplicacao, divisao;

    // Leitura das duas entradas fornecidas pelo usuário
    scanf("%f %f", &entrada1, &entrada2);
    
    // Realização das operações aritméticas
    soma = entrada1 + entrada2;
    subtracao = entrada1 - entrada2;
    multiplicacao = entrada1 * entrada2;

    // Verificação se a divisão é por zero para evitar erro
    if (entrada2 != 0) {
        divisao = entrada1 / entrada2;
    } else {
        printf("Erro: divisão por zero.\n");
        return 1;
    }
    
    // Impressão dos resultados com duas casas decimais
    printf("%.2f\n%.2f\n%.2f\n%.2f\n", soma, subtracao, multiplicacao, divisao);

    return 0;
}