/* Dada uma sequência de n números, imprimi-la na ordem inversa à da leitura. */

#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int v[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", v[i]);
    }

    printf("\n");
    
    return 0;
}