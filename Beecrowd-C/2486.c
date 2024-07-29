#include <stdio.h>
#include <string.h>

// Função para obter a quantidade de vitamina C com base no alimento
int getVitaminC(char food[]) {
    if (strcmp(food, "suco de laranja") == 0) return 120;
    if (strcmp(food, "morango fresco") == 0) return 85;
    if (strcmp(food, "mamao") == 0) return 85;
    if (strcmp(food, "goiaba vermelha") == 0) return 70;
    if (strcmp(food, "manga") == 0) return 56;
    if (strcmp(food, "laranja") == 0) return 50;
    if (strcmp(food, "brocolis") == 0) return 34;
    return 0;
}

int main() {
    // Declaração de variáveis
    int T, i, totalVitaminC, quantity;
    char food[20]; // Nome do alimento

    // Loop principal que continua enquanto T for diferente de 0
    while (scanf("%d", &T) && T != 0) {
        // Inicializa o total de vitamina C para cada conjunto de entradas
        totalVitaminC = 0; 
        
        // Loop para ler a quantidade e o tipo de alimento
        for (i = 0; i < T; i++) {
            // Lê a quantidade do alimento
            scanf("%d", &quantity); 
            scanf(" %[^\n]s", food); // Lê a string do alimento

            // Adiciona a quantidade de vitamina C do alimento ao total
            totalVitaminC += quantity * getVitaminC(food);
        }

        // Verifica se o total de vitamina C está dentro do intervalo recomendado
        if (totalVitaminC < 110) {
            printf("Mais %d mg\n", 110 - totalVitaminC);
        } else if (totalVitaminC > 130) {
            printf("Menos %d mg\n", totalVitaminC - 130);
        } else {
            printf("%d mg\n", totalVitaminC);
        }
    }

    return 0;
}