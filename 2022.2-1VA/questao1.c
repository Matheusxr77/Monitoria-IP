/* Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se aposentar. 
As condições para aposentadoria são:
a) Ter pelo menos 65 anos.
b) Ou ter trabalhado pelo menos 30 anos.
c) Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos. */

#include <stdio.h>

int podeAposentar (int idade, int tempoServico) {
    // a) Ter pelo menos 65 anos.
    int condicaoA = idade >= 65;

    // b) Ou ter trabalhado pelo menos 30 anos.
    int condicaoB = tempoServico >= 30;

    // c) Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
    int condicaoC = idade >= 60 && tempoServico >= 25;

    if (condicaoA || condicaoB || condicaoC) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int idade, tempoServico;

    printf("Digite a idade do trabalhador: \n");
    scanf("%d", &idade);

    printf("Digite o tempo de servico do trabalhador: \n");
    scanf("%d", &tempoServico);

    if (podeAposentar(idade, tempoServico)) {
        printf("O trabalhador pode se aposentar!\n");
    } else {
        printf("O trabalhador nao pode se aposentar!\n");
    }

    return 0;
}