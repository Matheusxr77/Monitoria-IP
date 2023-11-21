#include <stdio.h>

int main() { 
    // Declaração de variáveis
    int dias, quilometros;
    double valor;
                
    // Leitura do número de dias e quilômetros
    scanf("%d", &dias);
    scanf("%d", &quilometros);
    
    // Cálculo do valor total com desconto de 10%
    valor =  (dias * 30 + quilometros * 0.01) * 0.90;
    
    // Impressão do valor total com duas casas decimais
    printf("%.2lf", valor);
  
    return 0;
}