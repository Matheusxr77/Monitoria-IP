#include <stdio.h>

// Função para contar o número de dígitos pares em um número inteiro 'n'
int digitosPares (int n) {
    // Contador de dígitos pares
    int contador;

    // Verifica se o número é zero
    if (n == 0) {
        return 0;
    } else {
        // Verifica se o último dígito é par
        if ((n % 10) % 2 == 0) {
            // Se for par, incrementa o contador e chama recursivamente a função para o restante dos dígitos
            contador = 1 + digitosPares(n / 10);

            return contador;
        } 
        else {
            // Se não for par, chama recursivamente a função para o restante dos dígitos sem incrementar o contador
            contador = digitosPares(n / 10);
            
            return contador;
        }
    }
}

int main() {
    // Declaração de variável local
    int numero;

    // Solicita ao usuário um número inteiro
    scanf("%d", &numero);
    
    // Verifica se o número é zero
    if (numero == 0) {
        // Se for zero, imprime "1" (considerando o dígito zero como par)
        printf("1");
    } else {
        // Chama a função digitosPares para contar e imprimir o número de dígitos pares no número fornecido
        printf("%d", digitosPares(numero));
    }
    
    return 0;
}