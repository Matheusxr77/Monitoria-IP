#include <stdio.h>
#include <math.h>

// Função que verifica se um número é primo
int primo (int n) {
    int i;
    
    if (n <= 1) {
        // Se o número for menor ou igual a 1, não é primo
        return 0;
    } 
    
    for (i = 2; pow(i, 2) <= n; i++) {
        if (n % i == 0) {
            // Se o número tiver um divisor diferente de 1 e ele mesmo, não é primo
            return 0;  
        }
    }
    
    // Se não houver divisores, o número é primo
    return 1;  
}

int main() {
    // Declaração de variáveis
    int i, resultado, produto;
    int numeros[4];
    
    // Inicialização de variáveis
    resultado = 0;
    produto = 1;

    // Entrada dos quatro números
    for (i = 0; i < 4; i++) {
        scanf("%d", &numeros[i]);
    }

    // Verifica se todos os números são primos usando a função primo
    if (primo(numeros[0]) && primo(numeros[1]) && primo(numeros[2]) && primo(numeros[3])) {
        // Calcula o produto dos quatro números primos
        resultado = numeros[0] * numeros[1] * numeros[2] * numeros[3];
        printf("%d", resultado);
    } else {
        printf("SEM PRODUTO");
    }

    return 0;
}