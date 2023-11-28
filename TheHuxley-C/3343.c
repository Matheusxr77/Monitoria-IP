#include <stdio.h>

// Função que analisa um vetor de inteiros em busca da maior sequência crescente
int maior_sequencia (int numero, int vetor[]) {
    // Declaração das variáveis para armazenar informações sobre a maior sequência
    int i, maior, inicio, atual;

    // Inicialização das variáveis
    maior = 0;
    inicio = 0;
    atual = 1;

    // Itera sobre o vetor a partir do segundo elemento
    for (i = 1; i < numero; i++) {
        // Verifica se o elemento atual é menor que o anterior
        if (vetor[i] < vetor[i - 1]) {
            atual++;            
            // Se a sequência atual for maior que a maior sequência registrada
            if (atual > maior) {
                // Atualiza o comprimento da maior sequência
                maior = atual;
                inicio = i - maior + 1;
            }
        } else {
            // Reinicia o comprimento da sequência atual
            atual = 1;
        }
    }
    
    // Se houver uma maior sequência, imprime as informações
    if (maior > 0) {
        // Imprime o comprimento da maior sequência
        printf("%d\n", maior);
        for (i = inicio; i < inicio + maior; i++) {
            // Imprime os elementos da maior sequência
            printf("%d ", vetor[i]);
        }
        printf("\n");
    } else {
        // Se não houver sequência
        printf("0\n");
    }
}

int main() {
    // Declaração de variáveis
    int i, j, casos, tamanho;

    // Lê o número de casos de teste
    scanf("%d", &casos);
    
    // Loop para cada caso de teste
    for (i = 0; i < casos; i++) {
        // Lê o tamanho do vetor
        scanf("%d", &tamanho);  
        
        // Declaração do vetor com o tamanho dado pelo usuário
        int vetor[tamanho];
        
        // Loop para ler os elementos do vetor
        for (j = 0; j < tamanho; j++) {
            scanf("%d", &vetor[j]);
        }
        
        // Chama a função teste para analisar e imprimir a maior sequência
        maior_sequencia(tamanho, vetor);
    }
    
    return 0;
}