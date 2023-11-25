#include <stdio.h>

int main() {
    // Declaração de variáveis
    int interface_grafica, inteligencia_artificial, encapsulamento, indentacao, structs, verdade;
    
    // Inicialização da variável que será usada para contar as condições verdadeiras
    verdade = 0;
    
    // Leitura dos valores fornecidos pelo usuário
    scanf("%d %d %d %d %d", &interface_grafica, &inteligencia_artificial, &encapsulamento, &indentacao, &structs);

    // Verifica se pelo menos uma das condições é verdadeira para cada conjunto de critérios
    if (interface_grafica == 1 || inteligencia_artificial == 1) {
        verdade++;
        if (encapsulamento == 1 && indentacao == 1) {
            verdade++;
            if (structs == 1) {
                verdade++;
            }
        }
    }
    
    // Verifica se todas as três condições foram satisfeitas
    if (verdade == 3) {
        // Se todas as condições são verdadeiras, imprime "AVALIADO"
        printf("AVALIADO");
    } else {
        // Se pelo menos uma condição não é verdadeira, imprime "0"
        printf("0\n");
    }
    
    return 0;
}