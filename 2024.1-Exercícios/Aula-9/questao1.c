/* Escreva uma função em C chamada verificar_primo que recebe um número inteiro como parâmetro por valor e retorna verdadeiro se o número for primo e falso caso contrário. */

#include <stdio.h>

int verificar_primo(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if (verificar_primo(n)) {
        printf("%d é primo.\n", n);
    } else {
        printf("%d não é primo.\n", n);
    }

    return 0;
}