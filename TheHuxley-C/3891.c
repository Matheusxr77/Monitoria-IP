#include <stdio.h>

int main() {
    // Declaração de variáveis
    float nota1, nota2, nota3, media, ponderada1, ponderada2;
    
    // Leitura das notas
    scanf("%f\n%f\n%f", &nota1, &nota2, &nota3);
    
    // Cálculo da média simples
    media = (nota1 + nota2 + nota3) / 3;
    
    // Cálculo da média ponderada 1
    ponderada1 = ((nota1 * 2) + (nota2 * 2) + (nota3 * 3)) / 7;
    
    // Cálculo da média ponderada 2
    ponderada2 = ((nota1 * 1) + (nota2 * 2) + (nota3 * 2)) / 5;
    
    // Impressão dos resultados com duas casas decimais
    printf("%.2f\n%.2f\n%.2f", media, ponderada1, ponderada2);
    
    return 0;
}