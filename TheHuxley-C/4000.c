#include <stdio.h>

// Função que verifica se o valor é negativo
int verificar (int valor) {
    if (valor > 0) {
        // Positivo
        return 0;
    } else {
        // Negativo
        return 1;
    }
}

// Função que verifica se o valor está no intervalo [5, 10]
int entre (int valor) {
    if (valor >= 5 && valor <= 10) {
        return 1; // Está no intervalo
    } else {
        return 0; // Não está no intervalo
    }
}

// Função principal
int main() {
    // Declaração de variáveis
    int quantidade, negativo, aux;

    // Variáveis de controle
    quantidade = 0;   // Contador de valores no intervalo [5, 10]
    negativo = 0;     // Contador de valores negativos
    aux = 0;          // Variável auxiliar para armazenar os valores lidos

    // Loop de leitura até o final do arquivo (EOF)
    while (scanf("%d", &aux) != EOF) {
        // Atualiza os contadores com base nas funções verificar e entre
        negativo += verificar(aux);
        quantidade += entre(aux);
    }

    // Verifica se há valores não positivos e exibe a mensagem correspondente
    if (negativo != 0) {
        printf("ha nao positivo");
    } else {
        // Se não houver valores não positivos, exibe a quantidade de valores no intervalo [5, 10]
        printf("%d", quantidade);
    }

    return 0;
}