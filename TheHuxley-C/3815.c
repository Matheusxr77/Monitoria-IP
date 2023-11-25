#include <stdio.h>

int main() {
    // Declaração de variáveis
    int dia = 1, mes = 1, ano = 1900;

    // Leitura do dia
    scanf("%d", &dia);
    if (dia < 1 || dia > 31) {
        printf("Dia inexistente");
    } else {
        // Leitura do mês
        scanf("%d", &mes);
        if (mes < 1 || mes > 12) {
            printf("Mês inexistente");
        } else if ((mes == 4 && dia > 30) || (mes == 6 && dia > 30) || (mes == 9 && dia > 30) || (mes == 11 && dia > 30) || (mes == 2 && dia > 29)) {
            printf("Esse dia não existe nesse mês");
        } else {
            // Leitura do ano
            scanf("%d", &ano);
            if (ano < 1900 || ano > 2020) {
                printf("Ano inexistente");
            } else if ((mes == 2 && dia == 29 && ano%4 > 0) || (mes == 2 && dia == 29 && ano%4 == 0 && ano%100 == 0 && ano%400 > 0)) {
                printf("Esse ano não é bissexto");
            } else {
                printf("Data Validada");
            }
        }
    }

    return 0;
}