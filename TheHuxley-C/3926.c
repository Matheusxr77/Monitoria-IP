#include <stdio.h>
#include <math.h>

int main() {
    // Declaração de variáveis
    int distancia, movimento, numero_posicoes, experiencia, vale_moedas, fatorial;
    
    // Inicialização de variáveis
    movimento = 0;
    experiencia = 0;
    vale_moedas = 0;
    fatorial = 0;

    // Leitura da entrada
    scanf("%d %d", &distancia, &numero_posicoes);
    
    // Caso especial: tamanho zero
    if (numero_posicoes == 0) {
        printf("Experiencia = 0 Moedas = 0\nJa que nao achei moedas, vou na Torre\nDesisto.");
        return 0;
    }
    
    // Loop principal
    while (movimento != distancia) {
        for (int a = 0; a < numero_posicoes; a++) {
            int cont = 0;
            // Verifica se 'a' é primo
            for (int c = 1; c <= a; c++) {
                if (a % c == 0 && a >= 2) {
                    cont++;
                }
            }
            movimento++;
            
            // Se 'a' for primo, imprime e atualiza a experiência e as moedas
            if (cont == 2) {
                printf("%d ", a);
                experiencia += a;
                if (a == 7) {
                    vale_moedas++;
                }
            }
            
            // Verifica se atingiu a distância desejada
            if (movimento == distancia) {
                break;
            }
        }
    }
    
    // Calcula o fatorial de vale-moedas, se houver
    if (vale_moedas > 0) {
        fatorial++;
        for (int i = 1; i <= vale_moedas; i++) {
            fatorial *= i;
        }
    }
    
    // Imprime experiência e quantidade de moedas
    printf("\nExperiencia = %d Moedas = %d", experiencia, fatorial);
    
    // Se não encontrou moedas, busca na Torre
    if (vale_moedas == 0) {
        printf("\nJa que nao achei moedas, vou na Torre\n");
        int moedas = 0;
        
        // Loop para encontrar moedas na Torre
        for (int x = 1; x <= experiencia; x++) {
            if (x % 7 == 0) {
                printf("%d ", x);
                moedas += 30;
            }
        }
        
        // Imprime o resultado da busca na Torre
        if (moedas > 0) {
            printf("\nConsegui %d moedas na Torre", moedas);
        } else {
            printf("Desisto.");
        }
    }
    
    return 0;
}