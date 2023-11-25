#include <stdio.h>

int main() {
    // Declaração de variável
    double ph;

    // Mensagem para o usuário
    printf("Digite o pH da solucao:\n");

    // Leitura do valor do pH
    scanf("%lf", &ph);

    if (ph >= 0 && ph <= 14) {
        if (ph < 7) {
            printf("Essa solucao e acida.");
        } else if (ph == 7) {
            printf("Essa solucao e neutra.");
        } else {
            printf("Essa solucao e basica.");
        }
    } else {
        printf("Valor deve estar entre 0 e 14.");
    }

    return 0;
}