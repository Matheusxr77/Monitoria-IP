#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis
    int m, i, melhor_indice, precos[4], velocidades[4] = {80, 100, 120, 80};
    float melhor_custo, custo[4];
    char cores[4][10] = {"Verde", "Vermelho", "Roxo", "Amarelo"};
    
    // Leitura do valor de m (orçamento disponível)
    scanf("%d", &m);
    
    // Leitura dos preços das bicicletas e cálculo do custo por unidade de velocidade
    for (i = 0; i < 4; i++) {
        scanf("%d", &precos[i]);
        custo[i] = velocidades[i] / precos[i];
    }
    
    // Inicialização de variáveis para encontrar a melhor escolha
    melhor_indice = -1;
    melhor_custo = 0;
    
    // Encontrar a melhor bicicleta com base no orçamento disponível e custo por velocidade
    for (i = 0; i < 4; i++) {
        if (precos[i] <= m && custo[i] > melhor_custo) {
            melhor_indice = i;
            melhor_custo = custo[i];
        }
    }
    
    // Verifica se foi possível escolher 
    if (melhor_indice == -1) {
        printf("Acho que vou a pe :(\n");
    } else {
        printf("%s\n", cores[melhor_indice]);
    }
    
    return 0;
}