#include <stdio.h>

int main() {
    // Declaração de variáveis
    int i, posicao, quantidade;

    // Entrada da posição e da quantidade
    scanf("%d\n%d", &posicao, &quantidade);
    
    // Declaração de um array de ponto flutuante com tamanho igual à quantidade
    float elementos[quantidade];

    // Preenchimento do array com os valores dados
    for (i = 0; i < quantidade; i++) {
        scanf("%f", &elementos[i]);
    }
    
    // Impressão do elemento na posição especificada
    printf("%.2f", elementos[posicao]);
    
    return 0;
}