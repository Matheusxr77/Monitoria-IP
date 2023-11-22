#include <stdio.h>

int main() {
    // Declaração de variáveis
    int numero;
    
    // Leitura do número fornecido pelo usuário
    scanf("%d", &numero);
    
    // Verificação das condições
    if (numero % 5 != 0 && (numero % 4 == 0 && numero % 7 == 0)) {  
        printf("sim");
    } else {
        printf("nao");
    }
    
    return 0;
}