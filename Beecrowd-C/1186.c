#include <stdio.h>
#include <string.h>

// Função para contar LEDs necessários para um número
int countLEDs(char number[]) {
    // Declaração de variáveis
    int LEDCounts[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6}; // LEDs necessários para cada dígito
    int totalLEDs = 0;
    int i;

    // Iterar sobre cada dígito do número
    for (i = 0; i < strlen(number); i++) {
        // Converter caractere para inteiro
        int digit = number[i] - '0'; 
        
        totalLEDs += LEDCounts[digit];
    }

    return totalLEDs;
}

int main() {
    // Declaração de variáveis
    int n, i;

    // Ler número de casos de teste
    scanf("%d", &n); 
    getchar(); // Capturar o newline após o número N

    char number[10001]; // Para armazenar o número (considerando até 10000 dígitos + '\0')

    for (i = 0; i < n; i++) {
        // Ler o número como uma string
        fgets(number, sizeof(number), stdin);

        // Remover o newline lido por fgets
        number[strcspn(number, "\n")] = '\0'; 

        // Calcular LEDs necessários
        int ledsNeeded = countLEDs(number); 

        printf("%d leds\n", ledsNeeded);
    }

    return 0;
}