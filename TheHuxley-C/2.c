#include <stdio.h>

int main() {
    // Declaração de variáveis
    int aux, entrada1, entrada2, entrada3;

    // Leitura de três números inteiros
    scanf("%d\n%d\n%d", &entrada1, &entrada2, &entrada3);
    
    // Ordenação usando o método Bubble Sort
    if (entrada1 > entrada2) {
        aux = entrada1;
        entrada1 = entrada2;
        entrada2 = aux;
    }
    
    if (entrada2 > entrada3) {
        aux = entrada2;
        entrada2 = entrada3;
        entrada3 = aux;
    }
    
    if (entrada1 > entrada2) {
        aux = entrada1;
        entrada1 = entrada2;
        entrada2 = aux;
    }
    
    // Impressão dos números em ordem crescente
    printf("%d\n", entrada1);
    printf("%d\n", entrada2);
    printf("%d\n", entrada3);
  
    return 0;
}