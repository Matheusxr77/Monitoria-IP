#include <stdio.h>

// Função para gerar a sequência de Fibonacci com base no número de termos 'n'
int fibonacci (int n) {
    // Declaração de variáveis locais
    int i, primeiro, segundo, proximo;

    // Inicialização de variáveis
    primeiro = 0;
    segundo = 1;
    
    // Loop para gerar os termos da sequência de Fibonacci
    for (i = 0; i < n; i++) {
        // Imprime o primeiro termo com quebra de linha
        if (i == 0) {
            printf("\n%d", primeiro);
        } else {
            // Imprime os termos subsequentes separados por espaço
            printf(" %d", primeiro);
        }

        // Calcula o próximo termo na sequência de Fibonacci
        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
    }

    return 0;
}

int main() {
    // Declaração de variáveis locais
    int termos;
    
    // Loop principal, continua até que o usuário insira 0 como número de termos
    while(1) {
        // Solicita ao usuário o número de termos desejado
        scanf("%d", &termos);
        
        // Verifica se o número de termos é zero, encerrando o programa se for
        if (termos == 0) {
            break;
        }
        
        // Chama a função Fibonacci para gerar e imprimir a sequência
        fibonacci(termos);
    }
    
    return 0;
}