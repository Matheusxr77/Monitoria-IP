#include <stdio.h>
#include <time.h>

int main() {
    int diaNasc, mesNasc, anoNasc, idade;
    time_t agora;
    struct tm *infoTempo;

    // Obtem a data e hora atuais
    agora = time(NULL);
    infoTempo = localtime(&agora);
    int anoAtual = infoTempo->tm_year + 1900;

    // Solicita ao usuário o dia, mês e ano de nascimento
    printf("Digite o dia de nascimento: ");
    scanf("%d", &diaNasc);
    printf("Digite o mes de nascimento: ");
    scanf("%d", &mesNasc);
    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNasc);

    // Calcula a idade da pessoa
    idade = anoAtual - anoNasc;
    if (mesNasc > infoTempo->tm_mon + 1 || (mesNasc == infoTempo->tm_mon + 1 && diaNasc > infoTempo->tm_mday)) {
        idade--;
    }

    // Exibe a idade da pessoa
    printf("A idade da pessoa e: %d anos.\n", idade);

    return 0;
}