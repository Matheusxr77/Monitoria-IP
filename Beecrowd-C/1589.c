#include <stdio.h>

int main() {
    int T, R1, R2, menorRaioConduite;
    
    // Leitura do número de casos de teste
    scanf("%d", &T);
    
    while (T--) {
        // Leitura dos raios R1 e R2
        scanf("%d %d", &R1, &R2);
        
        // Calcula o menor raio do conduíte
        menorRaioConduite = R1 + R2;
        
        // Imprime o resultado para o caso atual
        printf("%d\n", menorRaioConduite);
    }
    
    return 0;
}