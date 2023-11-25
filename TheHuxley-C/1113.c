#include <stdio.h>

// Função que verifica se um ano é bissexto
int bissexto (int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return 1; // Ano bissexto
    } else {
        return 0; // Não é um ano bissexto
    }
}

// Função que verifica se uma data é válida
int data (int dia, int mes, int ano) {
    if (ano < 1900 || ano > 2100) {
        // Ano fora do intervalo permitido
        return 0;
    }

    if (mes < 1 || mes > 12) {
        // Mês fora do intervalo permitido
        return 0;
    }

    if (mes == 2) {
        // Verifica se o dia é válido para fevereiro, considerando se o ano é bissexto
        if (bissexto(ano)) {
            if (dia < 1 || dia > 29) {
                return 0;
            }
        } else {
            if (dia < 1 || dia > 28) {
                return 0;
            }
        }
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        // Verifica se o dia é válido para abril, junho, setembro ou novembro
        if (dia < 1 || dia > 30) {
            return 0;
        }
    } else {
        // Para os outros meses, verifica se o dia é válido
        if (dia < 1 || dia > 31) {
            return 0;
        }
    }

    // Se todas as verificações passarem, a data é considerada válida
    return 1;
}

int main() {
    // Declaração de variáveis
    int dia, mes, ano;

    // Leitura da data a partir da entrada padrão
    scanf("%d %d %d", &dia, &mes, &ano);

    // Verifica se a data é válida e imprime o resultado
    if (data(dia, mes, ano)) {
        printf("valida\n");
    } else {
        printf("invalida\n");
    }

    return 0;
}