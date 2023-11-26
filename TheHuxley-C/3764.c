#include <stdio.h>

int main() {
    // Declaração de variáveis
    double ph;

    // Leitura do valor inicial de pH
    scanf("%lf", &ph);

    // Loop principal, continua até que ph seja não-positivo
    while (ph > 0) {
        // Verificações para determinar se a solução é ácida, básica ou neutra
        if (ph < 7) {
            printf("ACIDA\n");
        } else if (ph > 7) {
            printf("BASICA\n");
        } else if (ph == 7) {
            printf("NEUTRA\n");
        }
        
        // Leitura do próximo valor de pH
        scanf("%lf", &ph);
    }
    
    return 0;  
}