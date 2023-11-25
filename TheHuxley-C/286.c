#include <stdio.h>

int main() {
    // Declaração de variáveis
    int A, B, C;

    // Leitura dos três números inteiros fornecidos pelo usuário
    scanf("%d\n%d\n%d", &A, &B, &C); 
 
    // Verificação das condições para determinar o maior e o menor número
    if (A > B && A > C || A < B && A < C) {
        printf("A\n");
    } else if (B > A && B > C || B < A && B < C) {
        printf("B\n");
    } else if (C > A && C > B || C < A && C < B) {
        printf("C\n");
    } else {
        printf("*\n");
    } 
    
    return 0;
}