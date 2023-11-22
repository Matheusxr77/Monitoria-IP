#include <stdio.h>

int main() {
    // Declaração de variáveis
    int entrada1, entrada2, entrada3, resultado;
    char operador1, operador2;
    char disjuncao = 'v';  // Assume 'v' como representação de OU
    char conjuncao = '^'; // Assume '^' como representação de E

    // Leitura dos valores e operadores fornecidos pelo usuário
    scanf("%d %c %d %c %d", &entrada1, &operador1, &entrada2, &operador2, &entrada3);

    // Avaliação das expressões lógicas com base nos operadores fornecidos
    if (operador1 == disjuncao && operador2 == disjuncao) {
        resultado = entrada1 || entrada2 || entrada3;
    } else if (operador1 == disjuncao && operador2 == conjuncao) {
        resultado = entrada1 || entrada2 && entrada3;
    } else if (operador1 == conjuncao && operador2 == disjuncao) {
        resultado = entrada1 && entrada2 || entrada3;
    } else if (operador2 == conjuncao && operador1 == conjuncao) {
        resultado = entrada1 && entrada2 && entrada3;
    }

    // Impressão do resultado da expressão lógica
    printf("%d", resultado);

    return 0;
}