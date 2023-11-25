#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis
    char comida[20], bebida[20];
    double conta;
    int i;

    // Inicialização da variável de conta
    conta = 0;

    // Leitura das palavras (strings) comida e bebida
    scanf("%s\n%s", comida, bebida);
 
    // Converte todas as letras das palavras para minúsculas
    for (i = 0; comida[i]; i++) {
        comida[i] = tolower(comida[i]);
    }
    
    for (i = 0; bebida[i]; i++) {
        bebida[i] = tolower(bebida[i]);
    }
    
    // Verifica o tipo de comida escolhida e adiciona o valor correspondente à conta
    if (strcmp(comida, "lasanha") == 0) {
        conta += 8.00;
    } else if (strcmp(comida, "estrogonofe") == 0) {
        conta += 11.00;
    }

    // Verifica o tipo de bebida escolhida e adiciona o valor correspondente à conta
    if (strcmp(bebida, "refrigerante") == 0) {
        conta += 3.00;
    } else if (strcmp(bebida, "suco") == 0) {
        conta += 2.50;
    }

    // Imprime o valor total da conta com duas casas decimais
    printf("%.2lf\n", conta);

    return 0;
}