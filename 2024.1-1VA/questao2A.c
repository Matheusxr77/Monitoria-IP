/* Escreva um programa que calcule a média dos números pares digitados pelo usuário (que poderá digitar qualquer número). O programa deve terminar a leitura se o usuário digitar zero. */

#include <stdio.h>

int main() {
    // Declaração de variáveis
    int num, soma, count;
    double media;

    // Inicializando variáveis
    soma = 0;
    count = 0; 

    // Loop para ler os números do usuário até que ele digite zero
    while (1) {
        // Leitura dos números
        printf("Digite um número (0 para sair): ");
        scanf("%d", &num);

        // Verifica se o número digitado é zero para encerrar o loop
        if (num == 0) {
            break;
        }

        // Verifica se o número é par
        if (num % 2 == 0) {
            // Adiciona o número par à soma
            soma += num;
            // Incrementa o contador de números pares 
            count++; 
        }
    }

    // Verifica se foram digitados números pares para calcular a média
    if (count > 0) {
        // Calcula a média dos números pares
        media = (double)soma / count; 
        
        printf("A média dos números pares digitados é: %.2f\n", media);
    } else {
        printf("Nenhum número par foi digitado.\n");
    }

    return 0;
}