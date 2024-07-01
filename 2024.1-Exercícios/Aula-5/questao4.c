/* A prefeitura de uma cidade quer fazer uma pesquisa com N pessoas, coletando dados sobre o salário e o número de filhos. A prefeitura deseja saber: 

(a) A média do salário dessas pessoas 
(b) A média do número de filhos 
(c) O maior salário 
(d) A percentagem de pessoas com salários até R$ 1.500,00.

Faça um programa em C que solicita informações de um número N de pessoas (valor N dado como entrada) e imprime em tela as métricas desejadas. */

#include <stdio.h>

int main() {
    int n, filhos, pessoas_ate_1500 = 0;
    float salario, media_salario = 0, media_filhos = 0, maior_salario = 0;

    printf("Digite o número de pessoas: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Digite o salário da pessoa %d: ", i + 1);
        scanf("%f", &salario);

        printf("Digite o número de filhos da pessoa %d: ", i + 1);
        scanf("%d", &filhos);

        media_salario += salario;
        media_filhos += filhos;

        if (salario > maior_salario) {
            maior_salario = salario;
        }

        if (salario <= 1500) {
            pessoas_ate_1500++;
        }
    }

    media_salario /= n;
    media_filhos /= n;

    printf("A média do salário dessas pessoas é: %.2f\n", media_salario);
    printf("A média do número de filhos é: %.2f\n", media_filhos);
    printf("O maior salário é: %.2f\n", maior_salario);
    printf("A percentagem de pessoas com salários até R$ 1.500,00 é: %.2f%%\n", (float) pessoas_ate_1500 / n * 100);

    return 0;
}