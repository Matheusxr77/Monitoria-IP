#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis
    char nocode[1000], code[1000];
    int i, j, tamstring, n, m, l, entradas;

    // Solicita ao usuário o número de entradas
    scanf("%d", &entradas);
    getchar();  // Lê o caractere de quebra de linha após o número de entradas

    // Loop para processar cada entrada
    while (entradas--) {
        // Lê a string de entrada
        gets(nocode); // Função para leitura de strings

        // Calcula o tamanho da string
        tamstring = strlen(nocode);

        // Criptografa a string
        for (i = 0; i < tamstring; i = i + 1) {
            if ((nocode[i] >= 'A' && nocode[i] <= 'Z') || (nocode[i] >= 'a' && nocode[i] <= 'z'))
                nocode[i] = nocode[i] + 3;
        }

        n = 0;

        // Inverte a string
        for (j = tamstring - 1; j >= 0; j = j - 1) {
            code[n] = nocode[j];
            n = n + 1;
        }

        code[n] = '\0';
        l = tamstring / 2;

        // Decrementa em 1 o valor ASCII dos caracteres na metade da string em diante
        for (i = l; i < tamstring; i = i + 1) {
            code[i] = code[i] - 1;
        }

        // Imprime a string criptografada
        printf("%s\n", code);
    }

    return 0;
}