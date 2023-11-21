#include <stdio.h>

// Função para verificar se um ano é bissexto
int bissexto (int ano) {
    // Verifica se o ano é divisível por 4.
    if (ano % 4 == 0) {
        // Verifica se o ano não é divisível por 100, a menos que seja divisível por 400.
        if (ano % 100 != 0) {
            return 1;  // Ano bissexto
        } else {
            // Verifica se o ano é divisível por 400.
            if (ano % 400 == 0) {
                return 1;  // Ano bissexto
            } else {
                return 0;  // Não é um ano bissexto
            }
        }
    } else {
        return 0;  // Não é um ano bissexto
    }
}

// Função para obter o número de dias em um determinado mês
int diasNoMes (int mes, int ano) {
    int dias;

    if (mes == 2) {
        // Fevereiro tem 29 dias em anos bissextos e 28 em anos não bissextos.
        if (bissexto(ano)) {
            dias = 29;
        } else {
            dias = 28;
        }
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        // Meses com 30 dias.
        dias = 30;
    } else {
        // Meses com 31 dias.
        dias = 31;
    }

    return dias;
}

// Função para calcular o número total de dias até uma data
long int calcularDias (int dia, int mes, int ano) {
    long int totalDias = 365 * ano;
    int i;

    for (i = 1; i < mes; i++) {
        totalDias += diasNoMes(i, ano);
    }

    totalDias += dia;

    // Adiciona um dia extra para cada ano bissexto
    for (i = 1; i < ano; i++) {
        if (bissexto(i)) {
            totalDias++;
        }
    }

    return totalDias;
}

int main() {
    // Declaração de variáveis
    int dia1, dia2, mes1, mes2, ano1, ano2;

    // Leitura das datas
    scanf("%d/%d/%d", &dia1, &mes1, &ano1);
    scanf("%d/%d/%d", &dia2, &mes2, &ano2);

    // Calcular o número total de dias para cada data
    long int totalDias1 = calcularDias(dia1, mes1, ano1);
    long int totalDias2 = calcularDias(dia2, mes2, ano2);

    // Imprimir a diferença em dias entre as duas datas
    printf("%ld", totalDias2 - totalDias1);

    return 0;
}