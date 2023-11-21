#include <stdio.h>

int main() {
    // Declaração de variáveis
    float nota1, nota2, nota3, media;
    
    // Leitura das três notas
    scanf("%f\n%f\n%f", &nota1, &nota2, &nota3);
    
    // Cálculo da média ponderada
    media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;
    
    // Impressão da média com uma casa decimal
    printf("MEDIA = %.1f", media);

    return 0;
}