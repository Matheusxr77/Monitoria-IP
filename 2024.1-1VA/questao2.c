/* Escreva um programa em linguagem C de controle de acesso a um sistema que deve ser implementado de duas formas:
(a) o usuário tem 3 chances de acertar a senha (sequência de caracteres); se ele não conseguir, o programa deve imprimir uma mensagem informando que a conta foi bloqueada.
(b) o usuário pode seguir com inúmeras tentativas de senhas (sequência de caracteres) até acertá-la e conseguir acesso ao sistema; */

#include <stdio.h>
#include <string.h>

int main() {
    char senha[10] = "1234";
    char tentativa[10];
    int i, chances = 3;

    printf("Digite a senha: ");
    scanf("%s", tentativa);

    for (i = 1; i < 3; i++) {
        if (strcmp(senha, tentativa) == 0) {
            printf("Acesso permitido\n");
            break;
        } else {
            chances--;
            printf("Senha incorreta. Você tem %d chance(s)\n", chances);
            printf("Digite a senha: ");
            scanf("%s", tentativa);
        }
    }

    if (i == 3) {
        printf("Conta bloqueada\n");
    }

    return 0;
}