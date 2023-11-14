/* Produza um algoritmo em c que leia um número real positivo e divida-o por dois (sucessivamente)
até que o resultado seja menor que 1, que imprima o resultado da divisão e a quantidade de vezes que ele foi dividido */

#include <stdio.h>

int main() {
    float numero, resultado;
    int contador = 0;

    // Solicita ao usuário um número real positivo
    printf("Digite um número real positivo: \n");
    scanf("%f", &numero);

    // Inicializa a variável 'resultado' com o número fornecido
    resultado = numero;

    // Loop enquanto o resultado for maior ou igual a 1
    while (resultado >= 1) {
        resultado /= 2;  // Divide o resultado por 2
        contador++;      // Incrementa o contador de divisões
    }

    // Imprime o resultado final e o número de divisões
    printf("O resultado da divisão é %.2f e foi dividido %d vezes.", resultado, contador);

    return 0;
}