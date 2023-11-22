#include <stdio.h>

int main() {
    // Declaração de variáveis
    int numero, centena, dezena;
    
    // Leitura do número fornecido pelo usuário
    scanf("%d", &numero);
    
    // Cálculo da centena e da dezena
    centena = numero / 100;
    dezena = (numero % 100) / 10;

    // Verificação das condições
    if (centena % 2 == 0 || dezena % 2 != 0) {
        printf("sim");
    } else {
        printf("nao");
    }

    return 0;
}