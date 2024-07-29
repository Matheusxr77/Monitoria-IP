#include <stdio.h>

int main() {
    // Declaração de variáveis
    int A, B;
    
    // Leitura dos valores das duas primeiras cartas
    scanf("%d %d", &A, &B);
    
    // Determinação do valor da terceira carta que maximiza a probabilidade de ganhar
    if (A == B) {
        // Se as duas primeiras cartas são iguais, qualquer outra carta diferente maximiza a chance de formar um trio
        printf("%d\n", A);
    } else {
        // Se as duas primeiras cartas são diferentes, escolher uma terceira carta igual a A ou B maximiza a chance de formar uma dupla
        if (A > B) {
            printf("%d\n", A);
        } else {
            printf("%d\n", B);
        }
    }
    
    return 0;
}