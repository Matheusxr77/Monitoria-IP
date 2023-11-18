#include <stdio.h>
#include <math.h>

// Declaração de variáveis globais
int valor1, valor2, somaimpar, maiorvalor, menorvalor;

int main() {
    // Solicita ao usuário que insira dois valores inteiros
    scanf("%d%d", &valor1, &valor2);

    // Verifica qual é o maior e o menor valor entre os dois fornecidos
    if (valor1 > valor2) {
        maiorvalor = valor1;
        menorvalor = valor2;
    } else {
        maiorvalor = valor2;
        menorvalor = valor1;
    }

    // Inicializando o somador de ímpar zerado
    somaimpar = 0;

    // Loop for para iterar de menorvalor+1 até maiorvalor e somar os números ímpares
    for (menorvalor++; menorvalor < maiorvalor; menorvalor++) {
        // Verifica se o número é ímpar
        if (menorvalor % 2 != 0) {
            // Soma os números ímpares
            somaimpar = somaimpar + menorvalor;
        }
    }

    // Imprime a soma dos números ímpares
    printf("%d\n", somaimpar);

    return 0;
}